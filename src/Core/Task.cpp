// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Core/Task.h"
#include "Core/Bus.h"
#include "Core/Consumers.h"
#include "Core/Interface.h"
#include "Core/Mailbox.h"
#include "Core/Manager.h"

#include "System/Time.h"
#include "System/Timers.h"

Task::Task(const char* name, uint16_t _prio)
  : AbstractTask(name, _prio),
	m_mail(nullptr),
	m_label(name)
{
	m_mail = new MailBox(10, this);
	ASSERT_ERR(m_mail != nullptr, "Failed to create mailbox");

	m_params.param = nullptr;
	m_params.next = nullptr;

	param("Entity label", m_label)
		.defaultValue(name);

	subscribe<IMC::QueryEntityParameters>(*this);
	subscribe<IMC::SetEntityParameters>(*this);
}

void Task::dispatch(const IMC::Message* msg)
{
	Core.dispatch(msg);
}

void Task::consume(const IMC::QueryEntityParameters* msg)
{
	if (msg->name != m_label && msg->name != "all")
		return;

	IMC::EntityParameters* params = new IMC::EntityParameters();
	params->name = m_label;

	struct ParamList* ptr = &m_params;
	while (ptr) {
		IMC::EntityParameter p;
		p.name = ptr->param->label;
		p.value = ptr->param->value;

		params->params.push_back(p);

		ptr = ptr->next;
	}

	dispatch(params);
	onQueryEntityParameters(msg);
}

void Task::consume(const IMC::SetEntityParameters* msg)
{
	if (msg->name != m_label)
		return;

	// iterate through the parameters and set them
	for (auto& i : msg->params)
		m_params.setParam(i->name.c_str(), i->value);

	onUpdateParameters();
}

void Task::registerConsumer(uint16_t id, AbstractConsumer* consumer)
{
	m_mail->registerConsumer(id, consumer);
}

void Task::waitForMessages(u32 ms)
{
	m_mail->waitForMessages(ms);
}

void Task::consumeMessages(void)
{
	m_mail->consumeMessages();
}
