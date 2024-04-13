// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CONCURRENCY_MUTEX_H_INCLUDED_
#define CONCURRENCY_MUTEX_H_INCLUDED_

#include "Defines.h"
#include "Structures/Queue.h"
#include "Concurrency/Thread.h"

_BEGIN_STD_C

struct mutex {
	struct thread* owner;
	struct queue* blocked;
};

/// @brief Create a new mutex
/// @return A pointer to the new mutex
struct mutex* mutex_create(void);

/// @brief Destroy the mutex
/// @param mtx Mutex object to destroy
void mutex_destroy(struct mutex* mtx);

/// @brief Acquire the mutex
/// @param mtx Object to lock
void mutex_lock(struct mutex* mtx);

/// @brief Release the mutex
/// @param mtx Object to unlock
void mutex_unlock(struct mutex* mtx);

_END_STD_C

#endif // CONCURRENCY_MUTEX_H_INCLUDED_