// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef IO_UDP_H_INCLUDED_
#define IO_UDP_H_INCLUDED_

#include <cstring>

#include "lwip/udp.h"

#include "Socket.h"

namespace IO {
class Udp : public Socket {
public:
	/// @brief Constructor
	Udp(void);

	/// @brief Destructor
	~Udp(void);

	/// @brief Initialize UDP socket
	/// @param port Local listening port
	/// @note This will set the destination address to broadcast
	/// and the destination port to 5000
	void begin(u16 port);

	/// @brief Write data to device
	/// @param data Buffer to write
	/// @param size Size of buffer
	void write(const uint8_t* data, size_t size) override;

	/// @brief Read data from UDP socket
	/// @param data Buffer to store data
	/// @param size Size of buffer
	/// @return Number of bytes read or 0 on error
	/// @note This will only read one packet at a time
	/// even if multiple packets are available.
	size_t read(uint8_t* data, size_t size) override;

	/// @brief Connect to remote host
	/// @param ip_addr Remote IP address
	/// @param port Remote port
	void connect(u8* ip_addr, u16 port);

	/// @brief Disconnect from remote host
	void disconnect(void);

	/// @brief Check if socket is connected
	/// @return True if connected, false otherwise
	/// @note Since UDP is connectionless,
	/// return true if destination address is
	bool isConnected(void);

	/// @brief Callback function for incoming packets
	/// @param arg User argument Udp object
	/// @param pcb UDP protocol control block
	/// @param p Packet buffer
	/// @param addr Source IP address
	/// @param port Source port
	static void onPacket(void* arg, struct udp_pcb* pcb, struct pbuf* p,
						 const ip_addr_t* addr, u16_t port);

private:
	/// @brief Store incoming packet
	/// @param p incoming packet
	/// @note If 3 packets are already stored,
	/// the oldest will be discarded to make room for the new one.
	void pushPacket(struct pbuf* p);

	/// @brief Packet structure
	struct packet {
		/// @brief Buffer with packet data
		struct pbuf* buf;
		/// @brief Next packet in list
		struct packet* next;
		/// @brief Read offset of packet
		u16 read;
	};

	/// @brief Packet list structure
	struct pack_list {
		/// @brief Head of list
		struct packet* head;
		/// @brief Tail of list
		struct packet* tail;
		/// @brief Number of packets in list
		u16 count;
	};

	/// @brief UDP protocol control block
	struct udp_pcb* m_handle;
	/// @brief Packet list for incoming packets
	struct pack_list m_rx_buf;
	/// @brief Destination port
	u16 m_dst_port;
	/// @brief Destination IP address
	struct ip4_addr m_dst;
};

} // namespace IO

#endif