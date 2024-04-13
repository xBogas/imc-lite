// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CORE_MANAGER_H_INCLUDED_
#define CORE_MANAGER_H_INCLUDED_

#include "Concurrency/Thread.h"

#include "Core/Consumers.h"

// class TaskManager {
// public:
// 	TaskManager(void)
// 	{ }

// 	~TaskManager(void)
// 	{ }

// 	// Register thread to task manager
// 	void registerTask(thread* task)
// 	{
// 		thr_queue.push(task);
// 	}

// 	// Start task scheduler
// 	void start(void);

// 	// Check if task manager is running
// 	bool isRunning(void)
// 	{
// 		return running;
// 	}

// 	// Pop thread from queue
// 	thread* popThread(void)
// 	{
// 		return thr_queue.pop();
// 	}

// 	// Push thread to queue
// 	void pushThread(thread* thr)
// 	{
// 		thr_queue.push(thr);
// 	}

// 	void setBackgroundTask(thread* thr)
// 	{
// 		background = thr;
// 	}

// 	uint32_t getQueueSize(void)
// 	{
// 		return thr_queue.size();
// 	}

// private:
// 	thread* background;
// 	// thread queue
// 	// ThreadQueue thr_queue;
// 	// os Status
// 	bool running = false;
// };

// void dispatch_thread(void*);

// extern class TaskManager Manager;

#endif // CORE_MANAGER_H_INCLUDED_