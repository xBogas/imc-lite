#include "Core/ThreadQueue.h"
#include <cstdlib>

void ThreadQueue::Queue::push(Thread* tsk)
{
	if (!tsk)
		return;

	// Head is empty
	if (!head) {
		head = (struct QueueElement*)malloc(sizeof(struct QueueElement));
		head->thr = tsk;
		head->nxt = NULL;
		tail = head;
		return;
	}

	// Current tail has no thread
	if (!tail->thr) {
		tail->thr = tsk;

		// If tail has a next element, move tail to it
		if (tail->nxt)
			tail = tail->nxt;

		return;
	}

	// Now tail has a thread and next element is empty
	struct QueueElement* elem =
		(struct QueueElement*)malloc(sizeof(struct QueueElement));

	elem->thr = tsk;
	elem->nxt = NULL;

	tail->nxt = elem;
	tail = elem;
}

Thread* ThreadQueue::Queue::pop(void)
{
	if (!head)
		return NULL;

	// Queue is empty
	if (!head->thr)
		return NULL;

	// Get thread from head
	Thread* tsk = head->thr;
	head->thr = NULL;

	// move empty QueueElement to tail
	tail->nxt = head;
	tail = head;

	// move head to next element
	head = head->nxt;

	// set tail's next to NULL
	// so that it doesn't point to head
	tail->nxt = NULL;

	return tsk;
}

ThreadQueue::ThreadQueue(void)
{
	tsk_queue.head = NULL;
	tsk_queue.tail = NULL;
	jobs.reserve(5);
}

ThreadQueue::~ThreadQueue(void)
{
	// FIXME: Verify this
	QueueElement* elem = tsk_queue.head;

	while (elem) {
		QueueElement* nxt = elem->nxt;
		free(elem);
		elem = nxt;
	}
}

void ThreadQueue::registerThread(Thread* thread)
{
	jobs.push_back(thread);
	tsk_queue.push(thread);
}
