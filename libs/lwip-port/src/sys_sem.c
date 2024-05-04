// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "lwip/arch.h"
#include "lwip/sys.h"

#if !NO_SYS

/**
 * @ingroup sys_sem
 * Create a new semaphore
 * Creates a new semaphore. The semaphore is allocated to the memory that 'sem'
 * points to (which can be both a pointer or the actual OS structure).
 * The "count" argument specifies the initial state of the semaphore (which is
 * either 0 or 1).
 * If the semaphore has been created, ERR_OK should be returned. Returning any
 * other error will provide a hint what went wrong, but except for assertions,
 * no real error handling is implemented.
 *
 * @param sem pointer to the semaphore to create
 * @param count initial count of the semaphore
 * @return ERR_OK if successful, another err_t otherwise
 */
err_t sys_sem_new(sys_sem_t* sem, u8 max_count)
{
	sem_init(sem, max_count);
	return ERR_OK;
}

/**
 * @ingroup sys_sem
 * Signals a semaphore
 * @param sem the semaphore to signal
 */
void sys_sem_signal(sys_sem_t* sem)
{
	sem_signal(sem);
}

/**
 * @ingroup sys_sem
 *  Blocks the thread while waiting for the semaphore to be signaled. If the
 * "timeout" argument is non-zero, the thread should only be blocked for the
 * specified time (measured in milliseconds). If the "timeout" argument is zero,
 * the thread should be blocked until the semaphore is signalled.
 *
 * The return value is SYS_ARCH_TIMEOUT if the semaphore wasn't signaled within
 * the specified time or any other value if it was signaled (with or without
 * waiting).
 * Notice that lwIP implements a function with a similar name,
 * sys_sem_wait(), that uses the sys_arch_sem_wait() function.
 *
 * @param sem the semaphore to wait for
 * @param timeout timeout in milliseconds to wait (0 = wait forever)
 * @return SYS_ARCH_TIMEOUT on timeout, any other value on success
 */
u32_t sys_arch_sem_wait(sys_sem_t* sem, u32 ms)
{
	return sem_wait(sem, ms) ? SYS_ARCH_TIMEOUT : 0;
}

/**
 * @ingroup sys_sem
 * Deallocates a semaphore.
 * @param sem semaphore to delete
 */
void sys_sem_free(sys_sem_t* sem)
{
	sem_destroy(sem);
}

/**
 * @ingroup sys_sem
 * Returns 1 if the semaphore is valid, 0 if it is not valid.
 * When using pointers, a simple way is to check the pointer for != NULL.
 * When directly using OS structures, implementing this may be more complex.
 * This may also be a define, in which case the function is not prototyped.
 */
int sys_sem_valid(sys_sem_t* sem)
{
	return sem != NULL;
}

/**
 * @ingroup sys_sem
 * Invalidate a semaphore so that sys_sem_valid() returns 0.
 * ATTENTION: This does NOT mean that the semaphore shall be deallocated:
 * sys_sem_free() is always called before calling this function!
 * This may also be a define, in which case the function is not prototyped.
 */
void sys_sem_set_invalid(sys_sem_t* sem)
{ }

#endif // !NO_SYS