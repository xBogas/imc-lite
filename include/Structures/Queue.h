// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef STRUCTURES_QUEUE_H
#define STRUCTURES_QUEUE_H

#include <stdlib.h>
#include <string.h>

#include "Defines.h"

typedef u8 queue_size_t;
typedef u8 queue_err_t;

enum {
	QUEUE_ERR_NONE = 0,
	QUEUE_ERR_FULL = 1,
};

// First In First Out Queue
struct queue {
	queue_size_t size;
	queue_size_t capacity;
	void** arr;
};

/// @brief Initialize a queue
/// @param queue Queue to be initialized
/// @param capacity Capacity of the queue
void queue_init(struct queue* queue, queue_size_t capacity);

/// @brief Create a new queue
/// @param capacity Capacity of the queue
/// @return The new queue
struct queue* queue_create(queue_size_t capacity);

/// @brief Destroy a queue
void queue_destroy(struct queue* list);

/// @brief Push an element to the queue
queue_err_t queue_push(struct queue* list, void* data);

/// @brief Pop an element from the queue
void* queue_pop(struct queue* list);

/// @brief Get the size of the queue
static queue_size_t queue_size(struct queue* list)
{
	return list->size;
}

#endif // STRUCTURES_QUEUE_H