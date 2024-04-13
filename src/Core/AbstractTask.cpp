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
	AbstractTask* task = static_cast<AbstractTask*>(thr);
	task->state = TaskState::Running;
	task->run();

	task->state = TaskState::Dead;
	delete task;
}

void task_wake_up(void* arg)
{
	// TODO: Check if this can dispatch the thread
	AbstractTask* tsk = (AbstractTask*)arg;
	tsk->setState(TaskState::Running);

	// If current thread is higher priority, add it to the queue
	if (sched_get_thr()->priority >= tsk->priority) {
		if (sched_is_locked())
			error("Can't wake up thread while scheduler is locked.");

		sched_lock();
		sched_push_thr(tsk);
		tsk->spew("[wakeup] push");
		sched_unlock();
		return;
	}

	// sched_push_thr(sched_get_thr());
	sched_dispatch(tsk, NULL);
}

AbstractTask::AbstractTask(const char* name, uint32_t _prio)
  : thread()
{
	thread_init(this, THREAD_STACK_SIZE, name, task_entry_point);
	setPriority(_prio);
	sched_push_thr(this);
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

	// Safeguard against early wakeups
	while (state == TaskState::Waiting)
		sched_yield(this);
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
