// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CORE_LAUNCHER_H_INCLUDED_
#define CORE_LAUNCHER_H_INCLUDED_

#include <Core/Manager.h>

class Launcher {
public:
	static Launcher& getInstance(void)
	{
		static Launcher instance;
		return instance;
	}

	void addTask(Task* task)
	{
		printk("Creating task %s", task->getName());

		comms.registerEntity(task->getName());
		tasks.registerTask(task);
	}

	void start(void);

	// Delete copy constructor and assignment operator
	Launcher(Launcher const&) = delete;
	void operator=(Launcher const&) = delete;

private:
	Launcher()
	{ }

	~Launcher()
	{ }

	IMC::CommsInterface comms;
	TaskManager tasks;
	BackgroundTask* back;
};

#endif