#ifndef CORE_CONSUMERS_H_INCLUDED_
#define CORE_CONSUMERS_H_INCLUDED_

#include <functional>
#include <unordered_map>

#include "IMC.h"

// Just for registering consumers
class Consumers {
public:
	Consumers(void)
	{ }

	~Consumers(void)
	{ }

	// typedef void (*Consumer)(const IMC::Message* msg);
	typedef std::function<void(const IMC::Message*)> Consumer;
	typedef std::unordered_map<uint16_t, std::vector<Consumer>> ConsumersMap;

	// Register a consumer for a specific message id
	void registerConsumer(uint16_t id, Consumer consumer);

	// send message to all consumers
	void dispatch(const IMC::Message* msg);

private:
	ConsumersMap consumers;

	//! Non-copyable
	Consumers(Consumers&) = delete;
	Consumers& operator=(Consumers&) = delete;
};

extern class Consumers Core;

#endif