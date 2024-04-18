// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CORE_BUS_H_INCLUDED_
#define CORE_BUS_H_INCLUDED_

#include <unordered_map>
#include <vector>

#include "IMC.h"
#include "Core/Mailbox.h"

// IMC Bus to dispatch messages to consumers
class Bus {
public:
	Bus(void)
	{ }

	~Bus(void)
	{ }

	// Register a consumer for a specific message id
	void registerMailBox(uint16_t id, MailBox* receiver);

	// send message to all consumers
	void dispatch(const IMC::Message* msg);

private:
	std::unordered_map<uint16_t, std::vector<MailBox*>> recipients;

	//! Non-copyable
	Bus(Bus&) = delete;
	Bus& operator=(Bus&) = delete;
};

extern class Bus Core;

#endif