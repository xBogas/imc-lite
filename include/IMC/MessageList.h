#ifndef IMC_MESSAGE_LIST_HPP_INCLUDED_
#define IMC_MESSAGE_LIST_HPP_INCLUDED_

#include <vector>
#include <Serialization.h>
#include <Parsers.h>

namespace IMC
{
	//! Message list.
	template <typename Type>
	class MessageList
	{
	public:
		typedef typename std::vector<Type*>::const_iterator const_iterator;

		//! Default constructor.
		MessageList(void) : 
			m_parent(NULL)
		{ }

		//! Copy constructor. Copy the contents of other to this
		//! instance.
		//! @param[in] other message.
		MessageList(const MessageList& other) :
			m_parent(NULL)
		{
			copy(other);
		}

		//! Default destructor.
		~MessageList(void)
		{
			clear();
		}

		//! Set the parent of the message list. This object will be used
		//! to synchronize the header fields of the messages in the
		//! list.
		//! @param[in] parent message list parent.
		void
		setParent(const Message* parent)
		{
			m_parent = parent;
		}

		//! All the elements of the list are deleted: their destructors
		//! are called, and then they are removed from the vector
		//! container, leaving the container with a size of 0.
		void
		clear(void)
		{
			for (unsigned i = 0; i < m_list.size(); i++)
			{
				if (m_list[i] != NULL)
				{
					delete m_list[i];
					m_list[i] = NULL;
				}
			}
			m_list.clear();
		}

		//! Retrieve the number of elements in this list.
		//! @return number of elements in the list.
		size_t
		size(void) const
		{
			return m_list.size();
		}

		//! Return an iterator referring to the first element in the
		//! list container.
		//! @return iterator.
		const_iterator
		begin(void) const
		{
			return m_list.begin();
		}

		//! Returns an iterator referring to the past-the-end element in
		//! the list container.
		//! @return iterator.
		const_iterator
		end(void) const
		{
			return m_list.end();
		}

		//! Check if the list is empty.
		//! @return true if the list is empty.
		bool
		empty(void) const
		{
			return m_list.empty();
		}

		//! Add a new element at the end of the list, after its current
		//! last element. The content of this new element is initialized
		//! to a copy of 'msg'.
		//! @param[in] msg message.
		void
		push_back(const Type& msg)
		{
			Type* p_msg = (Type* )msg.clone();

			if (m_parent != NULL)
				synchronizeHeader();

			m_list.push_back(p_msg);
		}

		//! Add a new element at the end of the list, after its current
		//! last element. The content of this new element is initialized
		//! to 'msg'.
		//! @param[in] msg pointer to message.
		void
		push_back(const Type* msg)
		{
			if (msg == NULL)
			{
				m_list.push_back(NULL);
				return;
			}

			push_back(*msg);
		}

		//! Retrieve the amount of bytes needed to serialize the object.
		//! @return amount of bytes needed for serialization.
		unsigned
		getSerializationSize(void) const
		{
			int nbytes = 2;

			for (unsigned i = 0; i < m_list.size(); ++i)
			{
				nbytes += 2;

				if (m_list[i] != NULL)
					nbytes += m_list[i]->getPayloadSerializationSize();
			}

			return nbytes;
		}

		//! Assignment operator. Replace the contents of 'this' instance
		//! with the contents of 'other'.
		//! @param[in] other message.
		//! @return reference to this object.
		MessageList&
		operator=(const MessageList& other)
		{
			copy(other);
			return *this;
		}

		//! Compare two instances for equality.
		//! @param[in] other object to compare.
		//! @return true if objects are equal, false otherwise.
		bool
		operator==(const MessageList& other) const
		{
			if (size() != other.size())
				return false;

			for (unsigned i = 0; i < m_list.size(); ++i)
			{
				if ((m_list[i] == NULL) && (other.m_list[i] == NULL))
					continue;

				if ((m_list[i] != NULL) && (other.m_list[i] != NULL))
				{
					if (*m_list[i] != *other.m_list[i])
						return false;
				}
				else
					return false;
			}

			return true;
		}

		//! Compare two instances for inequality.
		//! @param[in] other object to compare.
		//! @return true if objects are not equal, false otherwise.
		inline bool
		operator!=(const MessageList& other) const
		{
			return !(*this == other);
		}

		//! Serialize instance.
		//! @param[in] bfr buffer.
		//! @return amount of bytes used.
		uint16_t
		serialize(uint8_t* bfr) const
		{
			uint16_t n_msg = m_list.size();
			bfr += IMC::serialize(n_msg, bfr);

			for (unsigned i = 0; i < m_list.size(); ++i)
			{
				if (m_list[i] == NULL)
					bfr += IMC::serialize((uint16_t)DUNE_IMC_CONST_NULL_ID, bfr);
				else
				{
					bfr += IMC::serialize(m_list[i]->getId(), bfr);
					bfr = m_list[i]->serializeFields(bfr);
				}
			}

			return getSerializationSize();
		}

