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

void mutex_init(struct mutex* mtx)
{
	mtx->owner = NULL;
	mtx->blocked = queue_create(MAX_MUTEX_QUEUE);
	mtx->count = 0;
}

struct mutex* mutex_create(void)
{
	struct mutex* mtx = (struct mutex*)malloc(sizeof(struct mutex));
	mutex_init(mtx);

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

//! Mutex queue needs a lock - when multiple pushes are ocorring it may trigger an error!

static void sleep(struct mutex* mtx, struct thread* run)
{
	run->state = THREAD_BLOCKED;
	u8 rv = queue_push(mtx->blocked, run);
	if (rv != QUEUE_ERR_NONE)
		error("Mutex queue is full");

	// dispatch will unlock the IRQ
	sched_dispatch(mtx->owner, NULL);

	// Thread was woken up
	run->state = THREAD_RUNNING;
}

void mutex_lock(struct mutex* mtx)
{
	struct thread* thr = sched_get_thr();
	if (thr == NULL)
		return;

	while (mtx->owner != NULL && mtx->owner != thr)
		sleep(mtx, thr);

	mtx->owner = thr;
	mtx->count++;
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
	struct thread* curr = mtx->owner;
	if (curr == NULL)
		error("Mutex is not locked");

	if (curr != sched_get_thr())
		error("Mutex is not locked by current thread");

	mtx->count--;
	if ( mtx->count > 0)
		return;

	mtx->owner = NULL;

	struct thread* next = (struct thread*)queue_pop(mtx->blocked);
	if (next == NULL)
		return;

	sched_dispatch(next, curr);
}

_END_STD_C