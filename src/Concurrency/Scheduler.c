// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Concurrency/Scheduler.h"

#include "Structures/Heap.h"

#ifndef trig_PendSV
#define trig_PendSV() SCB->ICSR |= SCB_ICSR_PENDSVSET_Msk
#endif

#ifndef N_THREADS
#define N_THREADS MAX_THREADS
#endif

_BEGIN_STD_C

// Assembly function to jump start to a thread
extern void sched_jump(u32 stack_ptr);

// Assembly idle function thread
extern void idle_thread(void);

struct {
	struct thread* current;
	struct thread* next;
	bool running;
	bool lock;
	struct heap* queue;
} sched;

// For debugging thread queue state
struct thread* DEBUG_ARR__________[MAX_THREADS];

struct frame {
	uint32_t r0;
	uint32_t r1;
	uint32_t r2;
	uint32_t r3;
	uint32_t r12;
	uint32_t lr;
	uint32_t pc;
	uint32_t xPSR;
};

struct frame idle_frame = {
	.r0 = 0,
	.r1 = 1,
	.r2 = 2,
	.r3 = 3,
	.r12 = 12,
	.lr = (uint32_t)idle_thread,
	.pc = (uint32_t)idle_thread,
	.xPSR = 0x01000000u,
};

void sched_init(void)
{
	// Initialize the scheduler
	sched.queue = heap_create(MAX_THREADS, (heap_fn)thr_get_priority);
	sched.queue->data = (void**)DEBUG_ARR__________;
	sched.current = NULL;
	sched.next = NULL;
	sched.lock = false;
	sched.running = false;
}

struct thread* sched_get_thr(void)
{
	return sched.current;
}

void sched_push_thr(struct thread* th)
{
	// Add a thread to the scheduler
	if (th->in_queue != 0) {
		return;
	}

	th->in_queue++;
	heap_push(sched.queue, th);
}
/* static inline  */
struct thread* sched_pop(void)
{
	struct thread* nxt = (struct thread*)heap_pop(sched.queue);
	if (nxt) {
		nxt->in_queue--;
	}

	return nxt;
}

void sched_start(void)
{
	NVIC_SetPriority(SysTick_IRQn, 0x00);
	NVIC_SetPriority(SVCall_IRQn, 0x01);
	NVIC_SetPriority(PendSV_IRQn, 0x01);
	NVIC_SetPriority(TIM2_IRQn, 0x02); // To dispatch threads

	struct thread* th = sched_pop();
	ASSERT_ERR(th == NULL, "No threads registered in scheduler!");
	th->in_queue = 0;

	debug("Starting thread %s", th->name);
	sched.current = th;
	sched.running = true;
	sched_jump(th->stack_ptr);
}

void osSystickHandler(void)
{
	// If context switch is already pending, return
	if (SCB->ICSR & SCB_ICSR_PENDSVSET_Msk)
		return;

	// System tick handler
	if (!sched.running)
		return;

	if (sched.lock)
		return;

	struct thread* nxt = sched_pop();
	if (!nxt)
		return;

	if (sched.current == nxt)
		return;

	if (sched.current->in_queue == 0) {
		sched_push_thr(sched.current);
	}

	sched.next = nxt;
	trig_PendSV();
}

void yield(void)
{
	// Yield the current thread
	if (!sched.running)
		return;

	sched.lock = true;

	struct thread* nxt = sched_pop();
	if (!nxt) { // No threads to run - Wait in low power mode
		sched.lock = false;
		__WFI();
		return;
	}

	if (sched.current->state == THREAD_RUNNING &&
		sched.current->in_queue == 0) {
		sched_push_thr(sched.current);
	}

	sched.next = nxt;

	sched.lock = false;
	trig_PendSV();
}

void sched_dispatch(struct thread* nxt, struct thread* cur)
{
	if (sched.lock)
		error("Scheduler is locked");

	sched.lock = true;

	// If nxt is in queue and set to run
	// It will create a dual entry in the queue
	sched.next = nxt;
	if (cur) {
		// Add the current thread to the queue
		if (cur->in_queue == 0) {
			sched_push_thr(cur);
		}

		if (sched.current != cur)
			error("Current thread is not the same as the one dispatched");
	}

	if (SCB->ICSR & SCB_ICSR_PENDSVSET_Msk)
		error("PendSV is already set");

	// Trigger PendSV
	sched.lock = false;
	trig_PendSV();
}

// Yield and do not add thread to scheduler
void sched_yield(struct thread* th)
{
	if (sched.lock)
		error("Scheduler is locked");

	sched.lock = true;

	struct thread* nxt = sched_pop();
	if (!nxt) {
		sched.lock = false;
		__WFI();
		return;
	}


	if (th != sched.current)
		error("Thread is not the current thread");

	while (th == nxt) {
		nxt = sched_pop();
		if (!nxt) {
			sched.lock = false;
			__WFI();
			return;
		}
	}

	sched.next = nxt;

	sched.lock = false;
	trig_PendSV();
}

bool sched_running(void)
{
	return sched.running;
}

bool sched_is_locked(void)
{
	return sched.lock;
}

void sched_lock(void)
{
	sched.lock = true;
}

void sched_unlock(void)
{
	sched.lock = false;
}

_END_STD_C