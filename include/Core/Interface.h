// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef IMC_CORE_INTERFACE_H_INCLUDED_
#define IMC_CORE_INTERFACE_H_INCLUDED_

#include <cstddef>
#include <cstdint>

#include "IMC.h"
#include "IO.h"

namespace IMC {

// IMC Communication interface
class CommsInterface {
public:
	struct EntityInfo {
		std::string label;
		uint16_t id;
	};

	CommsInterface(void)
	{
		registerEntity("BoardName");
	}

	~CommsInterface(void)
	{ }

	/**
	 * Start IMC interface - PTP mode *blocking*
	 * Wait for EntityList query
	 * Send EntityList response with labels to reserve
	 * Wait for reserved entity IDs
	 */
	void start(IO::Device* dev);

	// Register entity
	void registerEntity(const char* label);

private:
	// Wait for incoming message
	Message* waitMessage(void);

	// Send message
	void sendMessage(Message* msg);

	// Parse query message
	bool parseEntityList(Message* msg);

	// Wait for query message
	void waitQuery(void);

	// Reserve entity for this device
	void reserveEntities(void);

	// wait for response message
	// with reserved entity IDs
	void waitResponse(void);

	// Entities
	std::vector<EntityInfo> entities;

	// Device
	IO::Device* device;
};

} // namespace IMC

#endif // IMC_CORE_INTERFACE_H_INCLUDED_