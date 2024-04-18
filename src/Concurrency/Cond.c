// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Concurrency/Cond.h"
#include "Concurrency/Scheduler.h"

_BEGIN_STD_C

void cond_init(struct cond* cond_var)
{
	ASSERT_ERR(cond_var != NULL, "cond_var is NULL");

	cond_var->wait_queue = list_create();
}

struct cond* cond_create(void)
{
	struct cond* cond_var = (struct cond*)malloc(sizeof(struct cond));

	cond_init(cond_var);

	return cond_var;
}

bool cond_wait_timeout(struct cond* cond_var, u32 ms)
{
	ASSERT_ERR(cond_var != NULL, "cond_var is NULL");

	struct thread* curr = sched_get_thr();
	curr->state = THREAD_WAITING;
	u32 start = HAL_GetTick();
	list_append(cond_var->wait_queue, curr);
	do {

		yield();
		if (HAL_GetTick() - start >= ms) {
			curr->state = THREAD_READY;
			return false;
		}
	} while (curr->state == THREAD_WAITING);

	return true;
}

void cond_wait(struct cond* cond_var)
{
	ASSERT_ERR(cond_var != NULL, "cond_var is NULL");

	struct thread* curr = sched_get_thr();
	curr->state = THREAD_BLOCKED;
	do {

		list_append(cond_var->wait_queue, curr);
		sched_yield();
	} while (curr->state == THREAD_BLOCKED);
}

bool cond_signal_one(struct cond* cond_var)
{
	ASSERT_ERR(cond_var != NULL, "cond_var is NULL");

	struct thread* thr = (struct thread*)list_pop(cond_var->wait_queue);
	if (thr == NULL)
		return false;

	struct thread* curr = sched_get_thr();
	if (curr->priority < thr->priority)
		sched_push_thr_safe(thr);
	else
		sched_dispatch(curr, thr);

	return true;
}

/// @brief This function will wake up all threads in the list and
/// add them to the scheduler and if the thread has a higher priority
/// than the current thread, the scheduler will dispatch the thread
/// @param lst List of threads
/// @note List must have at least one element
static inline void wake_up(struct list* lst)
{
	struct thread* curr = sched_get_thr();
	struct thread* max = curr;
	do {
		struct thread* thr = (struct thread*)list_pop(lst);
		if (thr->state == THREAD_RUNNING) // Thread timed out
			continue;

		thr->state = THREAD_READY;

		if (thr->priority < max->priority) {
			sched_push_thr(max);
			max = thr;
		} else
			sched_push_thr(thr);

	} while (list_size(lst) > 0);

	if (max != curr)
		sched_dispatch(max, curr);
}

bool cond_signal_all(struct cond* cond_var)
{
	ASSERT_ERR(cond_var != NULL, "cond_var is NULL");
	if (list_size(cond_var->wait_queue) > 0) {
		wake_up(cond_var->wait_queue);
		return true;
	}

	return false;
}

_END_STD_C