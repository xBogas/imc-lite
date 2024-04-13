// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CORE_PARAMETERS_H_INCLUDED_
#define CORE_PARAMETERS_H_INCLUDED_

#include "Defines.h"
#include "IMC/Serialization.h"

#include <sstream>

struct BasicParam {
	const char* label;
	std::string value;

	/// @brief Set the value of the variable
	/// @param variable string with the value to set
	/// @return true if successful, false otherwise
	virtual bool set(const std::string& variable) = 0;

	/// @brief Serialize the parameters
	/// @param bfr Buffer to serialize the parameters
	/// @return Size of the serialized parameters
	u16 serialize(u8* bfr)
	{
		//TODO: Just serializing the label for now
		if (label == NULL)
			THROW("Label is NULL");

		// Serialize const char* [size, label] with 2 bytes for size
		u16 size = strlen(label);
		memcpy(bfr, &size, sizeof(size));

		bfr += sizeof(size);
		memcpy(bfr, label, size);

		return size + sizeof(size);
	}

	/// @brief Deserialize the parameters
	/// @param bfr Buffer to deserialize the parameters
	/// @param bfr_len Length of the buffer
	/// @return Size of the deserialized parameters
	u16 deserialize(u8* bfr, u16 bfr_len)
	{
		if (bfr_len < 2)
			THROW("Buffer too short to deserialize string size");

		u16 size = 0;
		memcpy(&size, bfr, 2);

		if (bfr_len < size + 2)
			THROW("Buffer too short to deserialize string");

		memcpy((char*)label, bfr + 2, size);

		return size + 2;
	}
};

template <typename T>
struct Param : public BasicParam {
	T& var;

	Param(const char* str, T& variable)
	  : var(variable)
	{
		label = str;
		var = {};
	}

	bool set(const std::string& variable) override
	{
		value = variable;

		std::stringstream ss(variable);
		ss >> var;

		return !ss.fail();
	}

	void defaultValue(const std::string& str)
	{
		value = str;
		std::stringstream ss(str);
		ss >> var;

		if (ss.fail()) {
			var = {};
			error("Param [%s] failed conversion %s", label, str.c_str());
		}
	}
};

struct ParamList {
	struct BasicParam* param;
	struct ParamList* next;

	void push_back(BasicParam* _param)
	{
		if (!_param) {
			debug("null basic param!");
			return;
		}

		if (param == NULL) {
			param = _param;
			next = NULL;
			return;
		}

		struct ParamList* ptr = this;

		while (ptr->next)
			ptr = ptr->next;

		ptr->next = new ParamList();
		ptr->next->param = param;
		ptr->next->next = NULL;
	}

	void setParam(const char* label, const std::string& value)
	{
		struct ParamList* ptr = this;

		while (ptr) {
			if (ptr->param->label == label) {
				ptr->param->set(value);
				return;
			}

			ptr = ptr->next;
		}
	}
};

#endif // CORE_PARAMETERS_H_INCLUDED_