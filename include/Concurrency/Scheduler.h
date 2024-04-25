// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CONCURRENCY_SCHEDULER_H_INCLUDED_
#define CONCURRENCY_SCHEDULER_H_INCLUDED_

#include "Defines.h"

#include "Thread.h"

_BEGIN_STD_C

/// @brief Yield the current thread
/// @note Arduino function
void yield(void);

/// @brief Initialize the scheduler
void sched_init(void) __attribute__((constructor));

/// @brief Start the scheduler
void sched_start(void);

/// @brief Stop the scheduler
static void sched_stop(void)
{
	// Stop the scheduler
	// TODO:
}

/// @brief Get the running thread
struct thread* sched_get_thr(void);

/// @brief Add a thread to the scheduler
/// @param th Thread to add
/// @note This function is not thread safe
void sched_push_thr(struct thread* th);

/// @brief Add a thread to the scheduler
/// @param th Thread to add
/// @note This function is thread safe
void sched_push_thr_safe(struct thread* th);

/// @brief Dispatch a thread to run
/// @note This function does not queue current thread
void sched_dispatch(struct thread* nxt, struct thread* cur);

/// @brief Yield the current thread indefinitely
void sched_yield(void);

/// @brief Check if the scheduler is running
/// @return True if the scheduler is running, false otherwise 
bool sched_running(void);

/// @brief Check if the scheduler is locked
/// @return True if the scheduler is locked, false otherwise
bool sched_is_locked(void);

/// @brief Lock the scheduler.
/// @note This will disable interrupts
void sched_lock(void);

/// @brief Unlock the scheduler
/// @note This will enable interrupts
void sched_unlock(void);

_END_STD_C

#endif // CONCURRENCY_SCHEDULER_H_INCLUDED_