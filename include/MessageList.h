#ifndef IMC_MESSAGE_LIST_HPP_INCLUDED_
#define IMC_MESSAGE_LIST_HPP_INCLUDED_

namespace IMC
{
  //! Message list.
  template <typename Type>
  class MessageList
  {
  public:
    //typedef typename std::vector<Type*>::const_iterator const_iterator;

#define const_iterator void

    //! Default constructor.
    MessageList(void):
      m_parent(NULL)
    { }

    //! Copy constructor. Copy the contents of other to this
    //! instance.
    //! @param[in] other message.
    MessageList(const MessageList& other):
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
    {}

    //! Retrieve the number of elements in this list.
    //! @return number of elements in the list.
    size_t
    size(void) const
    {
      return 0;
    }

    //! Return an iterator referring to the first element in the
    //! list container.
    //! @return iterator.
    const_iterator
    begin(void) const
    {}

    //! Returns an iterator referring to the past-the-end element in
    //! the list container.
    //! @return iterator.
    const_iterator
    end(void) const
    {}

    //! Check if the list is empty.
    //! @return true if the list is empty.
    bool
    empty(void) const
    {
      return false;
    }

    //! Add a new element at the end of the list, after its current
    //! last element. The content of this new element is initialized
    //! to a copy of 'msg'.
    //! @param[in] msg message.
    void
    push_back(const Type& msg)
    {}

    //! Add a new element at the end of the list, after its current
    //! last element. The content of this new element is initialized
    //! to 'msg'.
    //! @param[in] msg pointer to message.
    void
    push_back(const Type* msg)
    {}

    //! Retrieve the amount of bytes needed to serialize the object.
    //! @return amount of bytes needed for serialization.
    unsigned
    getSerializationSize(void) const
    {
      return 0;
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
      return false;
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
      return 0;
    }

    //! Deserialize message from byte buffer.
    //! @param[in] bfr buffer.
    //! @param[in] bfr_len buffer size.
    //! @return amount of deserialized bytes.
    uint16_t
    deserialize(const uint8_t* bfr, uint16_t& bfr_len)
    {
      return 0;
    }

    uint16_t
    reverseDeserialize(const uint8_t* bfr, uint16_t& bfr_len)
    {
      return 0;
    }

    void
    setTimeStamp(double value)
    {}

    void
    setSource(uint16_t value)
    {}

    void
    setSourceEntity(uint8_t value)
    {}

    void
    setDestination(uint16_t value)
    {}

    void
    setDestinationEntity(uint8_t value)
    {}

  private:
    //! Parent message.
    const Message* m_parent;
    //! List of messages.
    //std::vector<Type*> m_list;

    void
    synchronizeHeader(Type* msg)
    {}

    void
    copy(const MessageList& other)
    {}
  };
}

#endif