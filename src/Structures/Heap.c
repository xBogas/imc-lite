// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Structures/Heap.h"

_BEGIN_STD_C

void heap_init(struct heap* hp, u16 cap, heap_fn get_val)
{
	ASSERT_ERR(hp != NULL, "Heap is NULL");

	hp->size = 0;
	hp->capacity = cap;
	hp->cmp = get_val;

	hp->data = (void**)malloc(sizeof(void*) * cap);
	ASSERT_ERR(hp->data != NULL, "Heap data is NULL");

	for (u16 i = 0; i < cap; i++)
		hp->data[i] = NULL;
}

struct heap* heap_create(u16 cap, heap_fn get_val)
{
	struct heap* hp = (struct heap*)malloc(sizeof(struct heap));
	heap_init(hp, cap, get_val);

	return hp;
}

bool heap_cmp(struct heap* hp, u16 id_1, u16 id_2)
{
	heap_fn get_val = hp->cmp;
	return get_val(hp->data[id_2]) > get_val(hp->data[id_1]);
}

void swap(void** a, void** b)
{
	void* tmp = *a;
	*a = *b;
	*b = tmp;
}

int heap_push(struct heap* hp, void* elem)
{
	if (hp->size == hp->capacity)
		return -1;

	hp->data[hp->size] = elem;
	u16 index = hp->size;
	hp->size++;

	u16 parent = (index - 1) / 2;
	while (index > 0 && heap_cmp(hp, index, parent)) {
		swap(&hp->data[index], &hp->data[parent]);
		index = parent;
		parent = (index - 1) / 2;
	}

	return 0;
}

void heapify(struct heap* hp)
{
	u16 index = 0;
	while (index < hp->size) {
		u16 smallest = index;
		u16 left = 2 * index + 1;  // left - 1 /2
		u16 right = 2 * index + 2; // right - 1 /2

		if (left < hp->size && heap_cmp(hp, left, smallest))
			smallest = left;

		if (right < hp->size && heap_cmp(hp, right, smallest))
			smallest = right;

		if (smallest != index) {
			swap(&(hp->data[index]), &(hp->data[smallest]));
			index = smallest;
		} else
			break;
	}
}

void* heap_pop(struct heap* hp)
{
	if (hp->size == 0)
		return NULL;

	void* rv = hp->data[0];
	hp->data[0] = NULL;
	swap(&hp->data[0], &hp->data[hp->size - 1]);
	hp->size--;

	heapify(hp);

	return rv;
}

u16 heap_peek(struct heap* hp)
{
	return hp->size > 0 ? hp->cmp(hp->data[0]) : 0;
}

_END_STD_C