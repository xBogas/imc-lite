// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef HAL_CONF_CUSTOM_H_INCLUDED_
#define HAL_CONF_CUSTOM_H_INCLUDED_

#ifndef HAL_ETH_MODULE_DISABLED
#define HAL_ETH_MODULE_DISABLED
#endif

// Disable legacy Ethernet HAL module
#ifdef HAL_ETH_LEGACY_MODULE_ENABLED
#undef HAL_ETH_LEGACY_MODULE_ENABLED
#endif

// Include default HAL configuration
#include "stm32f7xx_hal_conf_default.h"

// Enable new Ethernet HAL module
#ifndef HAL_ETH_MODULE_ENABLED
#define HAL_ETH_MODULE_ENABLED
#include "stm32f7xx_hal_eth.h"
#endif



#endif // HAL_CONF_CUSTOM_H_INCLUDED_