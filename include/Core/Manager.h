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

	void registerTask(Thread* task)
	{
		thr_queue.registerThread(task);
	}

	void start(void);

private:
	// Thread queue
	ThreadQueue thr_queue;
	// os Status
	bool running = false;
};

extern class TaskManager Manager;

#endif // CORE_MANAGER_H_INCLUDED_