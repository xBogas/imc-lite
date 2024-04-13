// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CORE_CONSUMERS_H_INCLUDED_
#define CORE_CONSUMERS_H_INCLUDED_

#include <unordered_map>

#include "IMC.h"

class AbstractConsumer {
public:
	virtual void consume(const IMC::Message* msg) = 0;
};

template <typename Class, typename Topic>
class ConsumerWrapper : public AbstractConsumer {
public:
	typedef void (Class::*Callable)(const Topic*);

	ConsumerWrapper(Class& instance, Callable f_ptr)
	  : obj(instance),
		func(f_ptr)
	{ }

	void consume(const IMC::Message* msg) override
	{
		(obj.*func)((Topic*)msg);
	}

private:
	Class& obj;
	Callable func;
};

// IMC Bus to dispatch messages to consumers
class Bus {
public:
	Bus(void)
	{ }

	~Bus(void)
	{ }

	// Register a consumer for a specific message id
	void registerConsumer(uint16_t id, AbstractConsumer* consumer);

	// send message to all consumers
	void dispatch(const IMC::Message* msg);

private:
	std::unordered_map<uint16_t, std::vector<AbstractConsumer*>> consumers;

	//! Non-copyable
	Bus(Bus&) = delete;
	Bus& operator=(Bus&) = delete;
};

extern class Bus Core;

#endif