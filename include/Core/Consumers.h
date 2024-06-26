// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CORE_CONSUMERS_H_INCLUDED_
#define CORE_CONSUMERS_H_INCLUDED_

#include "Defines.h"

#include "IMC.h"

/// @brief Wrapper for a message
/// @note This struct is used to keep track of the number of consumers for a
/// message. When all consumers have consumed the message, it is deleted.
struct MessageWrapper {
	const IMC::Message* msg;
	u32 readers;
};

/// @brief Abstract consumer callback
class AbstractConsumer {
public:
	virtual void consume(const IMC::Message* msg) = 0;
};

/// @brief Consumer callback wrapper
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

#endif