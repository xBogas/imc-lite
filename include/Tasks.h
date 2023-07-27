#ifndef TASKS_H_INCLUDED_
#define TASKS_H_INCLUDED_

#include <Arduino.h>

#include "debug.h"

#define DEFAULT_TIMER 500

class Tasks
{
public:
  Tasks(const char* _name);

  virtual ~Tasks();

  virtual void start() = 0;

  void stop();

  const char* getName()
  {return name;}

  void debug(const char* format, ...);

protected:
  HardwareTimer* timer;
  const char* name;
};


void add_task(Tasks* obj);
void start_tasks();
void print_debug_msg();

#endif