// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef STRUCTURES_HEAP_H_INCLUDED_
#define STRUCTURES_HEAP_H_INCLUDED_

#include "Defines.h"

#include <stdlib.h>

_BEGIN_STD_C

// Return data value from element
typedef u32 (*heap_fn)(void* elem);

struct heap {
	u16 size;
	u16 capacity;
	heap_fn cmp;
	void** data;
};

/// @brief Initialize the heap structure
/// @param hp Heap structure
/// @param cap Maximum number of elements in the heap
/// @param get_val Function to get the value of the element
void heap_init(struct heap* hp, u16 cap, heap_fn get_val);

/// @brief Create a new heap
/// @param cap Maximum number of elements in the heap
/// @param get_val Function to get the value of the element
struct heap* heap_create(u16 cap, heap_fn get_val);

static void heap_destroy(struct heap* hp)
{
	free(hp->data);
	free(hp);
}

/// @brief Compare the index node with its parent node
/// @param hp Heap structure
/// @param id_1 Index 1 to compare
/// @param id_2 Index 2 to compare
/// @return true if value of index 2 is greater than value of index 1
bool heap_cmp(struct heap* hp, u16 id_1, u16 id_2);

// Swap pointers
void swap(void** a, void** b);

/// @brief Push an element to the heap
/// @param hp Heap structure
/// @param elem Element to push
/// @return 0 if success, -1 if heap is full
int heap_push(struct heap* hp, void* elem);

/// @brief Reorganize the heap structure
/// @param hp Heap structure
void heapify(struct heap* hp);

/// @brief Pop the top element from the heap
/// @param hp Heap structure
/// @return Pointer to the top element
void* heap_pop(struct heap* hp);

/// @brief Peek the value of the first element in the heap
/// @param hp Heap structure
/// @return Value of the top element
u16 heap_peek(struct heap* hp);

/// @brief Check if the heap is full
/// @param hp Heap structure
/// @return true if the heap is full or false otherwise
static bool heap_is_full(struct heap* hp)
{
	return hp->size == hp->capacity;
}

_END_STD_C

#endif // STRUCTURES_HEAP_H_INCLUDED_