#ifndef MAILBOX_H_INCLUDED_
#define MAILBOX_H_INCLUDED_

#include <vector>

#include "Message.h"
#include "debug.h"
#include "Context.h"

class AbstractCallback
{
public:
  AbstractCallback()
  { }

  ~AbstractCallback()
  { }

  virtual void callback(const IMC::Message*) const = 0;
};


template<typename Class, typename Topic>
class Callback : public AbstractCallback
{
public:
  typedef void (Class::*Callable)(const Topic*);

  Callback(Class& instance, Callable f_ptr) :
    obj(instance),
    func(f_ptr)
  { 
    debug("Callback", "Register Callback");
  }

  void callback(const IMC::Message* Type) const override
  {
    debug("Callback", "running callback");
    (obj.*func)((Topic*)Type);
  }

private:
  Class& obj;
  Callable func;
};


class MailBox
{
public:
  MailBox(Context&);

  ~MailBox(void);

  MessageQueue& createQueue(const AbstractCallback* call);

  void subscribe(uint16_t msg_id, const AbstractCallback* call);

  void consume(void);

  void dispatch(const IMC::Message* msg)
  { imc_bus.dispatch(msg); }
private:

  struct Data
  {
    MessageQueue container;
    const AbstractCallback* consumer;

    Data(const AbstractCallback* fp) : 
      container(),
      consumer(fp)
    { }
  };
  
  Bus& imc_bus;
  std::vector<Data> receiver;
};


#endif