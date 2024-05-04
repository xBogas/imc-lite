// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef DRIVERS_ETHERNET_H_INCLUDED_
#define DRIVERS_ETHERNET_H_INCLUDED_

#include "Defines.h"

_BEGIN_STD_C

/// @brief Initialize the Ethernet interface
/// @param ip_addr IP address
/// @param mask Network mask
/// @param gateway Gateway
/// @note mask and gateway are optional parameters
/// If these are empty, the default values are
/// 255.255.255.0 and ip_addr[0].ip_addr[1].0.1, respectively
void eth_init(u8* ip_addr, u8* mask, u8* gateway);

/// @brief Set the MAC address of the Ethernet interface
/// @param mac MAC address
/// @note Default Mac address is set to 00:80:E1:XX:XX:XX, where XX:XX:XX is the
/// last 3 bytes of the unique device ID
void eth_set_mac(u8* mac);

/// @brief Get the MAC address of the Ethernet interface
/// @param mac MAC address buffer
void eth_get_mac(u8* mac);

/// @brief Get the IP address of the Ethernet interface
/// @param ip IP address buffer
void eth_get_ip(u8* ip);

/// @brief Get the IP address of the Ethernet interface
/// @return IP address in u32 format
u32 eth_get_ip_addr(void);

/// @brief Get the network mask of the Ethernet interface
/// @param Network mask
void eth_get_mask(u8* mask);

/// @brief Get the network mask of the Ethernet interface
/// @return Network mask address in u32 format
u32 eth_get_mask_addr(void);

/// @brief Get the gateway of the Ethernet interface
/// @param gw Gateway
void eth_get_gw(u8* gw);

/// @brief Process Ethernet packets
void eth_process(void);

_END_STD_C

#endif
