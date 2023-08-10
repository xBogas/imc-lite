#include "Scheduler.h"
#include "Tasks.h"
#include <cstdlib>

Scheduler::Scheduler() :
  vector(NULL),
  vec_size(0)
{ }

Scheduler::~Scheduler()
{ }

void Scheduler::addTask(AbstractTask* task)
{
  debug("Scheduler", "Adding Task %s", task->getName());

  vec_size++;
  vector = (AbstractTask**)realloc(vector ,vec_size*sizeof(AbstractTask*));
  if (vector == NULL)
    Error_Handler();

  vector[vec_size-1] = task;
}

void Scheduler::startTasks(void)
{
  debug("Scheduler" , "Starting tasks");
  debug("Scheduler" , "Vector has %d tasks", size());
  
  for (size_t i = 0; i < size(); i++)
  {
    vector[i]->start();
  }
}