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

class BasicParam {
public:
	std::string label;
	std::string value;

	/// @brief Set the value of the variable
	/// @param variable string with the value to set
	/// @return true if successful, false otherwise
	virtual bool set(const std::string& variable) = 0;

	/// @brief Serialize the variable
	/// @param bfr Buffer to serialize the variable
	/// @return Size of the serialized variable
	virtual u16 serializeVar(u8* bfr) = 0;

	/// @brief Deserialize the variable
	/// @param bfr Buffer to deserialize the variable
	/// @param bfr_len Length of the buffer
	virtual u16 deserializeVar(u8* bfr, u16& bfr_len) = 0;

	/// @brief Get the size of the serialization
	/// @return Number of bytes required to serialize the parameters
	virtual u16 getSerilizationSizeVar(void) = 0;

	/// @brief Get the size of the serialization
	/// @return Number of bytes required to serialize the parameters
	u16 getSerilizationSize(void)
	{
		u16 size = IMC::getSerializationSize(label);
		size += IMC::getSerializationSize(value);
		return size + getSerilizationSizeVar();
	}

	/// @brief Serialize the parameters
	/// @param bfr Buffer to serialize the parameters
	/// @return Size of the serialized parameters
	u16 serialize(u8* bfr)
	{
		u16 size = IMC::serialize(label, bfr);
		size += IMC::serialize(value, bfr + size);
		return size + serializeVar(bfr + size);
	}

	/// @brief Deserialize the parameters
	/// @param bfr Buffer to deserialize the parameters
	/// @param bfr_len Length of the buffer
	/// @return Size of the deserialized parameters
	u16 deserialize(u8* bfr, u16& bfr_len)
	{
		if (bfr_len < getSerilizationSize())
			return 0;

		label.clear();
		value.clear();

		u16 size = IMC::deserialize(label, bfr, bfr_len);
		size += IMC::deserialize(value, bfr + size, bfr_len);
		return size + deserializeVar(bfr + size, bfr_len);
	}
};

template <typename T>
class Param : public BasicParam {
public:
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

	u16 serializeVar(u8* bfr) override
	{
		return IMC::serialize(var, bfr);
	}

	u16 deserializeVar(u8* bfr, u16& bfr_len) override
	{
		return IMC::deserialize(var, bfr, bfr_len);
	}

	u16 getSerilizationSizeVar(void) override
	{
		if constexpr (std::is_same<T, std::string>::value)
			return IMC::getSerializationSize(var);
		else
			return sizeof(var);
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