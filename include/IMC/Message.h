// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef IMC_MESSAGE_H_INCLUDED_
#define IMC_MESSAGE_H_INCLUDED_

// IMC headers.
#include "IMC/Header.h"

namespace IMC {
class Message {
public:
	//! Default constructor.
	Message(void);

	//! Default destructor.
	virtual ~Message(void);

	//! Retrieve a copy of the message.
	//! @return message copy.
	virtual Message* clone(void) const = 0;

	//! Reset message's fields.
	virtual void clear(void) = 0;

	//! Validate the message's contents.
	//! @return negative value in case of a valid message or a
	//! positive value indicating the position of the invalid
	//! message field.
	virtual int validate(void) const = 0;

	//! Retrieve message's name.
	//! @return message's name.
	virtual const char* getName(void) const = 0;

	//! Retrieve message's identification number.
	//! @return message's identification number.
	virtual uint16_t getId(void) const = 0;

	//! Set the message's time stamp to a given value.
	//! @param ts time stamp.
	//! @return time stamp.
	double setTimeStamp(double ts)
	{
		m_header.timestamp = ts;
		setTimeStampNested(ts);
		return m_header.timestamp;
	}

	//! Set the message's time stamp to current time.
	//! @return time stamp.
	double setTimeStamp(void)
	{
		return setTimeStamp(-1.0f);
	}

	//! Retrieve the message's time stamp.
	//! @return time stamp.
	double getTimeStamp(void) const
	{
		return m_header.timestamp;
	}

	//! Get message's source.
	//! @return message's source.
	uint16_t getSource(void) const
	{
		return m_header.src;
	}

	//! Set message's source.
	//! @param src message's source.
	void setSource(uint16_t src)
	{
		m_header.src = src;
		setSourceNested(src);
	}

	//! Get message's source entity.
	//! @return message's source entity.
	uint8_t getSourceEntity(void) const
	{
		return m_header.src_ent;
	}

	//! Set message's source entity.
	//! @param src_ent message's source entity.
	void setSourceEntity(uint8_t src_ent)
	{
		m_header.src_ent = src_ent;
		setSourceEntityNested(src_ent);
	}

	//! Retrieve message's destination.
	//! @return message's destination.
	uint16_t getDestination(void) const
	{
		return m_header.dst;
	}

	//! Set message's destination.
	//! @param dst message's destination.
	void setDestination(uint16_t dst)
	{
		m_header.dst = dst;
		setDestinationNested(dst);
	}

	//! Get message's destination entity.
	//! @return message's destination entity.
	uint8_t getDestinationEntity(void) const
	{
		return m_header.dst_ent;
	}

	//! Set message destination entity.
	//! @param dst_ent message's destination entity.
	void setDestinationEntity(uint8_t dst_ent)
	{
		m_header.dst_ent = dst_ent;
		setDestinationEntityNested(dst_ent);
	}

	//! Retrieve message's sub identification number (id field).
	//! @return message's sub identification number.
	virtual uint16_t getSubId(void) const
	{
		return 0;
	}

	//! Set message's sub identification number (id field).
	//! @param subid sub identification number.
	virtual void setSubId(uint16_t subid)
	{
		(void)subid;
	}

	//! Get the field 'value' on messages containing a field with
	//! such an abbreviation with floating point type.
	//! @return value of field 'value', 0.0 otherwise.
	virtual fp64_t getValueFP(void) const
	{
		return 0.0;
	}

	//! Set the field 'value' on messages containing a field with
	//! such an abbreviation with floating point type.
	//! @param val desired value.
	virtual void setValueFP(fp64_t val)
	{
		(void)val;
	}

	//! Compute the amount of bytes required to properly serialize
	//! the message.
	//! @return amount of bytes required to serialize the message.
	unsigned getSerializationSize(void) const
	{
		return IMC_CONST_HEADER_SIZE + IMC_CONST_FOOTER_SIZE +
			   getPayloadSerializationSize();
	}

	//! Compute the amount of bytes required to properly serialize
	//! the payload of the message.
	//! @return amount of bytes required to serialize message's payload.
	unsigned getPayloadSerializationSize(void) const
	{
		return getFixedSerializationSize() + getVariableSerializationSize();
	}

	//! Get the fixed amount of bytes required to properly serialize
	//! this message (variable length fields are not included).
	//! @return amount of variable bytes required to serialize the message.
	virtual unsigned getFixedSerializationSize(void) const
	{
		return 0;
	}

	//! Get the variable amount of bytes required to properly serialize
	//! this message (only the variable fields are included).
	//! @return amount of variable bytes required to serialize the message.
	virtual unsigned getVariableSerializationSize(void) const
	{
		return 0;
	}

	virtual uint8_t* serializeFields(uint8_t* bfr) const = 0;

	//! Deserialize message fields from a packet.
	//! @param bfr stream of bytes (packet)
	//! @param len length of the byte stream.
	//! @return number of bytes processed.
	virtual uint16_t deserializeFields(const uint8_t* bfr, uint16_t len) = 0;

	//! Deserialize message fields from a packet, swapping the byte order.
	//! @param bfr stream of bytes (packet)
	//! @param len length of the byte stream.
	//! @return number of bytes processed.
	virtual uint16_t reverseDeserializeFields(const uint8_t* bfr,
											  uint16_t len) = 0;

	//! Compare messages for equality.
	//! @param[in] other message to compare.
	//! @return true if messages are equal, false otherwise.
	bool operator==(const Message& other) const
	{
		if (getId() != other.getId())
			return false;

		if (getTimeStamp() != other.getTimeStamp())
			return false;

		if (getSource() != other.getSource())
			return false;

		if (getSourceEntity() != other.getSourceEntity())
			return false;

		if (getDestination() != other.getDestination())
			return false;

		if (getDestinationEntity() != other.getDestinationEntity())
			return false;

		return fieldsEqual(other);
	}

	//! Compare messages for inequality.
	//! @param[in] other message to compare.
	//! @return true if messages are not equal, false otherwise.
	bool operator!=(const Message& other) const
	{
		return !(*this == other);
	}

protected:
	//! Message header.
	Header m_header;

	//! Set the timestamp of nested messages.
	//! @param[in] value timestamp.
	virtual void setTimeStampNested(double value)
	{
		(void)value;
	}

	//! Set the source address of nested messages.
	//! @param[in] value source address.
	virtual void setSourceNested(uint16_t value)
	{
		(void)value;
	}

	//! Set the source entity of nested messages.
	//! @param[in] value source entity.
	virtual void setSourceEntityNested(uint8_t value)
	{
		(void)value;
	}

	//! Set the destination address of nested messages.
	//! @param[in] value destination address.
	virtual void setDestinationNested(uint16_t value)
	{
		(void)value;
	}

	//! Set the destination entity of nested messages.
	//! @param[in] value destination entity.
	virtual void setDestinationEntityNested(uint8_t value)
	{
		(void)value;
	}

	//! Compare fields for equality.
	//! @param[in] other message to compare.
	//! @return true if fields are equal, false otherwise.
	virtual bool fieldsEqual(const Message& other) const
	{
		(void)other;
		return true;
	}
};
} // namespace IMC

#endif