// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Concurrency/Scheduler.h"

#include "System.h"

#include "Structures/Heap.h"

#ifndef trig_PendSV
#define trig_PendSV() SCB->ICSR |= SCB_ICSR_PENDSVSET_Msk
#endif

#ifndef N_THREADS
#define N_THREADS MAX_THREADS
#endif

_BEGIN_STD_C

#ifdef DEBUG_SCHED
#define __debug(fmt, ...) debug("[SCHED:%d]" fmt, HAL_GetTick(), ##__VA_ARGS__)
#else
#define __debug(fmt, ...)
#endif

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

struct thread* DEBUG_ARR__________[MAX_THREADS];

struct stack_fr {
	u32 r8;
	u32 r9;
	u32 r10;
	u32 r11;
	u32 r4;
	u32 r5;
	u32 r6;
	u32 r7;
	u32 r0;
	u32 r1;
	u32 r2;
	u32 r3;
	u32 r12;
	u32 lr;
	u32 pc;
	u32 psr;
};

struct stack_fr idle_frame = {
	.r0 = 0,
	.r1 = 1,
	.r2 = 2,
	.r3 = 3,
	.r12 = 12,
	.lr = (uint32_t)idle_thread,
	.pc = (uint32_t)idle_thread,
	.psr = 0x01000000u,
};

struct thread idle_th;

void sched_init(void)
{
	// Initialize the scheduler
	sched.current = &idle_th;
	sched.next = NULL;
	sched.lock = false;
	sched.running = false;
	
	sched.queue = heap_create(MAX_THREADS, (heap_fn)thr_get_priority);
	// sched.queue->data = (void**)DEBUG_ARR__________;
	

	idle_th.name = "idle";
	idle_th.stack_ptr = (u32)&idle_frame;
	idle_th.state = THREAD_WAITING;
	idle_th.priority = ~(0); // Lowest priority
	idle_th.fpu_flag = (u8)(EXC_RETURN_THREAD_PSP & 0x0FF);
	idle_th.in_queue = 1;
}

struct thread* sched_get_thr(void)
{
	return sched.current;
}

void sched_push_thr(struct thread* th)
{
	// Add a thread to the scheduler
	if (th->in_queue != 0)
		return;

	th->in_queue++;
	heap_push(sched.queue, th);
}

void sched_push_thr_safe(struct thread* th)
{
	sched_lock();
	__debug("[wakeup] push %s while %s", th->name, sched.current->name);
	sched_push_thr(th);
	sched_unlock();
}

struct thread* sched_pop(void)
{
	struct thread* nxt = (struct thread*)heap_pop(sched.queue);
	if (nxt)
		nxt->in_queue--;

	return nxt;
}

void sched_start(void)
{
	NVIC_SetPriority(SysTick_IRQn, 0x0f);
	NVIC_SetPriority(PendSV_IRQn, 0xff);
	NVIC_SetPriority(TIM2_IRQn, 0x02); // To dispatch threads

	struct thread* th = sched_pop();
	ASSERT_ERR(th != NULL, "No threads registered in scheduler!");
	th->in_queue = 0;

	printk("Starting thread %s", th->name);
	sched.current = th;
	sched.running = true;
	sched_jump(th->stack_ptr);
}

void sched_stop(void)
{
	sched.running = false;
}

void osSystickHandler(void)
{
	// System tick handler
	if (!sched.running)
		return;

	if (sched.lock)
		return;

	struct thread* nxt = sched_pop();
	if (!nxt)
		return;

	__debug("[osTick] pop %s", nxt->name);

	if (sched.current == nxt) { // Should pop again
		__debug("[osTick] %s is the same as the next thread", nxt->name);
		return;
	}

	if (sched.current->in_queue == 0) {
		sched_push_thr(sched.current);
		__debug("[osTick] push %s", sched.current->name);
	}

	sched.next = nxt;

	__debug("[osTick] %s to %s", sched.current->name, nxt->name);
	trig_PendSV();
}

void yield(void)
{
	// Yield the current thread
	if (!sched.running)
		return;

	sched_lock();

	struct thread* nxt = sched_pop();
	if (!nxt) { // No threads to run - Wait in low power mode
		sched_unlock();
		__WFI();
		return;
	}
	__debug("[yield] pop %s", nxt->name);

	sched_push_thr(sched.current);
	sched.next = nxt;

	__debug("[yield] %s to %s", sched.current->name, nxt->name);
	trig_PendSV();
	sched_unlock();
}

void sched_dispatch(struct thread* nxt, struct thread* cur)
{
	sched_lock();
	if (nxt == cur) {
		error("[dispatch] %s to same", cur->name);
		sched_unlock();
		return;
	}

	if (SCB->ICSR & SCB_ICSR_PENDSVSET_Msk)
		sched_push_thr(sched.next);

	// If nxt is in queue and set to run
	// It will create a dual entry in the queue
	sched.next = nxt;
	if (cur) {
		// Add the current thread to the queue
		sched_push_thr(cur);

#ifdef DEBUG_SCHED
		if (sched.current != cur) // This can't happen - can probably be removed
			error("Current thread is not the same as the one dispatched");
#endif	
	}

	// Trigger PendSV
	__debug("[dispatch] %s to %s", sched.current->name, nxt->name);
	trig_PendSV();
	sched_unlock();
}

// Yield and do not add thread to scheduler
void sched_yield(void)
{
	if (sched.lock)
		error("Scheduler is locked");

	sched_lock();

	struct thread* th = sched_get_thr();
	struct thread* nxt = sched_pop();
	if (!nxt) {
		__debug("[yield] from %s going idle", th->name);
		sched.next = &idle_th;
		trig_PendSV();
		sched_unlock();
		return;
	}

	__debug("[yield] pop %s", nxt->name);

	if (th->in_queue) // If thread in queue yield will fail
		error("[yield] Thread %s in queue", th->name);

	sched.next = nxt;

	__debug("[yield] %s to %s", th->name, nxt->name);
	trig_PendSV();
	sched_unlock();
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
	IRQ_LOCK();
	sched.lock = true;
	__debug("lock");
}

void sched_unlock(void)
{
	__debug("unlock");
	sched.lock = false;
	IRQ_UNLOCK();
}

_END_STD_C