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

#include "Core/AbstractTask.h"
#include "Core/Consumers.h"
#include "Core/Parameters.h"

#define TASK_EXPORT(name)                                                      \
	Task* create##name##Task(void)                                             \
	{                                                                          \
		return new name();                                                     \
	}

// Forward declaration
class MailBox;

class Task : public AbstractTask {
public:
	/// @brief Constructor
	/// @param name Task name
	/// @param _prio Task priority
	Task(const char* name, uint16_t _prio = 1);

	/// @brief Destructor
	virtual ~Task(void)
	{ }

	/// @brief Add a parameter to the task
	/// @tparam T Variable type
	/// @param label Parameter label
	/// @param variable Reference to the variable
	/// @return Param object
	template <typename T>
	Param<T>& param(const char* label, T& variable)
	{
		Param<T>* ptr = new Param<T>(label, variable);
		m_params.push_back((BasicParam*)ptr);

		return *ptr;
	}

	/// @brief Check if a parameter has changed since the last update
	/// @tparam T Variable type
	/// @param variable Parameter variable reference
	/// @return True if the parameter has changed, false otherwise
	template <typename T>
	bool paramChanged(T& variable)
	{
		BasicParam* ptr = m_params.findParam(&variable);
		if (ptr == NULL)
			return false;

		Param<T>* p = static_cast<Param<T>*>(ptr);
		return p->hasChanged();
	}

	/// @brief Dispatch a message to bus
	/// @param msg IMC message to send to bus
	/// @note Must send a pointer to the message
	/// and task gives up ownership of the message
	void dispatch(const IMC::Message* msg);

	/// @brief Default consumer for QueryEntityParameters message
	/// @param msg QueryEntityParameters message
	void consume(const IMC::QueryEntityParameters* msg);

	/// @brief Consumer extension for QueryEntityParameters
	/// @param msg QueryEntityParameters message
	/// @note Derived classes that need to execute additional code when
	/// receiving a QueryEntityParameters message should override this method
	virtual void onQueryEntityParameters(const IMC::QueryEntityParameters* msg)
	{ }

	/// @brief Default consumer for SetEntityParameters message
	/// @param msg SetEntityParameters message
	void consume(const IMC::SetEntityParameters* msg);

	/// @brief Consumer extension for SetEntityParameters
	/// @note Derived classes that need to execute additional code when
	/// receiving a SetEntityParameters message should override this method
	virtual void onUpdateParameters(void)
	{ }

	/// @brief Subscribe to an IMC message
	/// @tparam Msg IMC message type
	/// @tparam Obj Task object type
	/// @param task Reference to the task object
	/// @param consumer Consumer method
	template <typename Msg, typename Obj>
	void subscribe(Obj& task, void (Obj::*consumer)(const Msg*) = &Obj::consume)
	{
		ConsumerWrapper<Obj, Msg>* callable =
			new ConsumerWrapper<Obj, Msg>(task, consumer);

		registerConsumer(Msg::getIdStatic(), callable);
	}

	/// @brief Register a consumer for a specific message id
	/// @param id Message id
	/// @param consumer Consumer to register
	void registerConsumer(uint16_t id, AbstractConsumer* consumer);

	// void setPeriod(uint32_t period);
	// void setDeadline(uint32_t deadline);

	/// @brief Start the task
	void run(void)
	{
		setup();

		while (isRunning())
			loop();
	}

	/// @brief Load task parameters
	/// @param bfr Buffer with the parameters
	/// @param len Length of the buffer
	/// @return True if the parameters were loaded successfully, false otherwise
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

			bfr += rv;
			iter = iter->next;
		}

		return true;
	}

	/// @brief Save task parameters
	/// @param bfr Buffer to save the parameters
	/// @param bfr_len Length of the buffer
	/// @return Number of bytes
	uint16_t saveParams(u8* bfr, u16 bfr_len)
	{
		ParamList* iter = &m_params;
		u16 bytes = 0;
		while (iter) {
			BasicParam* ptr = iter->param;
			if (ptr == NULL)
				return bytes;

			bytes += ptr->serialize(bfr + bytes);
			iter = iter->next;
		}

		return bytes;
	}

protected:
	/// @brief Task setup
	virtual void setup(void) = 0;

	/// @brief Task loop
	virtual void loop(void) = 0;

	/// @brief Wait for messages and consume them for ms milliseconds
	/// @param ms Time in milliseconds
	void waitForMessages(u32 ms);

	/// @brief Consume all messages in mailbox
	void consumeMessages(void);

private:
	///@brief Entity label name
	std::string m_label;
	/// @brief Task Mailbox object to receive messages
	MailBox* m_mail;
	/// @brief Task parameters
	struct ParamList m_params;
};

#endif // CORE_TASK_H_INCLUDED_