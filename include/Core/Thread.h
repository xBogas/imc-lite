#ifndef CORE_THEAD_H_INCLUDED_
#define CORE_THEAD_H_INCLUDED_

#include <cstdint>

#ifndef THREAD_STACK_SIZE
#	define THREAD_STACK_SIZE 0x1000
#else
// TODO Assert  THREAD_STACK_SIZE
#	pragma message("Todo assert THREAD_STACK_SIZE")
#endif

// For starting threads
// function will be thread_entry_point
// this will be a friend function of class Thread
// this will pass the argument (Thread*)
// then thread->run() will be called
void thread_entry_point(void*);

enum ThreadState {
	Running,
	Waiting,
	Blocked,
	Stopped,
	Dead,
};

class Thread {
public:
	Thread(uint32_t, const char*);

	uint32_t stack_ptr;
	uint32_t stack_bottom;
	uint8_t priority;
	const char* name;
	ThreadState state;

	void setState(ThreadState _state)
	{
		state = _state;
	}

	ThreadState getState(void)
	{
		return state;
	}

	bool isRunning(void)
	{
		return state != ThreadState::Stopped;
	}

	virtual void run(void) = 0;
};

#endif // CORE_THEAD_H_INCLUDED_