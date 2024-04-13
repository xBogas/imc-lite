// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CONCURRENCY_THREAD_H_INCLUDED_
#define CONCURRENCY_THREAD_H_INCLUDED_

#include "Defines.h"
#include "stdbool.h"

#ifndef THREAD_STACK_SIZE
#define THREAD_STACK_SIZE 0x1000
#else

static_assert(THREAD_STACK_SIZE > 0,
			  "THREAD_STACK_SIZE must be greater than 0");
static_assert(THREAD_STACK_SIZE % 4 == 0,
			  "THREAD_STACK_SIZE must be a multiple of 4");
static_assert(THREAD_STACK_SIZE < 0x4000,
			  "THREAD_STACK_SIZE must be less than 16KiB");

#endif

_BEGIN_STD_C

typedef enum {
	THREAD_READY,
	THREAD_RUNNING,
	THREAD_WAITING,
	THREAD_BLOCKED,
	THREAD_STOPPED,
	THREAD_DEAD,
} ThreadState_t;

typedef void (*thr_fn)(void*);

struct thread {
	u32 stack_ptr;
	u32 stack_bottom;
	u16 priority;
	u8 state;
	u8 in_queue;
	const char* name;
};

/// @brief Initialize a thread
/// @param th Pointer to the thread
/// @param stack_size Size of the stack in bytes
/// @param name Name of the thread
/// @param fp Entry point of the thread
void thread_init(struct thread* th, u32 stack_size, const char* name,
				 thr_fn fp);

/// @brief Create a new thread
/// @param stack_size Size of the stack in bytes
/// @param name Name of the thread
/// @param run Entry point of the thread where
/// the argument is the thread struture itself
/// @return Pointer to the thread
struct thread* thread_create(u32 stack_size, const char* name, thr_fn run);

/// @brief Destroy a thread
/// @param th Pointer to the thread
void thread_destroy(struct thread* th);

/// @brief Set the priority of a thread
/// @param th Pointer to the thread
/// @param priority Priority of the thread
static void thr_set_priority(struct thread* th, u16 priority)
{
	th->priority = priority;
}

/// @brief Get the priority of a thread
/// @param th Pointer to the thread
/// @return Priority of the thread
static u16 thr_get_priority(struct thread* th)
{
	return th->priority;
}

/// @brief Set the state of a thread
/// @param th Pointer to the thread
/// @param state State of the thread
static void thr_set_state(struct thread* th, u16 state)
{
	th->state = state;
}

/// @brief Get the state of a thread
/// @param th Pointer to the thread
/// @return State of the thread
static ThreadState_t thr_get_state(struct thread* th)
{
	return (ThreadState_t)th->state;
}

/// @brief Get the name of a thread
/// @param th Pointer to the thread
/// @return Name of the thread
static const char* thr_get_name(struct thread* th)
{
	return th->name;
}

/// @brief Check if a thread is alive
/// @param th Pointer to the thread
/// @return True if the thread is alive, false otherwise
static bool thr_is_alive(struct thread* th)
{
	return th->state != THREAD_DEAD;
}

_END_STD_C

#endif // CONCURRENCY_THREAD_H_INCLUDED_