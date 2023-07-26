#include "debug.h"

static ListDebug debug_msg = {
  .bfr = {0},
  .next = NULL,
  .empty = true
};


void clear_debug_msg()
{
  memset(debug_msg.bfr, 0, 256);
  debug_msg.empty = true;
  ListDebug* ptr = debug_msg.next;
  debug_msg.next = NULL;
  
  ListDebug* _prev;
  while (ptr != NULL)
  {
    _prev = ptr;
    ptr = ptr->next;
    delete _prev;
  }
}

void add_msg(const char* bfr)
{
  ListDebug* ptr = &debug_msg;
  while (!ptr->empty)
  {
    if (ptr->next == NULL)
      ptr->next = new ListDebug{ {0}, NULL, true};
    ptr = ptr->next;
  }
  strcpy(ptr->bfr, bfr);
  ptr->empty = false;
}

void print_debug_msg()
{
  ListDebug* ptr = &debug_msg;
  while (!ptr->empty)
  {
    Serial.println(ptr->bfr);
    if (ptr->next == NULL)
      break;
    ptr = ptr->next;
  }
  clear_debug_msg();
}

extern bool serial_ready;

void debug(const char* src, const char *format, ...)
{
  char bfr[128];
  va_list args;
  va_start(args, format);
  size_t size = vsprintf(bfr, format, args);
  va_end(args);
  char task_info[256];
  sprintf(task_info, "[%s]: ", src);
  strncat(task_info, bfr, size);
  if (serial_ready)
    Serial.println(task_info);
  else
    add_msg(task_info);
}