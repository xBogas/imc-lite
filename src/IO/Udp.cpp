// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Drivers/ethernet.h"
#include "IO.h"
#include "System.h"

namespace IO {

Udp::Udp(void)
  : Socket(),
	m_handle(nullptr),
	m_rx_buf(),
	m_dst_port(0),
	m_dst()
{ 
	m_rx_buf.head = nullptr;
	m_rx_buf.tail = nullptr;
}

Udp::~Udp(void)
{
	// Remove udp reader callback
	udp_recv(m_handle, nullptr, nullptr);

	// Close UDP handle
	udp_remove(m_handle);
}

void Udp::begin(u16 port)
{
	// Begin UDP connection
	m_handle = udp_new();

	ip_addr_t ip_local;
	ip_local.addr = eth_get_ip_addr();
	udp_bind(m_handle, &ip_local, port);

	udp_recv(m_handle, onPacket, this);

	// Set destination address to broadcast
	m_dst.addr = ip_local.addr | ~(eth_get_mask_addr());
	m_dst_port = 5000;
}

void Udp::write(const uint8_t* data, size_t size)
{
	struct pbuf* p = pbuf_alloc(PBUF_TRANSPORT, size, PBUF_RAM);
	if (p == nullptr) {
		printk("Failed to allocate buffer");
		return;
	}

	memcpy(p->payload, data, size);

	// Send data
	err_t code = udp_sendto(m_handle, p, &m_dst, m_dst_port);
	// code = udp_send(m_handle, p);
	if (code != ERR_OK) {
		printk("Failed to send data");
		return;
	}

	// Free buffer
	pbuf_free(p);
}

size_t Udp::read(uint8_t* data, size_t size)
{
	struct packet* top = m_rx_buf.head;
	if (top == nullptr)
		return 0;

	u16 rv = pbuf_copy_partial(top->buf, data, size, top->read);
	if (rv == 0)
		return 0; // Failed to read data

	top->read += rv;
	if (top->read >= top->buf->tot_len) {

		m_rx_buf.head = top->next;
		if (m_rx_buf.head == nullptr)
			m_rx_buf.tail = nullptr;

		pbuf_free(top->buf);
		free(top);
		m_rx_buf.count--;
	}

	return rv;
}

void Udp::connect(u8* ip_addr, u16 port)
{
	// Connect to remote host
	IP4_ADDR(&m_dst, ip_addr[0], ip_addr[1], ip_addr[2], ip_addr[3]);
	m_dst_port = port;
}

void Udp::disconnect(void)
{
	// Disconnect from remote host
	m_dst.addr = eth_get_ip_addr() | ~(eth_get_mask_addr());
	m_dst_port = 5000;
}

bool Udp::isConnected(void)
{
	u32 broadcast = eth_get_ip_addr() | ~(eth_get_mask_addr());
	return broadcast != m_dst.addr;
}

void Udp::onPacket(void* arg, struct udp_pcb* pcb, struct pbuf* p,
				   const ip_addr_t* addr, u16_t port)
{
	if (p == nullptr)
		return;

	Udp* self = static_cast<Udp*>(arg);
	if (self != nullptr)
		self->pushPacket(p);
	else
		pbuf_free(p);
}

void Udp::pushPacket(struct pbuf* p)
{
	struct packet* pack = (struct packet*)malloc(sizeof(struct packet));
	ASSERT_ERR(pack != nullptr, "Failed to allocate memory for packet");

	pack->buf = p;
	pack->read = 0;
	pack->next = nullptr;

	// Maximum packets to store
	if (m_rx_buf.count == 3)
	{
		struct packet* top = m_rx_buf.head;
		m_rx_buf.head = top->next;
		pbuf_free(top->buf);
		free(top);
		m_rx_buf.count--;
	}
	
	m_rx_buf.count++;

	if (m_rx_buf.head == nullptr) {
		m_rx_buf.head = pack;
		m_rx_buf.tail = pack;
		return;
	}

	m_rx_buf.tail->next = pack;
	m_rx_buf.tail = pack;
}

} // namespace IO