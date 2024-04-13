// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Structures/List.h"

_BEGIN_STD_C

struct list* list_create(void)
{
	struct list* l = (struct list*)malloc(sizeof(struct list));
	l->head = NULL;
	l->tail = NULL;
	l->count = 0;

	return l;
}

void list_destroy(struct list* l)
{
	while (l->head != NULL) {
		struct lst_node* node = l->head;
		l->head = node->next;
		free(node);
	}

	l->tail = NULL;
	free(l);
}

void list_append(struct list* l, void* elem)
{
	struct lst_node* node = (struct lst_node*)malloc(sizeof(struct lst_node));
	node->elem = elem;
	node->next = NULL;

	if (l->head == NULL) {
		l->head = node;
		l->tail = node;
	} else {
		l->tail->next = node;
		l->tail = node;
	}

	l->count++;
}

void* list_pop(struct list* l)
{
	if (l->head == NULL)
		return NULL;

	struct lst_node* node = l->head;
	void* elem = node->elem;

	l->head = node->next;
	free(node);

	l->count--;

	return elem;
}

_END_STD_C
