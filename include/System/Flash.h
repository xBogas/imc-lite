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

/// @brief
void flash_init(void) __attribute__((constructor));

/// @brief
/// @param addr
/// @param data
/// @param bytes
/// @return
u32 flash_write(u32 addr, u8* data, u16 bytes);

/// @brief
/// @param data
/// @param bytes
/// @return
u32 flash_append(u8* data, u16 bytes);

/// @brief
/// @param addr
/// @param bfr
/// @param bytes
void flash_read(u32 addr, u8* bfr, u16 bytes);

/// @brief Erase a flash sector
void flash_erase_section(u32 sector);

_END_STD_C

#endif // SYSTEM_FLASH_H_INCLUDED_