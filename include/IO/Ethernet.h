// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef IO_ETHERNET_H_INCLUDED_
#define IO_ETHERNET_H_INCLUDED_

#include "Defines.h"
#include "Drivers/ethernet.h"

class Ethernet {
public:
	/// @brief Set MAC address
	/// @param mac_addr MAC address
	/// @note MAC address must be set before inintializing Ethernet
	void setMAC(u8* mac_addr)
	{
		eth_set_mac(mac_addr);
	}

	/// @brief Get MAC address
	/// @param mac_addr Buffer to store MAC address
	void getMAC(u8* mac_addr)
	{
		eth_get_mac(mac_addr);
	}

	/// @brief Initialize Ethernet module
	/// @param ip_addr Local IP address
	/// @param mask Netmask (optional - default to 255.255.255.0)
	/// @param gateway Gateway (optional - default to ip_addr with last octet
	/// set to 1)
	void begin(u8* ip_addr, u8* mask = nullptr, u8* gateway = nullptr)
	{
		ASSERT_ERR(ip_addr != nullptr, "Invalid IP address");

		eth_init(ip_addr, mask, gateway);
	}

	/// @brief Get local IP address
	/// @param ip_addr buffer to store IP address
	void getIP(u8* ip_addr)
	{
		eth_get_ip(ip_addr);
	}

	/// @brief Get netmask
	/// @param mask Buffer to store netmask
	void getMask(u8* mask)
	{
		eth_get_mask(mask);
	}

	/// @brief Get gateway
	/// @param gateway Buffer to store gateway
	void getGateway(u8* gateway)
	{
		eth_get_gw(gateway);
	}

	/// @brief Get instance of Ethernet
	static Ethernet& getInstance(void)
	{
		static Ethernet instance;
		return instance;
	}

private:
	Ethernet(void)
	{
		eth_set_mac(nullptr);
	}

	~Ethernet(void)
	{ }
};

#endif // IO_ETHERNET_H_INCLUDED_