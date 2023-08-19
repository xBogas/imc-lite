#ifndef TASKS_H_INCLUDED_
#define TASKS_H_INCLUDED_

#include <Arduino.h>

#include "debug.h"
#include "Context.h"
#include "MailBox.h"

#define TASK

#define TASK_EXPORT(name)                             \
  AbstractTask*                                       \
  create##name##Task(const char* _name_, Context& _c_)  \
  { return new Tasks::name::Task(_c_); }


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
  AbstractTask(const char* _name, Context& c);

  virtual ~AbstractTask();

  void start();

  void stop();

  const char* getName() const
  { return name; }

protected:

  void debug(const char* format, ...);

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

  void dispatch(const IMC::Message* msg)
  {
    debug("Dispatching msg %s", msg->getName());
    container.dispatch(msg);
  }

  HardwareTimer* timer;

private:
  const char* name;
  MailBox container;
};

void print_debug_msg();

#endif