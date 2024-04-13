// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Core/Task.h"
#include "Core/Consumers.h"
#include "Core/Interface.h"
#include "Core/Manager.h"

#include "System/Time.h"
#include "System/Timers.h"

u32 Task::FLASH_PARAMS = FLASH_USER_ADDR;

Task::Task(const char* name, uint16_t _prio)
  : AbstractTask(name, _prio)
{
	m_params.param = NULL;
	m_params.next = NULL;

	Interface.registerEntity(name);
	// Manager.registerTask(this);
}

void Task::consume(const IMC::QueryEntityParameters* msg)
{
	IMC::EntityParameters params;
	params.name = getName();

	struct ParamList* ptr = &m_params;
	while (ptr) {
		IMC::EntityParameter p;
		p.name = ptr->param->label;
		p.value = ptr->param->value;

		ptr = ptr->next;
	}
}

void Task::consume(const IMC::SetEntityParameters* msg)
{
	if (msg->name != getName())
		return;

	// iterate through the parameters and set them
	for (auto& i : msg->params)
		m_params.setParam(i->name.c_str(), i->value);
}

void Task::registerConsumer(uint16_t id, AbstractConsumer* consumer)
{
	Core.registerConsumer(id, consumer);
}
