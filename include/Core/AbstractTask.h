// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CORE_ABSTRACTTASK_H_INCLUDED_
#define CORE_ABSTRACTTASK_H_INCLUDED_

#include "Concurrency/Thread.h"

enum TaskState {
	Ready = THREAD_READY,
	Running = THREAD_RUNNING,
	Waiting = THREAD_WAITING,
	Blocked = THREAD_BLOCKED,
	Stopped = THREAD_STOPPED,
	Dead = THREAD_DEAD,
};

void task_entry_point(void* arg);
void task_wake_up(void* arg);

class AbstractTask : private thread {
public:
	AbstractTask(const char* name, uint32_t _prio);

	virtual ~AbstractTask(void);

	friend void task_entry_point(void* arg);
	friend void task_wake_up(void* arg);

	void setState(TaskState _state)
	{
		state = _state;
	}

	TaskState getState(void)
	{
		return (TaskState)state;
	}

	const char* getName(void)
	{
		return name;
	}

protected:
	virtual void run(void) = 0;

	bool isRunning(void)
	{
		return state != TaskState::Stopped;
	}

	uint32_t getPriority(void)
	{
		return priority;
	}

	void setPriority(uint32_t _priority)
	{
		priority = _priority;
	}

	// Non-polling delay
	void delay_ms(uint32_t ms);

	/// @brief Print a debug message
	/// @param fmt Format string
	/// @param ... Arguments to the format string
	/// @note The message will be prefixed with the task name
	void spew(const char* fmt, ...);
};

#endif // CORE_ABSTRACTTASK_H_INCLUDED_