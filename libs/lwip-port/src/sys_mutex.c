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
 * @ingroup sys_mutex
 * Create a new mutex.
 * Note that mutexes are expected to not be taken recursively by the lwIP code,
 * so both implementation types (recursive or non-recursive) should work.
 * The mutex is allocated to the memory that 'mutex'
 * points to (which can be both a pointer or the actual OS structure).
 * If the mutex has been created, ERR_OK should be returned. Returning any
 * other error will provide a hint what went wrong, but except for assertions,
 * no real error handling is implemented.
 *
 * @param mutex pointer to the mutex to create
 * @return ERR_OK if successful, another err_t otherwise
 */
err_t sys_mutex_new(sys_mutex_t* mutex)
{
	mutex_init(mutex);
	return ERR_OK;
}

/**
 * @ingroup sys_mutex
 * Blocks the thread until the mutex can be grabbed.
 * @param mutex the mutex to lock
 */
void sys_mutex_lock(sys_mutex_t* mutex)
{
	mutex_lock(mutex);
}

/**
 * @ingroup sys_mutex
 * Releases the mutex previously locked through 'sys_mutex_lock()'.
 * @param mutex the mutex to unlock
 */
void sys_mutex_unlock(sys_mutex_t* mutex)
{
	mutex_unlock(mutex);
}

/**
 * @ingroup sys_mutex
 * Deallocates a mutex.
 * @param mutex the mutex to delete
 */
void sys_mutex_free(sys_mutex_t* mutex)
{
	mutex_destroy(mutex);
}

/**
 * @ingroup sys_mutex
 * Returns 1 if the mutes is valid, 0 if it is not valid.
 * When using pointers, a simple way is to check the pointer for != NULL.
 * When directly using OS structures, implementing this may be more complex.
 * This may also be a define, in which case the function is not prototyped.
 */
int sys_mutex_valid(sys_mutex_t* mutex)
{
	return mutex != NULL;
}

/**
 * @ingroup sys_mutex
 * Invalidate a mutex so that sys_mutex_valid() returns 0.
 * ATTENTION: This does NOT mean that the mutex shall be deallocated:
 * sys_mutex_free() is always called before calling this function!
 * This may also be a define, in which case the function is not prototyped.
 */
void sys_mutex_set_invalid(sys_mutex_t* mutex)
{ }

#endif