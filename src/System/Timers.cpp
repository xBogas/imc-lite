#include "System/Timers.h"
#include "Core/Interface.h"
#include "System/Error.h"

#include <Arduino.h>
#include "stm32_def.h"

/**
 * TODO: Protect this module with a mutex/spinlock
 * TODO: Protect absolute time rollover
 */

#ifndef TIMER_POOL_SIZE
#	define TIMER_POOL_SIZE 10
#endif

typedef void (*callable)(void*);

struct callback {
	callable fp;
	void* args;
	uint32_t ts;
	const char* name;
};

struct {
	struct callback* arr[TIMER_POOL_SIZE];
	struct callback test;
	uint16_t size;
	uint16_t capacity;
} heap;

static HardwareTimer timer(TIM1);

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
/// @param name callback name
static void push_callback(callable fn, void* args, uint32_t time,
						  const char* name)
{
	// Timer heap is full
	if (heap.size == heap.capacity)
		return;

	struct callback* elem = heap.arr[heap.size];
	elem->fp = fn;
	elem->args = args;
	elem->ts = time;
	elem->name = name;

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
	struct callback* callable = pop_callback();
	if (callable == NULL) {
		Debug("Callback struct is null!");
		timer.pause();
		return;
	}

	if (callable->fp == NULL) {
		Debug("Callback function pointer is null!");
		timer.pause();
		return;
	}

	// uint32_t next = peek_next_callback() - millis();
	// timer.setOverflow(next * 1000, TimerFormat_t::MICROSEC_FORMAT);
	uint32_t next = peek_next_callback();
	if (next != 0) {
		timer.pause();
		DebugF("Next callback in %d ms", next - callable->ts);
		timer.setOverflow((next - callable->ts) * 1000,
						  TimerFormat_t::MICROSEC_FORMAT);
		timer.resume();
	} else {
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
		elem->name = NULL;
		heap.arr[i] = elem;
	}

	timer.attachInterrupt(entry_point);
	timer.setPreloadEnable(false);
}

void add_callback(void (*callback)(void*), void* args, uint32_t interval,
				  const char* str)
{
	// Check remaining time in the current timer
	// If it is less then interval
	// Reset the timer with offset after it triggers

	// If it is more then interval
	// Switch the two timer values
	// The timer overflow becomes interval
	// Add the remaining time after the interval to the new timer

	if (heap_is_full())
		return;

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

	DebugF("Adding callback %s at %d ms", str, ts + interval);
	push_callback(callback, args, ts + interval, str);
}