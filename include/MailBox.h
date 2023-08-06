#ifndef MAILBOX_H_INCLUDED_
#define MAILBOX_H_INCLUDED_

#include <vector>

#include "Message.h"
#include "debug.h"

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

// template<typename Return, typename Class, typename ...Args>
// class Callback
// {
// public:
//   typedef Return (Class::*Callable)(Args...);

//   Callback(Class& instance, Callable f_ptr) :
//     obj(instance),
//     func(f_ptr)
//   { }

//   Return call(Args...args)
//   {
//     (obj.*func)(args...);
//   }

//   void run(void)
//   {
//     call();
//   }

// private:
//   Class& obj;
//   Callable func;
// };


class Queue
{
public:

  Queue(void) :
    begin(NULL),
    end(NULL),
    q_size(0)
  { 
    debug("Queue", "Created Queue");
  }

  ~Queue(void)
  { }

  void push(const IMC::Message* ref)
  {
    debug("Queue", "Inserting %p", ref);
    q_size++;
    if (begin == NULL)
    {
      debug("Queue", "Inserting first");
      begin = new List{ref, end};
      return;
    }
    else if (end == NULL)
    {
      debug("Queue", "Inserting second");
      end = new List{ref, NULL};
      return;
    }
    debug("Queue", "Appending");
    List* _ptr = new List{ref, NULL};
    end->next = _ptr;
    end = _ptr;
  }

  unsigned size()
  { return q_size; }

  bool pop(const IMC::Message*& ref)
  {
    if (size() > 0)
    {
      debug("Queue", "Pop msg");

      List* _ptr = begin->next;
      ref = begin->elem;
      delete begin;

      begin = _ptr;
      q_size--;
      return true;
    }
    return false;
  }

private:
  struct List
  {
    const IMC::Message* elem;
    List* next;
  };

  List* begin;
  List* end;
  unsigned q_size;
};


//Change to queue of shared_ptr
typedef Queue MessageQueue;

class MailBox
{
public:
  MailBox(void);

  ~MailBox(void);

  MessageQueue& createQueue(const AbstractCallback* call);

  void subscribe(uint16_t msg_id, const AbstractCallback* call);

  void consume(void);

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
  
  std::vector<Data> receiver;
};


#endif