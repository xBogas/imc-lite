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

// First In Last Out Queue
struct queue {
	queue_size_t size;
	queue_size_t capacity;
	void** arr;
};

//TODO Add comments

void queue_init(struct queue* queue, queue_size_t capacity);

struct queue* queue_create(queue_size_t capacity);

void queue_destroy(struct queue* list);

queue_err_t queue_push(struct queue* list, void* data);

void* queue_pop(struct queue* list);

static queue_size_t queue_size(struct queue* list)
{
	return list->size;
}

#endif // STRUCTURES_QUEUE_H