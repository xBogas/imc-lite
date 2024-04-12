// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef SYSTEM_ERROR_H_INCLUDED_
#define SYSTEM_ERROR_H_INCLUDED_

#include "Defines.h"

_BEGIN_STD_C

void debug_init(void) __attribute__((constructor));

/// @brief Print an error message and exit the program
/// @param format The format string
/// @param ... The arguments to the format string
void error(const char* format, ...);

/// @brief Print a debug message
/// @param format The format string
/// @param ... The arguments to the format string
void debug(const char* format, ...);

/// @brief Wait for user input
/// @return The character read
char debug_wait_input(void);

_END_STD_C

#endif // SYSTEM_SYSTEM_H_INCLUDED_