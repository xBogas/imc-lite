// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Concurrency/Semaphore.h"
#include "Concurrency/Scheduler.h"

#include <stdlib.h>

_BEGIN_STD_C

void sem_init(struct sem* sem, u8 max_count)
{
	ASSERT_ERR(sem != NULL, "Semaphore is NULL");
	ASSERT_ERR(max_count > 0, "Semaphore count must be greater than 0");

	sem->count = max_count;
}

struct sem* sem_create(u8 max_count)
{
	struct sem* sem = (struct sem*)malloc(sizeof(struct sem));
	ASSERT_ERR(sem != NULL, "Failed to allocate memory for semaphore");
	sem_init(sem, max_count);

	return sem;
}

void sem_destroy(struct sem* sem)
{
	//? What if there are threads waiting for the semaphore?
	if (sem->count < 0) {
	}

	// Release the semaphore
	free(sem);
}

/**
 * TODO: Implement a better way to handle the timeout
 * For now we are just pooling the semaphore until the timeout is reached
 */
bool sem_wait(struct sem* sem, u32 ms)
{
	// Protect the semaphore
	u32 start = HAL_GetTick();
	while (sem->count <= 0) {
		if (ms != 0 && HAL_GetTick() - start >= ms)
			return false;

		yield();
	}

	sem->count--;

	// Release the semaphore
	return true;
}

void sem_signal(struct sem* sem)
{
	// Protect the semaphore
	sem->count++;

	// Release the semaphore
}

_END_STD_C