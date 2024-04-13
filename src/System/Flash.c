// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Defines.h"
#include "System/Flash.h"

#include "stm32f7xx_hal.h"

_BEGIN_STD_C

struct flash_cb {
	u32 start;
	u32 end;
	u32 ptr;
	u16 size;
	u16 section; // section to write
	bool erased;
};

struct flash_cb _flash;

void flash_init(void)
{
	_flash.start = FLASH_USER_ADDR;
	_flash.end = 0x08200000;
	_flash.ptr = _flash.start;
	_flash.size = 0;
	_flash.section = FLASH_SECTOR_11;
	_flash.erased = false;
}

u32 flash_write(u32 addr, u8* data, u16 bytes)
{
	if (_flash.erased == false)
		flash_erase_section(_flash.section);

	HAL_FLASH_Unlock();

	for (u16 i = 0; i < bytes; i++) {
		u8 rv = HAL_FLASH_Program(FLASH_TYPEPROGRAM_BYTE, addr, data[i]);
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

u32 flash_append(u8* data, u16 bytes)
{
	if ((_flash.ptr + bytes) > _flash.end)
		error("Flash memory full %d + %d > %d", _flash.ptr, bytes, _flash.end);

	u32 start = _flash.ptr;
	u32 rv = flash_write(_flash.ptr, data, bytes);
	if (rv == 0)
		return rv;

	_flash.ptr = rv;
	_flash.size += bytes;

	return start;
}

void flash_read(u32 addr, u8* bfr, u16 bytes)
{
	u8* flash_ptr = (u8*)addr;

	for (u16 i = 0; i < bytes; i++)
		bfr[i] = flash_ptr[i];
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
	if(HAL_FLASHEx_Erase(&EraseInitStruct, &SectorError) != HAL_OK)
		debug("Flash erase failed");

	HAL_FLASH_Lock();

	_flash.erased = true;
}

_END_STD_C
