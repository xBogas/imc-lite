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

#include "System/Flash.h"

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

	virtual void setup(void) = 0;

	virtual void loop(void) = 0;

protected:
	bool get_params(void)
	{
		BasicParam* ptr = m_params.param;
		if (ptr == NULL) {
			debug("m_params is empty");
			return true;
		}

		// Read parameters from flash
		u8 bfr[256];
		u16 bytes;

		flash_read(FLASH_PARAMS, bfr, 256);

		bytes = ptr->deserialize(bfr, 256);

		debug("Read %d bytes from flash", bytes);
		if (bytes == 2) {
			debug("No parameters found in flash");
			return false;
		}

		debug("Read %s", ptr->label);

		return true;
	}

	void save_params(void)
	{
		// Save parameters to flash
		BasicParam* ptr = m_params.param;
		u8 bfr[256];
		u16 bytes = 0;

		debug("Saving parameters %s", ptr->label);

		bytes = ptr->serialize(bfr);

		debug("Writing %d bytes to flash", bytes);
		flash_write(FLASH_PARAMS, bfr, bytes);
	}

private:
	static u32 FLASH_PARAMS;

	// Task Parameters
	struct ParamList m_params;
};

#endif // CORE_TASK_H_INCLUDED_