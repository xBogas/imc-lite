// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CORE_TASK_H_INCLUDED_
#define CORE_TASK_H_INCLUDED_

#include <sstream>

#include <IMC.h>

#include "AbstractTask.h"
#include "Consumers.h"
#include "Parameters.h"

class Task : public AbstractTask {
public:
	Task(const char* name, uint16_t _prio = 1);

	virtual ~Task(void)
	{ }

	// Add a parameter to the task
	template <typename T>
	Param<T>& param(const char* label, T& variable)
	{
		Param<T>* ptr = new Param<T>(label, variable);
		m_params.push_back((BasicParam*)ptr);

		return *ptr;
	}

	void consume(const IMC::QueryEntityParameters* msg);

	void onQueryEntityParameters(const IMC::QueryEntityParameters* msg)
	{ }

	void consume(const IMC::SetEntityParameters* msg);

	void onSetEntityParameters(const IMC::SetEntityParameters* msg)
	{ }

	template <typename Msg, typename Obj>
	void subscribe(Obj& task, void (Obj::*consumer)(const Msg*) = &Obj::consume)
	{
		ConsumerWrapper<Obj, Msg>* callable =
			new ConsumerWrapper<Obj, Msg>(task, consumer);

		registerConsumer(Msg::getIdStatic(), callable);
	}

	// Register a consumer for message id
	void registerConsumer(uint16_t id, AbstractConsumer* consumer);

	// void setPeriod(uint32_t period);
	// void setDeadline(uint32_t deadline);

	void run(void)
	{
		setup();

		while (isRunning())
			loop();
	}

	bool loadParams(u8* bfr, uint16_t len)
	{
		// Read parameters from flash
		ParamList* iter = &m_params;
		while (iter) {

			BasicParam* ptr = iter->param;
			if (ptr == NULL)
				break;

			u16 rv = ptr->deserialize(bfr, len);
			if (rv != ptr->getSerilizationSize())
				return false;

			debug("Read %s", ptr->label.c_str());
			bfr += rv;
			iter = iter->next;
		}

		return true;
	}

	uint16_t saveParams(u8* bfr, u16 bfr_len)
	{
		debug("Saving task %s parameters", getName());
		ParamList* iter = &m_params;
		u16 bytes = 0;
		while (iter) {
			BasicParam* ptr = iter->param;
			if (ptr == NULL)
				return bytes;

			debug("Saving %s param", ptr->label.c_str());
			bytes += ptr->serialize(bfr + bytes);
			iter = iter->next;
		}

		return bytes;
	}

protected:
	virtual void setup(void) = 0;

	virtual void loop(void) = 0;

private:
	// Task Parameters
	struct ParamList m_params;
};

#endif // CORE_TASK_H_INCLUDED_