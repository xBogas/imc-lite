// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef SYSTEM_FLASH_H_INCLUDED_
#define SYSTEM_FLASH_H_INCLUDED_

#include "Defines.h"

_BEGIN_STD_C

/// @brief Write to flash
/// @param addr Address to write to
/// @param data Data to write
/// @param bytes Number of bytes to write
/// @return Address of the last byte written
u32 flash_write(u32 addr, const void* data, u16 bytes);

/// @brief Read from flash
/// @param addr Address to read from
/// @param bfr Buffer to store the data
/// @param bytes Number of bytes to read
void flash_read(u32 addr, void* bfr, u16 bytes);

/// @brief Erase a flash sector
void flash_erase_section(u32 sector);

_END_STD_C

#endif // SYSTEM_FLASH_H_INCLUDED_