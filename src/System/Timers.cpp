// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "System/Timers.h"
#include "System/Error.h"
#include "System/Terminal.h"

#include "Concurrency/Scheduler.h"

#include <Arduino.h>
#include "stm32_def.h"

/**
 * TODO: Protect this module with a mutex/spinlock
 * TODO: Protect absolute time rollover
 */

#ifndef TIMER_POOL_SIZE
#define TIMER_POOL_SIZE 10
#endif

typedef void (*callable)(void*);

struct callback {
	callable fp;
	void* args;
	uint32_t ts;
};

// TODO: Export timers pool to a module
struct timer_poll {
	struct callback* arr[TIMER_POOL_SIZE];
	uint16_t size;
	uint16_t capacity;
	u8 lock;
} heap;

static HardwareTimer timer(TIM2);

// Swap pointers
static void swap(struct callback** a, struct callback** b)
{
	struct callback* tmp = *a;
	*a = *b;
	*b = tmp;
}

// Compare with parent element
static bool cmp_dad(int index)
{
	int parent = (index - 1) / 2;
	return heap.arr[parent]->ts > heap.arr[index]->ts;
}

static bool heap_is_full(void)
{
	return heap.size == heap.capacity;
}

/// @brief Add a callback to the timer pool
/// @param fn function callback
/// @param args arguments
/// @param time absolute time in milliseconds
static void push_callback(callable fn, void* args, uint32_t time)
{
	// Timer heap is full
	if (heap.size == heap.capacity) {
		term_print("callbacks full");
		return;
	}

	struct callback* elem = heap.arr[heap.size];
	elem->fp = fn;
	elem->args = args;
	elem->ts = time;

	int index = heap.size;
	heap.size++;

	while (index > 0 && cmp_dad(index)) {
		// Swap elements
		swap(&heap.arr[index], &heap.arr[(index - 1) / 2]);
		index = (index - 1) / 2;
	}

	return;
}

void heapify(int index)
{
	int smallest = index;
	int left = 2 * index + 1;
	int right = 2 * index + 2;

	if (left < heap.size && heap.arr[left]->ts < heap.arr[smallest]->ts)
		smallest = left;

	if (right < heap.size && heap.arr[right]->ts < heap.arr[smallest]->ts)
		smallest = right;

	if (smallest != index) {
		swap(&heap.arr[index], &heap.arr[smallest]);
		heapify(smallest);
	}
}

static struct callback* pop_callback(void)
{
	if (heap.size == 0)
		return NULL;

	struct callback* elem = heap.arr[0];
	uint32_t time = elem->ts;
	elem->ts = INT32_MAX;
	swap(&heap.arr[0], &heap.arr[heap.size - 1]);
	heap.size--;

	heapify(0);

	elem->ts = time;
	return elem;
}

static uint32_t peek_next_callback(void)
{
	if (heap.size == 0)
		return 0;

	return heap.arr[0]->ts;
}

static void entry_point(void)
{
	if (heap.lock)
		error("Heap is locked!");

	struct callback* callable = pop_callback();
	if (callable == NULL) {
		error("Callback struct is null!");
		timer.pause();
		return;
	}

	if (callable->fp == NULL) {
		error("Callback function pointer is null!");
		timer.pause();
		return;
	}

	// uint32_t next = peek_next_callback() - millis();
	// timer.setOverflow(next * 1000, TimerFormat_t::MICROSEC_FORMAT);
	uint32_t next = peek_next_callback();
	if (next != 0) {
		// debug("Next callback in %d ms", next - callable->ts);
		timer.pause();
		timer.setOverflow((next - callable->ts) * 1000,
						  TimerFormat_t::MICROSEC_FORMAT);
		timer.resume();
	} else {
		debug("No more callbacks");
		timer.pause();
		timer.refresh();
	}

	// Start callback
	callable->fp(callable->args);
}

void init_timer_pool(void)
{
	// Initialize the timer
	heap.size = 0;
	heap.capacity = TIMER_POOL_SIZE;

	for (size_t i = 0; i < TIMER_POOL_SIZE; i++) {
		struct callback* elem =
			(struct callback*)malloc(sizeof(struct callback));
		if (!elem)
			error("Failed to allocate memory for timer pool");

		elem->fp = NULL;
		elem->args = NULL;
		elem->ts = 0;
		heap.arr[i] = elem;
	}

	timer.attachInterrupt(entry_point);
	timer.setPreloadEnable(false);
}

void add_callback(void (*callback)(void*), void* args, uint32_t interval)
{
	// Check remaining time in the current timer
	// If it is less then interval
	// Reset the timer with offset after it triggers

	// If it is more then interval
	// Switch the two timer values
	// The timer overflow becomes interval
	// Add the remaining time after the interval to the new timer

	if (callback == NULL)
		error("Callback function pointer is null!");

	if (heap_is_full())
		error("Timer pool is full!");

	uint32_t ts = millis();
	uint32_t remaining = 0;

	if (!timer.isRunning()) {
		timer.setOverflow(interval * 1000, TimerFormat_t::MICROSEC_FORMAT);
		timer.resume();
	} else {
		remaining = (timer.getOverflow(MICROSEC_FORMAT) -
					 timer.getCount(MICROSEC_FORMAT)) /
					1000;

		if (interval < remaining) {
			timer.pause();
			timer.setOverflow(interval * 1000, TimerFormat_t::MICROSEC_FORMAT);
			timer.resume();
		}
	}

	IRQ_LOCK();
	// sched_lock();

	heap.lock = 1;
	push_callback(callback, args, ts + interval);
	heap.lock = 0;

	// sched_unlock();
	IRQ_UNLOCK();
}