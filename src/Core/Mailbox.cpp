// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Core/Mailbox.h"
#include "Core/Bus.h"

MailBox::MailBox(u32 size, Task* owner)
  : owner(owner)
{
	mq = mq_create(size);
}

MailBox::~MailBox(void)
{ }

void MailBox::receive(const MessageWrapper* msg)
{
	bool fail = mq_try_push(mq, (void*)msg);
	if (fail == false) {
		// Message queue is full
		// Task must consume messages
        // TODO: Implement this
		debug("[%s] - Mailbox is full, task must consume messages", owner->getName());
	}
}

void MailBox::registerConsumer(uint16_t id, AbstractConsumer* consumer)
{
	consumers[id] = consumer;
	Core.registerMailBox(id, this);
}