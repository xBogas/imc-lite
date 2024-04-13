// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Concurrency/Mutex.h"
#include "Concurrency/Scheduler.h"

_BEGIN_STD_C

struct mutex* mutex_create(void)
{
	struct mutex* mtx = (struct mutex*)malloc(sizeof(struct mutex));
	mtx->owner = NULL;

	mtx->blocked = queue_create(MAX_MUTEX_QUEUE);

	return mtx;
}

void mutex_destroy(struct mutex* mtx)
{
	// TODO: Check is mutex is owned or is blocking other thread_ts
	if (mtx->owner || mtx->blocked->size > 0)
		error("Mutex is still in use\n");

	queue_destroy(mtx->blocked);
	free(mtx);
}

static void sleep(struct mutex* mtx, struct thread* run)
{
	run->state = THREAD_BLOCKED;
	queue_push(mtx->blocked, run);

	// dispatch will unlock the IRQ
	sched_dispatch(mtx->owner, NULL);

	// Thread was woken up
	run->state = THREAD_RUNNING;
}

void mutex_lock(struct mutex* mtx)
{
	if (sched_running() == false)
		return;

	struct thread* thr = sched_get_thr();
	if (thr == NULL)
		return;

	while (mtx->owner != NULL)
		sleep(mtx, thr);

	if (mtx->owner != NULL)
		error("Mutex is still locked");

	mtx->owner = thr;
}

/**
 * Requeue threads in the blocked queue
 *
 * Wake up just one thread ? or all ?
 *
 * Select thread with highest priority to run!
 * If thread has higher priority than current thread, switch to it
 * Add current thread to the scheduler or to mutex blocked queue ?
 */

void mutex_unlock(struct mutex* mtx)
{
	if (sched_running() == false)
		return;

	struct thread* curr = mtx->owner;
	if (curr == NULL)
		error("Mutex is not locked");

	if (curr != sched_get_thr())
		error("Mutex is not locked by current thread");

	mtx->owner = NULL;

	struct thread* next = (struct thread*)queue_pop(mtx->blocked);
	if (next == NULL)
		return;

	sched_dispatch(next, curr);
}

_END_STD_C