#ifndef SCHEDULER_H_INCLUDED_
#define SCHEDULER_H_INCLUDED_

class AbstractTask;

class Scheduler
{
public:
  Scheduler();

  ~Scheduler();

  void addTask(AbstractTask*);

  void startTasks(void);

  unsigned size(void)
  { return vec_size; }
private:
  
  AbstractTask** vector;
  unsigned vec_size;
};


#endif