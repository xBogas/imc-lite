// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Core.h"
#include "System.h"

#include "Core/Factory.def"

void Launcher::createTask(Constructor fp)
{
	Task* task = fp();
	printk("Creating task %s", task->getName());

	comms.registerEntity(task->getName());
	tasks.registerTask(task);
}

static IO::Device* sys_handle;

void Launcher::createTasks(void)
{
	back = new BackgroundTask();
	sys_handle = back->createHandle();
	comms.registerEntity(back->getName());
	tasks.registerTask(back);

	createAllTasks(*this);

	tasks.configTasks();

	// Save all parameters to flash
	// tasks.saveAllParams();
}


void Launcher::start(void)
{
	// Communicate with Master to reserve entities
	comms.start(sys_handle);

	// Update task with reserved entities
}