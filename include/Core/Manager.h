// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CORE_MANAGER_H_INCLUDED_
#define CORE_MANAGER_H_INCLUDED_

#include "Concurrency/Thread.h"
#include "Core/Consumers.h"
#include "Core/Task.h"
#include "Structures/List.h"
#include "System/Flash.h"

#include <map>

// Load memory Parameters
class TaskManager {
	struct MemParam {
		u32 len;  // Length of the task parameters
		u32 addr; // Address of the task parameters
	};

	typedef std::map<std::string, MemParam> MemParamMap;

public:
	TaskManager(void)
	  : flash_addr(FLASH_USER_ADDR),
		flash_base(FLASH_USER_ADDR),
		tsk_list(NULL)
	{
		tsk_list = list_create();
		ASSERT_ERR(tsk_list != NULL, "Failed to create task list!");
	}

	~TaskManager(void)
	{ }

	/// @brief Register a task to the task manager
	/// @param tsk Task to register
	void registerTask(Task* tsk)
	{
		list_append(tsk_list, tsk);
		debug("Task %s registered", tsk->getName());
	}

	/// @brief Setup tasks from flash memory
	void setupTasks(void)
	{
		// Key -> [task label, MemParam]
		MemParamMap mem_params;
		u32 _addr = flash_base;

		do {
			_addr = getMemParams(mem_params, _addr);
		} while (_addr != 0);

		Task* tsk = (Task*)list_pop(tsk_list);
		while (tsk != NULL) {

			// debug("Setting up task %s", tsk->getName());
			std::string label = tsk->getName();
			auto it = mem_params.find(label);
			if (it != mem_params.end())
				loadTaskParams(tsk, &it->second);

			tsk = (Task*)list_pop(tsk_list);
		}
	}

	/**
	 * [11][len_1][task name][len_2][task parameters][checksum][11]...[0xFF]
	 * 11 - Start symbol
	 * len - Length of the task name or parameters
	 * task name - Name of the task
	 * len - Length of the task parameters
	 * task parameters - Parameters of the task
	 * checksum - CRC16 checksum of every byte from start to end of the task
	 * parameters
	 *
	 * 0xFF - End symbol (make shure is not 11)
	 */

	/// @brief Save all task parameters to flash memory
	void saveAllParams(void)
	{
		// flash_erase_section(FLASH_USER_SECT);
		u32 flash_addr = flash_base;

		lst_node* node = tsk_list->head;
		while (node != NULL) {

			Task* tsk = (Task*)node->elem;
			flash_addr += saveTaskParams(tsk, flash_addr);
			node = node->next;
		}

		u8 end = 0xFF; // Make shure symbol is not 11
		flash_write(flash_addr, &end, 1);
	}

private:
	/// @brief Get memory parameters from flash memory
	/// @param params Task parameters map
	/// @param _ptr Flash memory address pointer
	/// @return Next flash memory address pointer
	u32 getMemParams(MemParamMap& params, u32 _ptr)
	{
		// debug("Reading memory parameters at %d", _ptr);
		u32 start = _ptr;
		u8 symbol;
		flash_read(_ptr, &symbol, sizeof(symbol));
		if (symbol != 11) {
			// debug("Invalid start symbol: %d", symbol);
			return 0;
		}
		_ptr += sizeof(symbol);

		// Read task name length
		u16 len = 0;
		flash_read(_ptr, &len, sizeof(len));
		if (len > 64) {
			// debug("Task name too long: %d", len);
			return 0;
		}
		_ptr += sizeof(len);
		// debug("Task name length: %d", len);

		// Read task name
		std::string tsk_label;
		for (size_t i = 0; i < len; i++) {
			char c;
			flash_read(_ptr + i, &c, sizeof(c));
			tsk_label.push_back(c);
		}
		// debug("Task name: %s", tsk_label.c_str());
		_ptr += len;

		// Read parameters length
		flash_read(_ptr, &len, sizeof(len));
		// debug("Task parameters length: %d", len);
		_ptr += sizeof(len);
		u32 param_start = _ptr;

		// Move pointer to end of task parameters
		_ptr += len;
		u16 checksum;
		flash_read(_ptr, &checksum, sizeof(checksum));

		// Checksum validation
		u16 crc = IMC::compute_CRC16((u8*)start, _ptr - start);
		if (crc != checksum) {
			// debug("Param integrity failed: %d != %d", crc, checksum);
			return 0;
		}
		_ptr += sizeof(checksum);

		// Add params to map
		MemParam& p = params[tsk_label];
		p.len = len;
		p.addr = param_start;

		return _ptr;
	}

	/// @brief Load task parameters from flash memory
	/// @param tsk Task to load
	/// @param p Memory parameters
	/// @return True if successful
	bool loadTaskParams(Task* tsk, MemParam* p)
	{
		u8 bfr[1024];
		flash_read(p->addr, bfr, p->len);
		return tsk->loadParams(bfr, p->len);
	}

	/// @brief Save task parameters to flash memory
	/// @param tsk Task to save
	/// @param _ptr Flash memory address pointer
	/// @return Number of bytes written
	u32 saveTaskParams(Task* tsk, u32 _ptr)
	{
		// debug("Saving task %s at %d", tsk->getName(), _ptr);
		u32 start = _ptr;
		u8 symbol = 11;
		_ptr = flash_write(_ptr, &symbol, 1);

		const char* label = tsk->getName();
		u16 len = strlen(label);

		_ptr = flash_write(_ptr, &len, sizeof(len));
		_ptr = flash_write(_ptr, label, len);

		u8 bfr[1024];
		len = tsk->saveParams(bfr, 1024);

		// debug("Task parameters length: %d", len);
		_ptr = flash_write(_ptr, &len, sizeof(len));
		_ptr = flash_write(_ptr, bfr, len);

		u16 crc = IMC::compute_CRC16((u8*)start, _ptr - start);
		_ptr = flash_write(_ptr, &crc, sizeof(crc));

		// debug("Task crc %d saved", crc);
		return _ptr - start;
	}

	// Current Flash memory address
	u32 flash_addr;
	// Base Flash memory address
	const u32 flash_base;
	// Task list
	struct list* tsk_list;
};

extern TaskManager Manager;

#endif // CORE_MANAGER_H_INCLUDED_