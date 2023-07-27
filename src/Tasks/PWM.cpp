#include "Tasks.h"
#include "Timer.h"


struct Task : public Tasks
{
  Task()
    : Tasks("PWM")
  {
    debug("Creating task");
    timer = setTimer(700);
    if (timer != NULL)
      debug("Timer allocated");
    else
      debug("Failed to allocate timer");
  }

  ~Task()
  { }

  void start()
  {
    debug("Enabled");
    timer->attachInterrupt(std::bind(&Task::loop, this));
    timer->refresh();
    timer->resume();
  }

  void loop()
  {
    debug("PWM Task running");
    uint32_t start = millis();
    while ((millis() - start) < 10);
    debug("Task concluded");
  }
};

static Task worker;