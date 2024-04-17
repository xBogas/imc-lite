// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CONCURRENCY_SEMAPHORE_H_INCLUDED_
#define CONCURRENCY_SEMAPHORE_H_INCLUDED_

#include "Defines.h"

_BEGIN_STD_C

// Semaphore structure
struct sem {
	s16 count;
};

/// @brief Initialize a semaphore
/// @param sem Object to be initialized
/// @param max_count Maximum count of the semaphore
void sem_init(struct sem* sem, u8 max_count);

/// @brief Create a semaphore
/// @param max_count Maximum count of the semaphore
struct sem* sem_create(u8 max_count);

/// @brief Destroy a semaphore
/// @param sem Semaphore structure
void sem_destroy(struct sem* sem);

/// @brief wait for a semaphore
/// @param sem Semaphore structure
/// @param ms Timeout in milliseconds
/// @return true if the semaphore was acquired, false if the timeout was reached
/// @note Setting ms to 0 will make the function wait indefinitely
bool sem_wait(struct sem* sem, u32 ms);

/// @brief Release a semaphore
/// @param sem Semaphore structure
void sem_signal(struct sem* sem);

_END_STD_C

#endif // CONCURRENCY_SEMAPHORE_H_INCLUDED_