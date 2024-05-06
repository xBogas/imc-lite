// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Core.h"
#include "System.h"

void Launcher::start(void)
{
	IO::Device* sys_handle = nullptr;
	back = new BackgroundTask();
	sys_handle = back->createHandle();
	comms.registerEntity(back->getName());
	tasks.registerTask(back);

	// Communicate with Master to reserve entities
	// comms.start(sys_handle);

	// Update task with reserved entities

	sched_start();
}