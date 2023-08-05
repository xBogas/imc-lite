#include "stm32_core.h"
//#include "stm32f7xx.h"
//#include "stm32f7xx_hal_pwr.h"

void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  // Configure LSE Drive Capability
  HAL_PWR_EnableBkUpAccess();

  // Configure the main internal regulator output voltage
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);

  // Initializes the RCC Oscillators
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 4;
  RCC_OscInitStruct.PLL.PLLN = 96;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  RCC_OscInitStruct.PLL.PLLR = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
    Error();

  // Activate the Over-Drive mode
  if (HAL_PWREx_EnableOverDrive() != HAL_OK)
    Error();

  // Initializes the CPU, AHB and APB buses clocks
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
    Error();
}

//! In case clocks need to be configured manually
union PLL_REG
{
  struct
  {
    uint32_t      : 1; // reserved
    uint32_t PPLR : 3;
    uint32_t PPLQ : 4;
    uint32_t      : 1; // reserved
    uint32_t _SRC : 1;
    uint32_t      : 4; // reserved
    uint32_t PLLP : 2;
    uint32_t      : 1; // reserved
    uint32_t PLLN : 9;
    uint32_t PLLM : 6;
  };
  uint32_t val;
};

static void wait_ready(uint32_t reg, uint32_t state, uint32_t timeout)
{
  uint32_t start = HAL_GetTick();
  while (!READ_BIT(reg, state))
  {
    if (HAL_GetTick() - start > timeout)
    {
      set_error("Config_clock timeout");
      Error();
    }
  }
}

//! Consulting Reference manual RCC registers
void config_clock(void)
{
  // Enable HSE
  SET_BIT(RCC->CR, RCC_CR_HSEON);
  // Wait for HSE to be ready
  wait_ready(RCC->CR, RCC_CR_HSERDY, 500);

  // Enable Power Clock and Voltage Regulator
  __HAL_RCC_PWR_CLK_ENABLE();
  // Write Voltage Regulator
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);

  // Configure PLL
  union PLL_REG pll_config = {
    .PPLR = 2, // not used right now 
    .PPLQ = 0, // not used right now
    ._SRC = 1, // use HSE
    .PLLP = 0, // PLLP = 2
    .PLLN = 96,// 96 -> 
    .PLLM = 4  // VC0 -> 
  };
  // Write PLL config
  WRITE_REG(RCC->PLLCFGR, pll_config.val);

  // DISABLE PPL
  CLEAR_BIT(RCC->CR, RCC_CR_PLLON);
  // Wait for PLL to be ready
  while (!READ_BIT(RCC->CR, RCC_CR_PLLRDY));

  // ENABLE PLL
  SET_BIT(RCC->CR, RCC_CR_PLLON);
  // Select PLL as clock source
  SET_BIT(RCC->CFGR, RCC_CFGR_SW_PLL);
  while (!READ_BIT(RCC->CFGR, RCC_CFGR_SWS_PLL));

  //! Should return 96 MHz if configures correctly (HSE at 8MHz)
  uint32_t sys_clock = HAL_RCC_GetSysClockFreq();
  (void)sys_clock;
}




//! Update SysTick
void SysTick_Handler(void)
{
  HAL_IncTick();
}