#ifndef CORE_THREAD_QUEUE_H_INCLUDED_
#define CORE_THREAD_QUEUE_H_INCLUDED_

#include <vector>
#include "Core/Thread.h"

class ThreadQueue {
public:
	ThreadQueue(void);

	~ThreadQueue(void);

	// register thread in queue
	void registerThread(Thread* thread);

	// Get
	Thread* getThread(void);

	// Push thread to queue
	void push(Thread* tsk)
	{
		tsk_queue.push(tsk);
	}

private:
	// Thread queue element
	struct QueueElement {
		Thread* thr;
		struct QueueElement* nxt;
	};

	// Thread queue struture
	struct Queue {
		struct QueueElement* head;
		struct QueueElement* tail;

		// Push thread to queue
		void push(Thread* tsk);
		// Pop thread from queue
		Thread* pop(void);
	};

	//! Vector of all threads (debugging)
	std::vector<Thread*> jobs;
	//! Thread queue
	struct Queue tsk_queue;
};

#endif // CORE_THREAD_QUEUE_H_INCLUDED_