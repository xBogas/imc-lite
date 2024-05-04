// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Core/Bus.h"

class Bus Core;

struct mutex mtx;

Bus::Bus(void)
{
	mutex_init(&mtx);
}

void Bus::dispatch(const IMC::Message* msg)
{
	mutex_lock(&mtx);

	auto it = recipients.find(msg->getId());
	if (it == recipients.end()) {
		// printk("No recipients for message %d", msg->getId());
		delete msg;
		// printk("Message deleted");
		mutex_unlock(&mtx);
		return;
	}

	MessageWrapper* wrapper = new MessageWrapper();
	ASSERT_ERR(wrapper != nullptr, "Failed to allocate message wrapper");

	wrapper->msg = msg;
	wrapper->readers = it->second.size();

	for (size_t i = 0; i < it->second.size(); i++) {
		MailBox* receiver = it->second[i];
		receiver->receive(wrapper);
	}

	mutex_unlock(&mtx);
}

void Bus::registerMailBox(uint16_t id, MailBox* receiver)
{
	recipients[id].push_back(receiver);
}
