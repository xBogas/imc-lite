#include "Tasks.h"
#include "Timer.h"

AbstractTask::AbstractTask(const char* _name, Context& c): 
  timer(NULL),
  name(_name),
  container(c) 
{ }

AbstractTask::~AbstractTask()
{
  debug("Ending task");
}

void AbstractTask::start()
{
  debug("Requesting task to start");
  setup();
  timer->attachInterrupt(std::bind(&AbstractTask::loop, this));
  timer->refresh();
  timer->resume();
}

void AbstractTask::stop()
{
  debug("Stopping task ");
}

extern bool serial_ready;

void AbstractTask::debug(const char* format, ...)
{
  char bfr[128];
  va_list args;
  va_start(args, format);
  size_t size = vsprintf(bfr, format, args);
  va_end(args);
  char task_info[256];
  sprintf(task_info, "[%s]: ", name);
  strncat(task_info, bfr, size);
  if (serial_ready)
    Serial.println(task_info);
  else
    add_msg(task_info);
}