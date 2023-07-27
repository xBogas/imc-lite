#include "flash.h"

static uint32_t start_addr = 0x0000000000000000;

#define PAGE_SIZE 

static void _write(uint32_t start_addr, void* data, uint8_t num_pages)
{
  
}

void flash_write_data(uint8_t* bfr, uint16_t bfr_len)
{
  if(HAL_FLASH_Unlock() == HAL_ERROR)
    return;

  _write(start_addr, bfr, bfr_len/(1024));
  HAL_FLASH_Lock();
}