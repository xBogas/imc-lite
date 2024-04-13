// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Core/Consumers.h"

class Bus Core;

void Bus::dispatch(const IMC::Message* msg)
{
	auto it = consumers.find(msg->getId());
	if (it == consumers.end())
		return;

	for (size_t i = 0; i < it->second.size(); i++) {
		AbstractConsumer* consumer = it->second[i];
		consumer->consume(msg);
	}
}

void Bus::registerConsumer(uint16_t id, AbstractConsumer* consumer)
{
	consumers[id].push_back(consumer);
}
