#ifndef CORE_TASK_H_INCLUDED_
#define CORE_TASK_H_INCLUDED_

#include <functional>

#include <IMC.h>
#include "Thread.h"

class Task : public Thread {
public:
	Task(const char* name);

	virtual ~Task(void)
	{ }

	// Add a parameter to the task
	void param(const char* label, void* variable);

	void consume(const IMC::QueryEntityParameters* msg);

	void consume(const IMC::SetEntityParameters* msg);

	typedef std::function<void(const IMC::Message*)> Consumer;

	template <typename Msg, typename Obj>
	void subscribe(Obj& task, void (Obj::*consumer)(const Msg*) = &Obj::consume)
	{
		Task::Consumer callable = [&task, &consumer](const IMC::Message* msg) {
			(task.*consumer)((Msg*)msg);
		};

		registerConsumer(Msg::getIdStatic(), callable);
	}

	// Register a consumer for message id
	void registerConsumer(uint16_t id, Consumer consumer);

	// void setPeriod(uint32_t period);
	// void setDeadline(uint32_t deadline);
	// void setPriority(uint8_t priority);

	void run(void)
	{
		setup();

		while (isRunning())
			loop();
	}

	virtual void setup(void) = 0;

	virtual void loop(void) = 0;

	// Add a non-polling delay
	void delay_ms(uint32_t ms);

private:
	struct Param {
		const char* label;
		void* variable;
	};

	struct ParamList {
		struct Param* param;
		struct ParamList* next;

		void push_back(Param* param)
		{
			if (!param)
				return;

			struct ParamList* ptr = this;

			while (ptr->next)
				ptr = ptr->next;

			ptr->next = (struct ParamList*)malloc(sizeof(struct ParamList));
			ptr->next->param = param;
			ptr->next->next = NULL;
		}
	};

	//! Task name
	const char* m_name;
	//! Task Parameters
	struct ParamList params;
};

#endif // CORE_TASK_H_INCLUDED_