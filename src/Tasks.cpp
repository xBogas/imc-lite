#include "Tasks.h"
#include "Timer.h"

struct ElemTasks
{
  Tasks* index;
  ElemTasks* next;
};

static struct LTasks_t
{
  ElemTasks* first = NULL;
  uint16_t size = 0;
} list_tasks;

struct ListDebug
{
  char bfr[256];
  ListDebug* next;
  bool empty;
};

static ListDebug debug_msg = {
  .bfr = {0},
  .next = NULL,
  .empty = true
};


static void clear_debug_msg()
{
  memset(debug_msg.bfr, 0, 256);
  debug_msg.empty = true;
  ListDebug* ptr = debug_msg.next;
  debug_msg.next = NULL;
  
  ListDebug* _prev;
  while (ptr != NULL)
  {
    _prev = ptr;
    ptr = ptr->next;
    delete _prev;
  }
}

extern bool serial_ready;

static void add_msg(const char* bfr)
{
  ListDebug* ptr = &debug_msg;
  while (!ptr->empty)
  {
    if (ptr->next == NULL)
      ptr->next = new ListDebug{ {0}, NULL, true};
    ptr = ptr->next;
  }
  strcpy(ptr->bfr, bfr);
  ptr->empty = false;
}

void print_debug_msg()
{
  ListDebug* ptr = &debug_msg;
  while (!ptr->empty)
  {
    Serial.println(ptr->bfr);
    if (ptr->next == NULL)
      break;
    ptr = ptr->next;
  }
  clear_debug_msg();
}

void add_task(Tasks *obj)
{
  obj->debug("Adding Task");
  ElemTasks* ptr =  list_tasks.first->next;
  ElemTasks* new_obj = new ElemTasks{obj, ptr};
  list_tasks.first = new_obj;
  list_tasks.size++;
}

void start_tasks()
{
  uint16_t number = list_tasks.size;
  ElemTasks* ptr = list_tasks.first;
  while (number--)
  {
    ptr->index->debug("Requesting task to start");
    ptr->index->start();
    ptr = ptr->next;
  }
}

Tasks::Tasks(const char* _name): name(_name)
{
  debug("Creating abstract task ");
  add_task(this);
}

Tasks::~Tasks()
{
  debug("Ending task");
}

void Tasks::stop()
{
  debug("Stopping task ");
}

void Tasks::debug(const char* format, ...)
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

void debug(const char* src, const char *format, ...)
{
  char bfr[128];
  va_list args;
  va_start(args, format);
  size_t size = vsprintf(bfr, format, args);
  va_end(args);
  char task_info[256];
  sprintf(task_info, "[%s]: ", src);
  strncat(task_info, bfr, size);
  if (serial_ready)
    Serial.println(task_info);
  else
    add_msg(task_info);
}