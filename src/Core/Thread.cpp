#include "Core/Thread.h"
#include "Core/Interface.h"

#include <cstdlib>

struct stack_frame {
	uint32_t r8;
	uint32_t r9;
	uint32_t r10;
	uint32_t r11;
	uint32_t r4;
	uint32_t r5;
	uint32_t r6;
	uint32_t r7;
	uint32_t r0;
	uint32_t r1;
	uint32_t r2;
	uint32_t r3;
	uint32_t r12;
	uint32_t lr;
	uint32_t pc;
	uint32_t psr;
};

void thread_entry_point(void* arg)
{
	Thread* th = (Thread*)arg;
	DebugF("Starting thread %s", th->name);
	th->run();

	th->setState(ThreadState::Dead);

	// terminate thread
	delete th;
}

Thread::Thread(uint32_t stack_size, const char* _name)
  : stack_ptr(0),
	stack_bottom(0),
	priority(126),
	name(_name)
{
	// TODO: Custom allocator for stack
	stack_bottom = (uint32_t)malloc(stack_size);
	if (stack_bottom == 0)
		Debug("Memory allocation failed");

	stack_ptr = stack_bottom + stack_size - sizeof(struct stack_frame);
	struct stack_frame* sf = (struct stack_frame*)stack_ptr;
	sf->r0 = (uint32_t)this;
	sf->r1 = 1;
	sf->r2 = 2;
	sf->r3 = 3;
	sf->r12 = 12;
	sf->lr = 0;
	sf->pc = (uint32_t)thread_entry_point;
	sf->psr = 0x01000000u; // set xPSR for cortex M
}