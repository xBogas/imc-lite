// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CORE_MAILBOX_H_INCLUDED_
#define CORE_MAILBOX_H_INCLUDED_

#include "Concurrency.h"
#include "IMC.h"
#include "System.h"

#include "Core/Consumers.h"
#include "Core/Task.h"

#include <map>

class MailBox {
public:
	/// @brief Constructor
	/// @param size Mailbox size
	/// @param owner Task owner
	MailBox(u32 size, Task* owner);

	/// @brief Destructor
	~MailBox(void);

	/// @brief Push message to mailbox
	/// @param msg Message to receive
	void receive(const MessageWrapper* msg);

	/// @brief Register consumer for a specific message id
	/// @param id Message id
	/// @param consumer Consumer to register
	void registerConsumer(uint16_t id, AbstractConsumer* consumer);

	/// @brief Wait for message
	/// @param ms Timeout in milliseconds
	/// @return MessageWrapper pointer or NULL if timeout
	MessageWrapper* waitMessage(u32 ms)
	{
		return (MessageWrapper*)mq_pop_timeout(mq, ms);
	}

	/// @brief Try to get message
	/// @return MessageWrapper pointer or NULL if no message
	MessageWrapper* getMessage(void)
	{
		return (MessageWrapper*)mq_try_pop(mq);
	}

	/// @brief Consume all messages in mailbox
	void consumeMessages(void)
	{
		MessageWrapper* wrapper = getMessage();
		if (wrapper == NULL)
			return;

		consumers[wrapper->msg->getId()]->consume(wrapper->msg);
		wrapper->readers--;
		if (wrapper->readers == 0) {
			delete wrapper->msg;
			delete wrapper;
		}
	}

	/// @brief Wait for the receiving queue to contain messages
	/// and then execute consume method
	/// @param ms Timeout in milliseconds
	void waitForMessages(u32 ms)
	{
		u32 start = Clock::getMs();
		u32 elapsed = Clock::getMs() - start;
		while (elapsed < ms) {

			MessageWrapper* wrapper = waitMessage(ms - elapsed);
			if (wrapper == NULL) // Timeout reached
				return;

			consumers[wrapper->msg->getId()]->consume(wrapper->msg);
			wrapper->readers--;
			if (wrapper->readers == 0) {
				delete wrapper->msg;
				delete wrapper;
			}

			elapsed = Clock::getMs() - start;
		}
	}

private:
	/// @brief Message queue
	struct mq* mq;
	/// @brief Task owner
	Task* owner;
	/// @brief Consumer for each message id
	std::map<uint16_t, AbstractConsumer*> consumers;
};

#endif // CORE_MAILBOX_H_INCLUDED_