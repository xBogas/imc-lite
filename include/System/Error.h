#ifndef SYSTEM_ERROR_H_INCLUDED_
#define SYSTEM_ERROR_H_INCLUDED_

#include "Defines.h"

_BEGIN_STD_C

/// @brief Print an error message and exit the program
/// @param format The format string
/// @param ... The arguments to the format string
void error(const char* format, ...);

/// @brief Print a debug message
/// @param format The format string
/// @param ... The arguments to the format string
void debug(const char* format, ...);

_END_STD_C

#endif // SYSTEM_SYSTEM_H_INCLUDED_