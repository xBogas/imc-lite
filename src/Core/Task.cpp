#include "Core/Task.h"
#include "Core/Consumers.h"
#include "Core/Interface.h"
#include "Core/Manager.h"

Task::Task(const char* name)
  : Thread(THREAD_STACK_SIZE, name)
{
	m_name = name;
	params.param = NULL;
	params.next = NULL;

	Interface.registerEntity(name);
	Manager.registerTask(this);
}

void Task::param(const char* label, void* variable)
{
	if (!label || !variable)
		return;

	void* ptr = malloc(sizeof(Param));

	params.push_back((Param*)ptr);
}

// TODO
void Task::consume(const IMC::QueryEntityParameters* msg)
{ }

// TODO
void Task::consume(const IMC::SetEntityParameters* msg)
{ }

void Task::registerConsumer(uint16_t id, Consumer consumer)
{
	Core.registerConsumer(id, consumer);
}

void Task::delay_ms(uint32_t ms)
{
	// TODO implement a delayed irq for queueing the task
	// add_callback(dispatch_thread, this, ms);
}