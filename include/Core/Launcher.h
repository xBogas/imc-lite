

#ifndef CORE_LAUNCHER_H_INCLUDED_
#define CORE_LAUNCHER_H_INCLUDED_

#include <Core/Manager.h>

class Launcher {
public:
	typedef Task* (*Constructor)(void);

	static Launcher& getInstance(void)
	{
		static Launcher instance;
		return instance;
	}

	void createTasks(void);

	void start(void);

	// Delete copy constructor and assignment operator
	Launcher(Launcher const&) = delete;
	void operator=(Launcher const&) = delete;

private:

	friend void createAllTasks(Launcher& daemon);

	void createTask(Constructor fp);

	Launcher()
	{ }

	~Launcher()
	{ }

	IMC::CommsInterface comms;
	TaskManager tasks;
	BackgroundTask* back;
};

#endif