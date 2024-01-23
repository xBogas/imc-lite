#ifndef IMC_INLINE_MESSAGE_HPP_INCLUDED_
#define IMC_INLINE_MESSAGE_HPP_INCLUDED_

// IMC headers.
#include "IMC/Constants.h"
#include "IMC/Message.h"
#include "IMC/Serialization.h"
#include "IMC/Parsers.h"

namespace IMC
{
	template <typename Type>
	class InlineMessage
	{
	public:
		InlineMessage() : 
			m_parent(NULL),
			m_msg(NULL)
		{ }

		InlineMessage(const InlineMessage& other) : 
			m_parent(other.m_parent),
			m_msg(NULL)
		{
			*this = other;
		}

		~InlineMessage()
		{
			clear();
		}

		void
		setParent(const Message *parent)
		{
			m_parent = parent;
		}

		void
		set(const Type& msg)
		{
			replace((Type* )msg.clone());
		}

		void
		set(Type* msg)
		{
			set(*msg);
		}

		void
		clear(void)
		{
			if (isNull())
			{
				delete m_msg;
				m_msg = NULL;
			}
		}

		const Type*
		get(void) const
		{
			if (isNull())
				THROW;
			return m_msg;
		}

		Type*
		get(void)
		{
			if (isNull())
				THROW;
			return m_msg;
		}

		// template <typename T>
		// inline bool
		// get(const T *&m) const
		// {
		// 	m = NULL;
		// 	if (!isNull())
		// 		m = static_cast<const T *>(m_msg);

		// 	return m != NULL;
		// }

		// template <typename T>
		// inline bool
		// get(T *&m)
		// {
		// 	m = NULL;
		// 	if (!isNull())
		// 		m = static_cast<T *>(m_msg);

		// 	return m != NULL;
		// }

		unsigned
		getSerializationSize(void) const
		{
			if (m_msg == NULL)
				return 2;

			return m_msg->getPayloadSerializationSize() + 2;
		}

		bool
		isNull(void) const
		{
			return m_msg == NULL;
		}

		Type&
		operator*(void) const
		{
			return *m_msg;
		}

		Type*
		operator->(void) const
		{
			return m_msg;
		}

		//! Assignment operator.
		InlineMessage&
		operator=(const InlineMessage& other)
		{
			clear();
			if (other.m_msg != NULL)
				m_msg = (Type*)other.m_msg->clone();
			return *this;
		}

		bool
		operator==(const InlineMessage& other) const
		{
			if (isNull()&& other.isNull())
				return true;

			if (!isNull()&& !other.isNull())
				return *(m_msg) == *(other.m_msg);
			return false;
		}

		bool
		operator!=(const InlineMessage& other) const
		{
			return !(*this == other);
		}

		uint16_t
		serialize(uint8_t* bfr) const
		{
			if (isNull())
				bfr += IMC::serialize((uint16_t)IMC_CONST_NULL_ID, bfr);
			else
			{
				bfr += IMC::serialize(m_msg->getId(), bfr);
				m_msg->serializeFields(bfr);
			}

			return getSerializationSize();
		}

		uint16_t
		deserialize(const uint8_t* bfr, uint16_t&bfr_len)
		{
			uint16_t id = 0;
			memcpy(&id, bfr, sizeof(uint16_t));

			if (id == IMC_CONST_NULL_ID)
				return 2;

			Type* m = (Type* )produce(id);
			if (m == 0)
				THROW;

			uint16_t size = m->deserializeFields(bfr + 2, bfr_len - 2);
			bfr_len -= (size + 2);

			return size + 2;
		}

		uint16_t
		reverseDeserialize(const uint8_t* bfr, uint16_t&bfr_len)
		{
			uint16_t id = 0;
			rev_memcpy(&id, bfr, sizeof(uint16_t));

			if (id == IMC_CONST_NULL_ID)
				return 2;

			Type* m = (Type* )produce(id);
			if (m == 0)
				THROW;

			uint16_t size = m->deserializeFields(bfr + 2, bfr_len - 2);
			bfr_len -= (size + 2);

			return size + 2;
		}

	private:
		//! Parent message.
		const Message* m_parent;
		//! Inlined message.
		Type* m_msg;

		//! Replace current message.
		//! @param[in] msg message.
		void
		replace(Type* msg)
		{
			clear();
			m_msg = msg;
			synchronizeHeader();
		}

		void
		synchronizeHeader(void)
		{
			if (m_parent == NULL || m_msg == NULL)
				return;

			m_msg->setTimeStamp(m_parent->getTimeStamp());
			m_msg->setSource(m_parent->getSource());
			m_msg->setSourceEntity(m_parent->getSourceEntity());
			m_msg->setDestination(m_parent->getDestination());
			m_msg->setDestinationEntity(m_parent->getDestinationEntity());
		}
	};
}

#endif