// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "System.h"
#include "Concurrency.h"

extern "C" {

struct mutex mem_mutex;

void* __real_malloc(size_t size);

void* __wrap_malloc(size_t size)
{
	if (sched_running())
		mutex_lock(&mem_mutex);

	void* mem = __real_malloc(size);

	if (sched_running())
		mutex_unlock(&mem_mutex);

	return mem;
}

void __real_free(void* ptr);

void __wrap_free(void* ptr)
{
	if (sched_running())
		mutex_lock(&mem_mutex);

	__real_free(ptr);

	if (sched_running())
		mutex_unlock(&mem_mutex);
}

} // extern "C"

void os_init(void) __attribute__((constructor));

void os_init(void)
{
	sched_init();
	debug_init();
	mutex_init(&mem_mutex);
	terminal_init();

	debug("Initializing system");

	init_timer_pool();

	// Initialize RTC
	Clock::getInstance();
}