		//! Deserialize message from byte buffer.
		//! @param[in] bfr buffer.
		//! @param[in] bfr_len buffer size.
		//! @return amount of deserialized bytes.
		uint16_t
		deserialize(const uint8_t* bfr, uint16_t& bfr_len)
		{
			const uint8_t* ptr = bfr;

			uint16_t message_count = 0;
			memcpy(&message_count, ptr, sizeof(uint16_t));
			ptr += sizeof(uint16_t);

			// Deserialize messages.
			for (uint16_t i = 0; i < message_count; ++i)
			{
				uint16_t id = 0;
				memcpy(&id, ptr, sizeof(uint16_t));
				ptr += sizeof(uint16_t);

				if (id == DUNE_IMC_CONST_NULL_ID)
				{
					m_list.push_back(NULL);
					continue;
				}

				Type* msg = (Type* )produce(id);

				if (msg == NULL)
					THROW;

				uint16_t size = msg->deserializeFields(ptr, bfr_len - (ptr - bfr));
				m_list.push_back(msg);
				ptr += size;
			}

			bfr_len -= ptr - bfr;
			return ptr - bfr;
		}

		uint16_t
		reverseDeserialize(const uint8_t* bfr, uint16_t& bfr_len)
		{
			const uint8_t* ptr = bfr;

			uint16_t message_count = 0;
			rev_memcpy(&message_count, ptr, sizeof(uint16_t));
			ptr += sizeof(uint16_t);

			for (uint16_t i = 0; i < message_count; ++i)
			{
				uint16_t id = 0;
				rev_memcpy(&id, ptr, sizeof(uint16_t));
				ptr += sizeof(uint16_t);

				if (id == DUNE_IMC_CONST_NULL_ID)
				{
					m_list.push_back(NULL);
					continue;
				}

				Type* msg = (Type*)produce(id);

				if (msg == NULL)
					THROW;

				uint16_t size = msg->reverseDeserializeFields(ptr, bfr_len - (ptr - bfr));
				m_list.push_back(msg);
				ptr += size;
			}

			bfr_len -= ptr - bfr;
			return ptr - bfr;
		}

		void
		setTimeStamp(double value)
		{
			if (m_parent == NULL)
				return;

			for (unsigned i = 0; i < m_list.size(); ++i)
			{
				if (m_list[i] != NULL)
					m_list[i]->setTimeStamp(value);
			}
		}

		void
		setSource(uint16_t value)
		{
			if (m_parent == NULL)
				return;

			for (unsigned i = 0; i < m_list.size(); ++i)
			{
				if (m_list[i] != NULL)
					m_list[i]->setSource(value);
			}
		}

		void
		setSourceEntity(uint8_t value)
		{
			if (m_parent == NULL)
				return;

			for (unsigned i = 0; i < m_list.size(); ++i)
			{
				if (m_list[i] != NULL)
					m_list[i]->setSourceEntity(value);
			}
		}

		void
		setDestination(uint16_t value)
		{
			if (m_parent == NULL)
				return;

			for (unsigned i = 0; i < m_list.size(); ++i)
			{
				if (m_list[i] != NULL)
					m_list[i]->setDestination(value);
			}
		}

		void
		setDestinationEntity(uint8_t value)
		{
			if (m_parent == NULL)
				return;

			for (unsigned i = 0; i < m_list.size(); ++i)
			{
				if (m_list[i] != NULL)
					m_list[i]->setDestinationEntity(value);
			}
		}

	private:
		//! Parent message.
		const Message* m_parent;
		//! List of messages.
		std::vector<Type*> m_list;

		void
		synchronizeHeader(Type* msg)
		{
			if (msg == NULL)
				return;

			msg->setTimeStamp(m_parent->getTimeStamp());
			msg->setSource(m_parent->getSource());
			msg->setSourceEntity(m_parent->getSourceEntity());
			msg->setDestination(m_parent->getDestination());
			msg->setDestinationEntity(m_parent->getDestinationEntity());
		}

		void
		copy(const MessageList& other)
		{
			m_parent = other.m_parent;

			clear();

			for (unsigned i = 0; i < other.m_list.size(); ++i)
			{
				if (other.m_list[i] == NULL)
					m_list.push_back(NULL);
				else
					m_list.push_back((Type*)other.m_list[i]->clone());
			}
		}
	};
}

#endif