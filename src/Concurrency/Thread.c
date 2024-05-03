// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Concurrency/Thread.h"

#include <stdlib.h>

#ifndef MIN_STACK
#define MIN_STACK 0x400
#endif

_BEGIN_STD_C

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

static void thr_stack_init(struct thread* th, u32 stack_size,
						   thr_fn entry_point, void* arg)
{
	ASSERT_ERR(entry_point != NULL, "Thread entry point is NULL");

	th->stack_bottom = (u32)malloc(stack_size);
	ASSERT_ERR(th->stack_bottom != 0, "Failed to allocate stack for thread %s",
			   th->name);

	th->stack_ptr = th->stack_bottom + stack_size - sizeof(struct stack_fr);
	struct stack_fr* sf = (struct stack_fr*)th->stack_ptr;
	sf->r0 = (u32)arg;
	sf->r1 = 1;
	sf->r2 = 2;
	sf->r3 = 3;

	sf->r4 = 4;
	sf->r5 = 5;
	sf->r6 = 6;
	sf->r7 = 7;
	sf->r8 = 8;
	sf->r9 = 9;
	sf->r10 = 10;
	sf->r11 = 11;

	sf->r12 = 12;
	sf->lr = 0; // TODO: Change to safe return address
	sf->pc = (u32)entry_point;
	sf->psr = 0x01000000;
}

void thread_init(struct thread* th, u32 stack_size, const char* name, thr_fn fp,
				 void* arg)
{
	ASSERT_ERR(th != NULL, "Thread is NULL");
	ASSERT_ERR(stack_size >= MIN_STACK, "Stack size is invalid");
	ASSERT_ERR(stack_size % 4 == 0, "Stack size must be a multiple of 4");

	th->stack_ptr = 0;
	th->stack_bottom = 0;
	th->fpu_flag = (u8)(EXC_RETURN_THREAD_PSP & 0x0FF);
	th->priority = 126;
	th->state = THREAD_READY;
	th->name = name;
	th->in_queue = 0;

	thr_stack_init(th, stack_size, fp, arg);
}

struct thread* thread_create(u32 stack_size, const char* name, thr_fn run,
							 void* arg)
{
	struct thread* th = (struct thread*)malloc(sizeof(struct thread));
	if (arg == NULL)
		arg = th;
	thread_init(th, stack_size, name, run, arg);

	return th;
}

void thread_destroy(struct thread* th)
{
	free((void*)th->stack_bottom);
	free(th);
}

_END_STD_C