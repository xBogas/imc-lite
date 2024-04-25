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

/// @brief Basic parameter class
class BasicParam {
public:
	/// @brief Label of the parameter
	std::string label;
	/// @brief String value of the parameter
	std::string value;

	/// @brief Set the value of the variable
	/// @param variable string with the value to set
	/// @return true if successful, false otherwise
	virtual bool set(const std::string& variable) = 0;

	/// @brief Check if address is the param variable
	/// @param ptr Address to check
	/// @return true if the address is the variable, false otherwise
	virtual bool isVar(void* ptr) = 0;

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

/// @brief Parameter class
template <typename T>
class Param : public BasicParam {
public:
	/// @brief Reference to the variable
	T& var;
	/// @brief Flag to check if the parameter has changed
	bool changed;

	/// @brief Constructor
	/// @param str Label of the parameter
	/// @param variable Reference to the variable
	Param(const char* str, T& variable)
	  : var(variable)
	{
		label = str;
		var = {};
		changed = false;
	}

	/// @brief Set the value of the variable
	/// @param variable string with the value to set
	/// @return true if successful, false otherwise
	bool set(const std::string& variable) override
	{
		value = variable;

		std::stringstream ss(variable);
		ss >> var;

		if (!ss.fail())
			changed = true;

		return !ss.fail();
	}

	/// @brief Check if address is the param variable
	/// @param ptr Address to check
	/// @return true if the address is the variable, false otherwise
	bool isVar(void* ptr) override
	{
		return ptr == &var;
	}

	/// @brief Check if the parameter has changed
	/// @return true if the parameter has changed, false otherwise
	bool hasChanged(void)
	{
		if (changed) {
			changed = false;
			return true;
		}

		return false;
	}

	/// @brief Set the default value of the parameter
	/// @param str Default value
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

	/// @brief Serialize the variable
	/// @param bfr Buffer to serialize the variable
	/// @return Size of the serialized variable
	u16 serializeVar(u8* bfr) override
	{
		return IMC::serialize(var, bfr);
	}

	/// @brief Deserialize the variable
	/// @param bfr Buffer to deserialize the variable
	/// @param bfr_len Length of the buffer
	u16 deserializeVar(u8* bfr, u16& bfr_len) override
	{
		return IMC::deserialize(var, bfr, bfr_len);
	}

	/// @brief Get the size of the serialization
	/// @return Number of bytes required to serialize the parameters
	u16 getSerilizationSizeVar(void) override
	{
		if constexpr (std::is_same<T, std::string>::value)
			return IMC::getSerializationSize(var);
		else
			return sizeof(var);
	}
};

/// @brief Parameter List
struct ParamList {
	struct BasicParam* param;
	struct ParamList* next;

	/// @brief Push a new parameter to the list
	/// @param _param Pointer to the parameter
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
		ptr->next->param = _param;
		ptr->next->next = NULL;
	}

	/// @brief Set the value of a parameter
	/// @param label Label of the parameter
	/// @param value Value to set in string format
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

	BasicParam* findParam(void* ptr)
	{
		struct ParamList* iter = this;
		while (iter) {
			if (iter->param->isVar(ptr))
				return iter->param;

			iter = iter->next;
		}

		return NULL;
	}
};

#endif // CORE_PARAMETERS_H_INCLUDED_