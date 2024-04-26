// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef SYSTEM_TIMERS_H_INCLUDED_
#define SYSTEM_TIMERS_H_INCLUDED_

#include "Defines.h"

_BEGIN_STD_C

/// @brief Initialize the timer pool callbacks
void init_timer_pool(void);

/// @brief Add a callback to the timer pool
void add_callback(void (*callback)(void*), void* args, uint32_t interval);

_END_STD_C

#endif // SYSTEM_TIMERS_H_INCLUDED_