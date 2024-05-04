// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Core/AbstractTask.h"
#include "Concurrency/Scheduler.h"

#include "System/Terminal.h"
#include "System/Timers.h"

#include <cstdarg>
#include <cstdio>

void task_entry_point(void* arg)
{
	struct thread* thr = (struct thread*)arg;
	// Use a static cast due to the virtual table offset
	// Instead of a C type cast
	AbstractTask* task = static_cast<AbstractTask*>(thr);
	task->state = TaskState::Running;
	task->run();

	task->state = TaskState::Dead;
	delete task;
}

void task_wake_up(void* arg)
{
	AbstractTask* tsk = (AbstractTask*)arg;
	tsk->setState(TaskState::Running);

	// If current thread is higher priority, add it to the queue
	if (sched_get_thr()->priority < tsk->priority) {
		sched_push_thr_safe(tsk);
		return;
	}

	sched_dispatch(tsk, sched_get_thr());
}

AbstractTask::AbstractTask(const char* name, uint32_t _prio)
  : thread()
{
	// Use a static cast due to the virtual table offset
	// Instead of a C type cast
	struct thread* this_thr = static_cast<struct thread*>(this);
	thread_init(this_thr, THREAD_STACK_SIZE, name, task_entry_point, this_thr);
	setPriority(_prio);
	sched_push_thr(this_thr);
}

AbstractTask::~AbstractTask(void)
{
	// TODO:
	//  Delete thread
	thread_destroy(this);
	// Check if any object is owned by the task
}

void AbstractTask::delay_ms(uint32_t ms)
{
	setState(TaskState::Waiting);
	add_callback(task_wake_up, this, ms);

	sched_yield();

	// Enter low power mode //  while()
	// Safeguard against early wakeups
	while (state == TaskState::Waiting)
		error("Task %s woke up early", name);
}

void AbstractTask::spew(const char* fmt, ...)
{
	char buf[MAX_SPEW_SIZE] = {0};

	va_list args;
	va_start(args, fmt);
	int rv = sprintf(buf, "[%s] - ", name);
	if (rv < 0)
		return;

	vsnprintf(buf + rv, MAX_SPEW_SIZE - rv, fmt, args);
	va_end(args);

	term_print(buf);
}
