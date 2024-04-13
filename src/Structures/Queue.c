// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Structures/Queue.h"

_BEGIN_STD_C

void queue_init(struct queue* queue, queue_size_t capacity)
{
	queue->size = 0;
	queue->capacity = capacity;
	queue->arr = (void**)malloc(sizeof(void*) * capacity);
	if (queue->arr == NULL)
		return;

	memset(queue->arr, 0, sizeof(void*) * capacity);
}

struct queue* queue_create(queue_size_t capacity)
{
	struct queue* list = (struct queue*)malloc(sizeof(struct queue));
	if (list == NULL)
		return NULL;

	queue_init(list, capacity);
	return list;
}

void queue_destroy(struct queue* list)
{
	free(list->arr);
	free(list);
}

queue_err_t queue_push(struct queue* list, void* data)
{
	if (list->size == list->capacity)
		return QUEUE_ERR_FULL;

	list->arr[list->size++] = data;

	return QUEUE_ERR_NONE;
}

void* queue_pop(struct queue* list)
{
	if (list->size == 0)
		return NULL;

	void* rv = list->arr[list->size - 1];
	list->arr[--list->size] = NULL;

	return rv;
}

_END_STD_C
