// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CORE_BACKGROUND_HPP_INCLUDED_
#define CORE_BACKGROUND_HPP_INCLUDED_

#include "IO.h"

#include "Core/Bus.h"
#include "Core/Task.h"

#include <Arduino.h>

enum IO_HANDLE {
	IO_UDP = 0,
};

class BackgroundTask : public Task {
public:
	BackgroundTask(void)
	  : Task("Background"),
		m_io(nullptr)
	{
		param("Handle uri", handle)
			.defaultValue("0//10.0.2.80:5000");

		setPriority(0);

		subscribe<IMC::EntityParameters>(*this);
	}

	void onUpdateParameters(void) override
	{
		if (paramChanged(handle))
			createHandle();
	}

	IO::Device* createHandle(void)
	{
		int id;
		char uri[33];

		int rv = sscanf(handle.c_str(), "%d//%32s", &id, uri);
		if (rv != 2) {
			spew("Failed to parse %s", handle.c_str());
			return nullptr;
		}

		uri[32] = '\0';

		switch (id) {
		case IO_UDP:
			m_io = createUDPHandle(uri);
			break;
		default:
			spew("unsupported id %d", id);
			return nullptr;
		}

		return m_io;
	}

	IO::Device* createUDPHandle(const char* uri)
	{
		u32 addr[4];
		u16 port;
		int rv = sscanf(uri, "%u.%u.%u.%u:%hu", &addr[0], &addr[1], &addr[2],
					 &addr[3], &port);
		if (rv != 5) {
			spew("Failed to parse udp uri %s : rv %d", uri, rv);
			spew("addr %u.%u.%u.%u:%u", addr[0], addr[1], addr[2],
				 addr[3], port);
			return nullptr;
		}

		u8 addr_8[4] = {(u8)addr[0], (u8)addr[1], (u8)addr[2], (u8)addr[3]};

		IO::Udp* udp = new IO::Udp();
		udp->begin(7777);
		udp->connect(addr_8, port);

		spew("UDP connected to %u.%u.%u.%u:%u", addr[0], addr[1],
			 addr[2], addr[3], port);

		return udp;
	}

	void setup(void)
	{
		spew("setup done");
		if (m_io == nullptr)
			error("No handle created");
	}

	void consume(const IMC::EntityParameters* msg)
	{
		u8 tx_buf[1024];
		size_t rv = IMC::serialize(msg, tx_buf, sizeof(tx_buf));
		if (rv) {
			m_io->write(tx_buf, rv);
			spew("sent params %d bytes", rv);
		}

		digitalToggle(LED_RED);
	}

	void loop(void)
	{
		eth_process();

		size_t rv = m_io->read(m_buffer, 1024);
		if (rv) {
			IMC::Message* ptr = IMC::parser(m_buffer, rv);
			if (ptr != nullptr) {
				Clock::setEpoch(ptr->getTimeStamp());
				digitalToggle(LED_GREEN);
		 		dispatch(ptr);
			}
		}

		//consumeMessages();
		waitForMessages(10);
	}

protected:
	std::string handle;
	u8 m_buffer[1024];
	IO::Device* m_io;
};

#endif // CORE_BACKGROUND_HPP_INCLUDED_