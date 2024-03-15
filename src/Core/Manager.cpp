#include "Core/Manager.h"
#include "Core/Interface.h"

#include "System/Error.h"

// Board specific headers
#include "stm32f7xx.h"
#include "stm32f7xx_hal.h"

// Trigger PendSV exception for context switch
#define trig_PendSV() SCB->ICSR |= SCB_ICSR_PENDSVSET_Msk

// Stack pointer offset for class Thread

// Offset between the stack pointer and the Thread class
// Since different compilers can implement
// the virtual table differently
uint32_t sp_offset = 0;

class TaskManager Manager;

// force C linkage
_BEGIN_STD_C

struct {
	Thread* currThread;
	Thread* nextThread;
} th_status;

extern void sched_jump(uint32_t);

// use another timer to implement the osTick
void osSystickHandler(void)
{
	if (!Manager.isRunning())
		return;

	Thread* run = (Thread*)th_status.currThread;
	if (run->getState() == ThreadState::Running)
		Manager.pushThread(run);

	Thread* next = Manager.popThread();
	if (!next)
		return;

	th_status.nextThread = next;

	// Set PendSV to pending
	trig_PendSV();
}

void HardFault_Handler(void)
{
	// FIXME Debug must be a blocking write function
	error();
}

// TODO Verify that a Thread called yield
void yield(void)
{
	if (!Manager.isRunning())
		return;

	// If not using PSP return
	if (__get_CONTROL() != 2)
		return;

	osSystickHandler();
}

_END_STD_C

void TaskManager::start(void)
{
	NVIC_SetPriority(SysTick_IRQn, 0);
	NVIC_SetPriority(PendSV_IRQn, 0xff);

	// SysTick->CTRL = 0;
	// SysTick->LOAD = 0x00ffffff; // 	Max systick value
	// SysTick->VAL = 0;
	// SysTick->CTRL = 0b0111;

	Thread* th = thr_queue.getThread();
	if (!th) {
		Debug("No Threads to run");
		HardFault_Handler();
	}

	// get the stack pointer offset for class Thread
	sp_offset = (uint32_t) & (th->stack_ptr) - (uint32_t)th;
	th_status.currThread = th;
	running = true;
	sched_jump(th->stack_ptr);
}

void dispatch_thread(void* args)
{
	__disable_irq();
	Thread* thread = (Thread*)args;
	Thread* run = th_status.currThread;

	// Lower than running push to queue
	if (thread->priority < run->priority) {
		Manager.pushThread(run);
		__enable_irq();
		return;
	}

	// Higher than running, switch
	th_status.nextThread = thread;
	__enable_irq();
	trig_PendSV();
}