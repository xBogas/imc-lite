// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "lwip/arch.h"
#include "lwip/sys.h"

u32_t sys_now(void)
{
	return HAL_GetTick();
}

void sys_init(void)
{ }


#if !NO_SYS

/**
 * @ingroup sys_misc
 * The only thread function:
 * Starts a new thread named "name" with priority "prio" that will begin its
 * execution in the function "thread()". The "arg" argument will be passed as an
 * argument to the thread() function. The stack size to used for this thread is
 * the "stacksize" parameter. The id of the new thread is returned. Both the id
 * and the priority are system dependent.
 * ATTENTION: although this function returns a value, it MUST NOT FAIL (ports
 * have to assert this!)
 *
 * @param name human-readable name for the thread (used for debugging purposes)
 * @param thread thread-function
 * @param arg parameter passed to 'thread'
 * @param stacksize stack size in bytes for the new thread (may be ignored by
 * ports)
 * @param prio priority of the new thread (may be ignored by ports) */
sys_thread_t sys_thread_new(const char* name, void (*thread)(void*), void* arg,
							int stacksize, int prio)
{
	struct thread newthread;
	thread_init(&newthread, stacksize, name, thread, arg);
	newthread.priority = prio;

	thr_set_priority(&newthread, prio);

	sched_push_thr_safe(&newthread);
	return newthread;
}


#endif // !NO_SYS
