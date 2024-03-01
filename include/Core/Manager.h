#ifndef CORE_MANAGER_H_INCLUDED_
#define CORE_MANAGER_H_INCLUDED_

#include "Core/Consumers.h"
#include "Core/Thread.h"
#include "Core/ThreadQueue.h"

class TaskManager {
public:
	TaskManager(void)
	{ }

	~TaskManager(void)
	{ }

	// Register thread to task manager
	void registerTask(Thread* task)
	{
		thr_queue.registerThread(task);
	}

	// Start task scheduler
	void start(void);

	// Check if task manager is running
	bool isRunning(void)
	{
		return running;
	}

	// Pop thread from queue
	Thread* popThread(void)
	{
		return thr_queue.getThread();
	}

	// Push thread to queue
	void pushThread(Thread* thr)
	{
		thr_queue.push(thr);
	}

private:
	// Thread queue
	ThreadQueue thr_queue;
	// os Status
	bool running = false;
};

void dispatch_thread(void*);

extern class TaskManager Manager;

#endif // CORE_MANAGER_H_INCLUDED_