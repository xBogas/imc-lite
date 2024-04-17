// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Concurrency/Semaphore.h"
#include "Concurrency/Scheduler.h"

#include <stdlib.h>

_BEGIN_STD_C

void sem_init(struct sem* sem, u8 max_count)
{
	ASSERT_ERR(sem != NULL, "Semaphore is NULL");
	ASSERT_ERR(max_count > 0, "Semaphore count must be greater than 0");

	sem->wait_list = list_create();
	ASSERT_ERR(sem->wait_list != NULL, "Failed to create list for semaphore");

	sem->count = max_count;
}

struct sem* sem_create(u8 max_count)
{
	struct sem* sem = (struct sem*)malloc(sizeof(struct sem));
	ASSERT_ERR(sem != NULL, "Failed to allocate memory for semaphore");
	sem_init(sem, max_count);

	return sem;
}

void sem_destroy(struct sem* sem)
{
	//? What if there are threads waiting for the semaphore?
	if (sem->count < 0) {
	}

	// Release the semaphore
	free(sem);
}

/// @brief Block the current thread until it acquires the semaphore
/// @param sem Semaphore structure to acquire
static inline bool block_thread(struct sem* sem)
{
	while (sem->count <= 0) {
		struct thread* thr = sched_get_thr();
		debug("Thread %s is blocked", thr->name);
		list_append(sem->wait_list, thr);
		thr->state = THREAD_BLOCKED;

		sched_yield();
	}

	return true;
}

/**
 * TODO: Implement a better way to handle the timeout
 * For now we are just pooling the semaphore until the timeout is reached
 */
bool sem_wait(struct sem* sem, u32 ms)
{
	// Protect the semaphore

	if (ms == 0) // Wait indefinitely
		return block_thread(sem);

	u32 start = HAL_GetTick();
	while (sem->count <= 0) {
		if (HAL_GetTick() - start >= ms)
			return false;

		yield();
	}

	sem->count--;

	// Release the semaphore
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
		thr->state = THREAD_READY;

		if (thr->priority > max->priority) {
			sched_push_thr(max);
			max = thr;
		} else
			sched_push_thr(thr);

	} while (list_size(lst) > 0);

	if (max != curr)
		sched_dispatch(max, curr);
}

void sem_signal(struct sem* sem)
{
	// Protect the semaphore
	sem->count++;

	if (list_size(sem->wait_list) > 0)
		wake_up(sem->wait_list);

	// Release the semaphore
}

_END_STD_C