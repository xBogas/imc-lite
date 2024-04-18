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
	MailBox(u32 size, Task* owner);

	~MailBox(void);

	// Receive message from mailbox
	void receive(const MessageWrapper* msg);

	MessageWrapper* waitMessage(u32 ms)
	{
		return (MessageWrapper*)mq_pop_timeout(mq, ms);
	}

	MessageWrapper* getMessage(void)
	{
		return (MessageWrapper*)mq_try_pop(mq);
	}

	void registerConsumer(uint16_t id, AbstractConsumer* consumer);

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

	void waitForMessages(u32 ms)
	{
		u32 start = Clock::getMs();
		u32 elapsed = Clock::getMs() - start;
		while (elapsed < ms) {

			MessageWrapper* wrapper = waitMessage(ms - elapsed);
			if (wrapper == NULL) // Timeout reached
				return;

            debug("Consuming message");

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
	struct mq* mq;
	Task* owner;
	std::map<uint16_t, AbstractConsumer*> consumers;
};

#endif // CORE_MAILBOX_H_INCLUDED_