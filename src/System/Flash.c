// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "System/Flash.h"
#include "Defines.h"
#include "System/Flash.h"

#include "stm32f7xx_hal.h"

_BEGIN_STD_C

u32 flash_write(u32 addr, const void* data, u16 bytes)
{
	u8* _data = (u8*)data;
	HAL_FLASH_Unlock();

	for (u16 i = 0; i < bytes; i++) {
		u8 rv = HAL_FLASH_Program(FLASH_TYPEPROGRAM_BYTE, addr, _data[i]);
		if (rv != HAL_OK) {
			HAL_FLASH_Lock();
			error("Flash write failed");
			return 0;
		} else
			addr += 1;
	}

	HAL_FLASH_Lock();
	return addr;
}

void flash_read(u32 addr, void* bfr, u16 bytes)
{
	u8* flash_ptr = (u8*)addr;
	u8* bfr_ptr = (u8*)bfr;

	for (u16 i = 0; i < bytes; i++)
		bfr_ptr[i] = flash_ptr[i];
}

void flash_erase_section(u32 section)
{
	HAL_FLASH_Unlock();

	debug("Erasing flash sector %d", section);

	FLASH_EraseInitTypeDef EraseInitStruct;
	EraseInitStruct.TypeErase = FLASH_TYPEERASE_SECTORS;
	EraseInitStruct.VoltageRange = FLASH_VOLTAGE_RANGE_3;
	EraseInitStruct.Sector = section;
	EraseInitStruct.NbSectors = 1;

	u32 SectorError = 0;
	if (HAL_FLASHEx_Erase(&EraseInitStruct, &SectorError) != HAL_OK)
		debug("Flash erase failed");

	HAL_FLASH_Lock();
}

_END_STD_C
