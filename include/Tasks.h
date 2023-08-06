#ifndef TASKS_H_INCLUDED_
#define TASKS_H_INCLUDED_

#include <Arduino.h>

#include "debug.h"
#include "MailBox.h"
#include "Bus.h"

#define DEFAULT_TIMER 500

/**
 * How to do the BUS subscribe - dispatch message 
 * Task will subscrive -> imc msg
 * AbstractTask will send a _ptr_ to a buffer to BUS
 * AbstractTask will also save a callback
 * when msg is dipatch BUS will fill that _ptr_ with the msg
 * loop will runConsumers
*/

class AbstractTask
{
public:
  AbstractTask(const char* _name);

  virtual ~AbstractTask();

  void start();

  void stop();

  const char* getName()
  { return name; }

  void debug(const char* format, ...);

protected:

  template<typename Msg, typename Obj>
  void subscribe(Obj& task, void (Obj::*consumer)(const Msg*) = &Obj::consume)
  {
    if (consumer == NULL)
      debug("ERR");
    
    container.subscribe(Msg::getIdStatic(), new Callback(task, consumer));
  }

  virtual void setup(void) = 0;

  virtual void loop(void) = 0;

  void runConsumers(void)
  { container.consume(); }

  HardwareTimer* timer;
  const char* name;
  MailBox container;
};

void add_task(AbstractTask* obj);
void start_tasks();
void print_debug_msg();

#endif