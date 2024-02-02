#include <Arduino.h>

#include "Core/Interface.h"
#include "IMC.h"
#include "Utils.h"

#define MAX_BFR_SIZE 512
#define IMC_TIMEOUT	 60000 // 60 seconds

class IMC::CommsInterface Interface;

namespace IMC {

// Print message to debug output
void debug(const char* format, ...)
{
	char str[100];
	va_list args;
	va_start(args, format);
	vsprintf(str, format, args);
	va_end(args);

	Interface.debug(str);
}

// Print error message
// Start blinking red LED
static void error(const char* str = nullptr)
{
	if (str != nullptr)
		Debug(str);

	digitalWrite(LED_GREEN, LOW);
	while (1) {
		digitalWrite(LED_RED, LOW);
		delay(500);
		digitalWrite(LED_RED, HIGH);
		delay(500);
	}
}

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

void CommsInterface::start(void)
{
	if (!ready())
		error("Interface not ready to start!");

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
	uint32_t start = millis();
	uint8_t bfr[MAX_BFR_SIZE];
	while (millis() - start < IMC_TIMEOUT) {
		int rv = reader(bfr, MAX_BFR_SIZE);
		if (rv <= 0)
			continue;

		IMC::Message* msg = IMC::parser(bfr, MAX_BFR_SIZE);
		if (msg)
			return msg;
	}

	Debug("Timeout waiting for message");
	return nullptr;
}

void CommsInterface::sendMessage(Message* msg)
{
	Debug("Sending message %d", msg->getId());
	uint8_t bfr[MAX_BFR_SIZE];
	uint16_t size = IMC::serialize(msg, bfr, MAX_BFR_SIZE);
	if (size == (uint16_t)-1)
		error("Error serializing message!");

	writer(bfr, size);
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

	Debug("str: %s", el->list.c_str());
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