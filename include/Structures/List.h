// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef STRUCTURES_LIST_H_INCLUDED_
#define STRUCTURES_LIST_H_INCLUDED_

#include "Defines.h"

#include <stdlib.h>

_BEGIN_STD_C

struct lst_node {
	void* elem;
	struct lst_node* next;
};

struct list {
	struct lst_node* head;
	struct lst_node* tail;
	u32 count;
};

/// @brief Create a new list.
struct list* list_create(void);

/// @brief Destroy a list.
void list_destroy(struct list* l);

/// @brief Append an element to the list.
/// @param l The list to append to.
/// @param elem The element to append.
void list_append(struct list* l, void* elem);

/// @brief Pop an element from the list.
/// @param l The list to pop from.
/// @return The element popped from the list.
void* list_pop(struct list* l);

_END_STD_C

#endif // STRUCTURES_LIST_H_INCLUDED_