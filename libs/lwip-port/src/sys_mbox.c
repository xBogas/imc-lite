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
 * @ingroup sys_mbox
 * Creates an empty mailbox for maximum "size" elements. Elements stored
 * in mailboxes are pointers. You have to define macros "_MBOX_SIZE"
 * in your lwipopts.h, or ignore this parameter in your implementation
 * and use a default size.
 * If the mailbox has been created, ERR_OK should be returned. Returning any
 * other error will provide a hint what went wrong, but except for assertions,
 * no real error handling is implemented.
 *
 * @param mbox pointer to the mbox to create
 * @param size (minimum) number of messages in this mbox
 * @return ERR_OK if successful, another err_t otherwise
 */
err_t sys_mbox_new(sys_mbox_t* mbox, int size)
{
	mq_init(mbox, size);
	return ERR_OK;
}

/**
 * @ingroup sys_mbox
 * Post a message to an mbox - may not fail
 * -> blocks if full, only to be used from tasks NOT from ISR!
 *
 * @param mbox mbox to posts the message
 * @param msg message to post (ATTENTION: can be NULL)
 */
void sys_mbox_post(sys_mbox_t* mbox, void* msg)
{
	mq_push(mbox, msg);
}

/**
 * @ingroup sys_mbox
 * Try to post a message to an mbox - may fail if full.
 * Can be used from ISR (if the sys arch layer allows this).
 * Returns ERR_MEM if it is full, else, ERR_OK if the "msg" is posted.
 *
 * @param mbox mbox to posts the message
 * @param msg message to post (ATTENTION: can be NULL)
 */
err_t sys_mbox_trypost(sys_mbox_t* mbox, void* msg)
{
	return mq_try_push(mbox, msg);
}

/**
 * @ingroup sys_mbox
 * Try to post a message to an mbox - may fail if full.
 * To be be used from ISR.
 * Returns ERR_MEM if it is full, else, ERR_OK if the "msg" is posted.
 *
 * @param mbox mbox to posts the message
 * @param msg message to post (ATTENTION: can be NULL)
 */
err_t sys_mbox_trypost_fromisr(sys_mbox_t* mbox, void* msg)
{
	return mq_try_push(mbox, msg);
}

/**
 * @ingroup sys_mbox
 * Blocks the thread until a message arrives in the mailbox, but does
 * not block the thread longer than "timeout" milliseconds (similar to
 * the sys_arch_sem_wait() function). If "timeout" is 0, the thread should
 * be blocked until a message arrives. The "msg" argument is a result
 * parameter that is set by the function (i.e., by doing "*msg =
 * ptr"). The "msg" parameter maybe NULL to indicate that the message
 * should be dropped.
 * The return values are the same as for the sys_arch_sem_wait() function:
 * SYS_ARCH_TIMEOUT if there was a timeout, any other value if a messages
 * is received.
 *
 * Note that a function with a similar name, sys_mbox_fetch(), is
 * implemented by lwIP.
 *
 * @param mbox mbox to get a message from
 * @param msg pointer where the message is stored
 * @param timeout maximum time (in milliseconds) to wait for a message (0 = wait
 * forever)
 * @return SYS_ARCH_TIMEOUT on timeout, any other value if a message has been
 * received
 */
u32_t sys_arch_mbox_fetch(sys_mbox_t* mbox, void** msg, u32_t timeout)
{
	void* m_ptr = mq_pop_timeout(mbox, timeout);
	if (m_ptr != NULL)
		*msg = m_ptr;

	return SYS_ARCH_TIMEOUT;
}

/**
 * @ingroup sys_mbox
 * This is similar to sys_arch_mbox_fetch, however if a message is not
 * present in the mailbox, it immediately returns with the code
 * SYS_MBOX_EMPTY. On success 0 is returned.
 * To allow for efficient implementations, this can be defined as a
 * function-like macro in sys_arch.h instead of a normal function. For
 * example, a naive implementation could be:
 * \#define sys_arch_mbox_tryfetch(mbox,msg) sys_arch_mbox_fetch(mbox,msg,1)
 * although this would introduce unnecessary delays.
 *
 * @param mbox mbox to get a message from
 * @param msg pointer where the message is stored
 * @return 0 (milliseconds) if a message has been received
 *         or SYS_MBOX_EMPTY if the mailbox is empty
 */
u32_t sys_arch_mbox_tryfetch(sys_mbox_t* mbox, void** msg)
{
	void* data = mq_try_pop(mbox);
	if (data != NULL) {
		*msg = data;
		return 0;
	}

	return SYS_MBOX_EMPTY;
}

/**
 * @ingroup sys_mbox
 * Deallocates a mailbox. If there are messages still present in the
 * mailbox when the mailbox is deallocated, it is an indication of a
 * programming error in lwIP and the developer should be notified.
 *
 * @param mbox mbox to delete
 */
void sys_mbox_free(sys_mbox_t* mbox)
{
	mq_destroy(mbox);
}

/**
 * @ingroup sys_mbox
 * Returns 1 if the mailbox is valid, 0 if it is not valid.
 * When using pointers, a simple way is to check the pointer for != NULL.
 * When directly using OS structures, implementing this may be more complex.
 * This may also be a define, in which case the function is not prototyped.
 */
int sys_mbox_valid(sys_mbox_t* mbox)
{
	return 1;
}

/**
 * @ingroup sys_mbox
 * Invalidate a mailbox so that sys_mbox_valid() returns 0.
 * ATTENTION: This does NOT mean that the mailbox shall be deallocated:
 * sys_mbox_free() is always called before calling this function!
 * This may also be a define, in which case the function is not prototyped.
 */
void sys_mbox_set_invalid(sys_mbox_t* mbox)
{ }

#endif // !NO_SYS
