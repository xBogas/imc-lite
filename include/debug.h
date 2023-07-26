#ifndef DEBUG_H_INCLUDED_
#define DEBUG_H_INCLUDED_

#include <Arduino.h>

struct ListDebug
{
  char bfr[256];
  ListDebug* next;
  bool empty;
};

void debug(const char* src, const char* format, ...);
void add_msg(const char*);
void print_debug_msg();
void clear_debug_msg();


#endif