// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef IO_DEVICE_H_INCLUDED_
#define IO_DEVICE_H_INCLUDED_

#include "Defines.h"

namespace IO {

class Device {
public:
	Device(void)
	{ }

	virtual ~Device(void)
	{ }

	/// @brief Write data to device
	/// @param data Buffer to write
	/// @param size Size of buffer
	virtual void write(const uint8_t* data, size_t size) = 0;

	/// @brief Read data from device
	/// @param data Buffer to store data
	/// @param size Size of buffer
	/// @return Number of bytes read or 0 on error
	virtual size_t read(uint8_t* data, size_t size) = 0;
};

} // namespace IO

#endif