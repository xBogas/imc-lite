// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CONCURRENCY_CONDVAR_H_INCLUDED_
#define CONCURRENCY_CONDVAR_H_INCLUDED_

#include "Defines.h"

#include "Concurrency/Semaphore.h"
#include "Structures/List.h"

_BEGIN_STD_C

struct cond {
	struct list* wait_queue;
};

/// @brief Initialize a condition variable
/// @param cond_var Condition variable to be initialized
void cond_init(struct cond* cond_var);

/// @brief Create a condition variable
/// @return The new condition variable
struct cond* cond_create(void);

/// @brief Wait for a condition variable with a timeout
/// @param cond_var Condition variable to wait for
/// @param ms Timeout in milliseconds
/// @return True if the condition was signaled, false otherwise
bool cond_wait_timeout(struct cond* cond_var, u32 ms);

/// @brief Wait for a condition variable
/// @param cond_var Condition variable to wait for
void cond_wait(struct cond* cond_var);

/// @brief Signal one thread waiting on a condition variable
/// @param cond_var Condition variable to signal
/// @return True if a thread was signaled, false otherwise
bool cond_signal_one(struct cond* cond_var);

/// @brief Signal all threads waiting on a condition variable
/// @param cond_var Condition variable to signal
/// @return True if a thread was signaled, false otherwise
bool cond_signal_all(struct cond* cond_var);

_END_STD_C

#endif // CONCURRENCY_CONDVAR_H_INCLUDED_