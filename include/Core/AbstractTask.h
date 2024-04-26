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

/// @brief Task entry point
/// @param arg Task object
void task_entry_point(void* arg);

/// @brief Wake up a task. Dispatch it if it has higher priority
/// @param arg Task object
void task_wake_up(void* arg);

class AbstractTask : private thread {
public:
	/// @brief Construct the task
	/// @param name Task name
	/// @param _prio Task priority
	AbstractTask(const char* name, uint32_t _prio);

	/// @brief Destructor
	virtual ~AbstractTask(void);

	friend void task_entry_point(void* arg);

	friend void task_wake_up(void* arg);

	/// @brief Set the task state
	void setState(TaskState _state)
	{
		state = _state;
	}

	/// @brief Get the task state
	TaskState getState(void)
	{
		return (TaskState)state;
	}

	/// @brief Get the task name
	const char* getName(void)
	{
		return name;
	}

protected:
	/// @brief Start the task
	virtual void run(void) = 0;

	/// @brief Check if the task is running
	/// @return True if the task is running, false otherwise
	bool isRunning(void)
	{
		return state != TaskState::Stopped;
	}

	/// @brief Get the task priority
	uint32_t getPriority(void)
	{
		return priority;
	}

	/// @brief Set the task priority
	void setPriority(uint32_t _priority)
	{
		priority = _priority;
	}

	/// @brief Yield the current task
	/// @param ms time to yield in milliseconds
	/// @note Task will wake up with an timer interrupt callback of task_wake_up
	void delay_ms(uint32_t ms);

	/// @brief Print a debug message
	/// @param fmt Format string
	/// @param ... Arguments to the format string
	/// @note The message will be prefixed with the task name
	void spew(const char* fmt, ...);
};

#endif // CORE_ABSTRACTTASK_H_INCLUDED_