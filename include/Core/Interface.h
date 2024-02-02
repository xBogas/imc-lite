#ifndef IMC_CORE_INTERFACE_H_INCLUDED_
#define IMC_CORE_INTERFACE_H_INCLUDED_

#include <cstddef>
#include <cstdint>

#include "IMC.h"

#define Debug(...) IMC::debug(__VA_ARGS__)

namespace IMC {

void debug(const char* format, ...);

class CommsInterface {
public:
	struct EntityInfo {
		std::string label;
		uint16_t id;
	};

	CommsInterface(void)
	  : reader(nullptr),
		writer(nullptr),
		dbg(nullptr)
	{
		registerEntity("BoardName");
	}

	~CommsInterface(void)
	{ }

	// Interface is ready to start running
	bool ready(void)
	{
		return (reader != nullptr) && (writer != nullptr);
	}

	// Set input function
	// func must return number of bytes read
	// or <0 on error
	void setInput(int (*func)(uint8_t*, size_t))
	{
		if (func != nullptr)
			reader = func;
	}

	// Set output function
	void setOutput(int (*func)(uint8_t*, size_t))
	{
		if (func != nullptr)
			writer = func;
	}

	// Set debug output function
	void setDebug(int (*func)(const char*))
	{
		if (func != nullptr)
			dbg = func;
	}

	// Debug function
	void debug(const char* str)
	{
		if (dbg != nullptr)
			dbg(str);
	}

	/**
	 * Start IMC interface
	 * Wait for EntityList query
	 * Send EntityList response with labels to reserve
	 * Wait for reserved entity IDs
	 */
	void start(void);

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

	// reader callback
	int (*reader)(uint8_t*, size_t);

	// writer callback
	int (*writer)(uint8_t*, size_t);

	// debug callback
	int (*dbg)(const char*);

	// Entities
	std::vector<EntityInfo> entities;
};

} // namespace IMC

extern IMC::CommsInterface Interface;

#endif // IMC_CORE_INTERFACE_H_INCLUDED_