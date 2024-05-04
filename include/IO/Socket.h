// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef IO_SOCKET_H_INCLUDED_
#define IO_SOCKET_H_INCLUDED_

#include "Device.h"

namespace IO {

class Socket : public Device {
public:
    Socket(void)
    { }

    virtual ~Socket(void)
    { }

    /// @brief Initialize socket module
    /// @param port Local port
    virtual void begin(u16 port) = 0;

    /// @brief Write data to device
    /// @param data Buffer to write
    /// @param size Size of buffer
    virtual void write(const uint8_t* data, size_t size) = 0;

    /// @brief Read data from device
    /// @param data Buffer to store data
    /// @param size Size of buffer
    /// @return Number of bytes read or 0 on error
    virtual size_t read(uint8_t* data, size_t size) = 0;

    /// @brief Connect to remote host
    /// @param ip_addr Remote IP address
    /// @param port Remote port
    virtual void connect(u8* ip_addr, u16 port) = 0;

    /// @brief Disconnect from remote host
    virtual void disconnect(void) = 0;

    /// @brief Check if socket is connected
    /// @return True if connected, false otherwise
    virtual bool isConnected(void) = 0;
};
} // namespace IO

#endif