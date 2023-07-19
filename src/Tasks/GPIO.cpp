#include "Tasks.h"
#include "Timer.h"


struct Task : public Tasks
{
  Task()
    : Tasks("GPIO")
  {
    debug("Creating task");
    timer = setTimer(500);
    if (timer != NULL)
      debug("Timer allocated");
    else
      debug("Failed to allocate timer");
  }

  ~Task()
  { }

  void start() override
  {
    debug("Enabled");
    timer->attachInterrupt(std::bind(&Task::run, this));
    timer->refresh();
    timer->resume();
  }

  void run() override
  {
    debug("Task running");
    uint32_t start = millis();
    while ((millis() - start) < 50);
    debug("Task concluded");
  }
};

//static Task worker;