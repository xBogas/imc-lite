// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef SYSTEM_TERMINAL_H_INLCUDED_
#define SYSTEM_TERMINAL_H_INLCUDED_

#include "Defines.h"

_BEGIN_STD_C

/// @brief Initialize the terminal
void terminal_init(void) __attribute__((constructor));

/// @brief Print a string to the terminal
/// @param fmt Format string
/// @param ... Arguments
void printk(const char* fmt, ...);

/// @brief Print a string to the terminal
void term_print(const char* str);

/// @brief Panic terminal message
/// @param str Panic message
void term_panic(const char* str);

_END_STD_C

#endif // SYSTEM_TERMINAL_H_INLCUDED_
