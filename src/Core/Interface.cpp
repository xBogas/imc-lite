// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Core/Interface.h"
#include "IMC.h"
#include "Utils.h"

#include "System/Error.h"
#include "System/Time.h"

#include <stdarg.h>

#define MAX_BFR_SIZE 512
#define IMC_TIMEOUT	 60000 // 60 seconds

// class IMC::CommsInterface Interface;

namespace IMC {

// Check if message is a valid EntityList query
static bool parseQuery(IMC::Message* msg)
{
	if (!msg)
		return false;

	if (msg->getId() != IMC_ENTITYLIST)
		return false;

	IMC::EntityList* el = (IMC::EntityList*)msg;
	if (el->op != IMC::EntityList::OP_QUERY)
		return false;

	// received valid query
	return true;
}

void CommsInterface::start(IO::Device* dev)
{
	ASSERT_ERR(dev != nullptr, "Invalid device");
	device = dev;

	waitQuery();	   // Wait for EntityList query
	reserveEntities(); // Send EntityList response
	waitResponse();	   // Wait for reserved entity IDs
}

void CommsInterface::registerEntity(const char* label)
{
	EntityInfo ei = {
		.label = label,
		.id = IMC_CONST_UNK_EID,
	};

	entities.push_back(ei);
}

void CommsInterface::waitQuery(void)
{
	IMC::Message* msg = nullptr;
	do {
		Utils::clear(msg);
		msg = waitMessage();
	} while (!parseQuery(msg));

	Utils::clear(msg);
}

void CommsInterface::reserveEntities(void)
{
	IMC::EntityList msg;
	msg.op = IMC::EntityList::OP_REPORT;

	msg.list = entities[0].label;

	for (size_t i = 1; i < entities.size(); i++) {
		msg.list += ";";
		msg.list += entities[i].label;
	}

	sendMessage(&msg);
}

Message* CommsInterface::waitMessage(void)
{
	uint32_t start = Clock::getMs();
	uint8_t bfr[MAX_BFR_SIZE];
	while (Clock::getMs() - start < IMC_TIMEOUT) {
		int rv = device->read(bfr, MAX_BFR_SIZE);
		if (rv <= 0)
			continue;

		IMC::Message* msg = IMC::parser(bfr, MAX_BFR_SIZE);
		if (msg)
			return msg;
	}

	debug("Timeout waiting for message");
	return nullptr;
}

void CommsInterface::sendMessage(Message* msg)
{
	debug("Sending message %d", msg->getId());
	uint8_t bfr[MAX_BFR_SIZE];
	uint16_t size = IMC::serialize(msg, bfr, MAX_BFR_SIZE);
	if (size == (uint16_t)-1)
		error("Error serializing message!");

	device->write(bfr, size);
}

bool CommsInterface::parseEntityList(IMC::Message* msg)
{
	if (!msg)
		return false;

	if (msg->getId() != IMC_ENTITYLIST)
		return false;

	IMC::EntityList* el = (IMC::EntityList*)msg;
	if (el->op != IMC::EntityList::OP_REPORT)
		return false;

	debug("str: %s", el->list.c_str());
	// Parse entity IDs
	std::vector<std::string> labels;

	Utils::split(el->list, labels, ";=");
	size_t pos = 0;
	for (size_t i = 0; i < labels.size(); i += 2) {
		entities[pos].id = stoi(labels[i + 1]);
		pos++;
	}

	return true;
}

void CommsInterface::waitResponse(void)
{
	IMC::Message* msg = nullptr;
	do {
		Utils::clear(msg);
		msg = waitMessage();
	} while (!parseEntityList(msg));

	Utils::clear(msg);
}

} // namespace IMC