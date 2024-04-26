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

#include "Core/Mailbox.h"
#include "IMC.h"

// IMC Bus to dispatch messages to Task mailboxes
class Bus {
public:
	/// @brief Constructor
	Bus(void)
	{ }

	/// @brief Destructor
	~Bus(void)
	{ }

	/// @brief Register mailbox for a specific message id
	/// @param id Message id
	/// @param receiver Mailbox to register
	void registerMailBox(uint16_t id, MailBox* receiver);

	/// @brief Distach message to available mailboxes
	/// @param msg Message to dispatch
	void dispatch(const IMC::Message* msg);

private:
	std::unordered_map<uint16_t, std::vector<MailBox*>> recipients;

	//! Non-copyable
	Bus(Bus&) = delete;
	Bus& operator=(Bus&) = delete;
};

extern class Bus Core;

#endif