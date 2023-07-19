#ifndef TASKS_H_INCLUDED_
#define TASKS_H_INCLUDED_

#include <Arduino.h>

#include <string>

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

  virtual void run() = 0;
protected:
  HardwareTimer* timer;
  const char* name;
};

void debug(const char* src, const char* format, ...);

void add_task(Tasks* obj);
void start_tasks();

void print_debug_msg();

#endif