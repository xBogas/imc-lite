// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Core/Bus.h"

class Bus Core;

void Bus::dispatch(const IMC::Message* msg)
{
	MessageWrapper* wrapper = new MessageWrapper();
	ASSERT_ERR(wrapper != nullptr, "Failed to allocate message wrapper");

	auto it = recipients.find(msg->getId());
	if (it == recipients.end())
		return;

	wrapper->msg = msg;
	wrapper->readers = it->second.size();

	for (size_t i = 0; i < it->second.size(); i++) {
		MailBox* receiver = it->second[i];
		receiver->receive(wrapper);
	}
}

void Bus::registerMailBox(uint16_t id, MailBox* receiver)
{
	recipients[id].push_back(receiver);
}
