#include "Core/Consumers.h"

class Consumers Core;

void Consumers::dispatch(const IMC::Message* msg)
{
	auto it = consumers.find(msg->getId());
	if (it == consumers.end())
		return;

	for (auto& consumer : it->second)
		consumer(msg);
}

void Consumers::registerConsumer(uint16_t id, Consumer consumer)
{
	consumers[id].push_back(consumer);
}
