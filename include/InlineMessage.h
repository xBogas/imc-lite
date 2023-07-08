#ifndef IMC_INLINE_MESSAGE_HPP_INCLUDED_
#define IMC_INLINE_MESSAGE_HPP_INCLUDED_

namespace IMC
{
  template<typename Type>
  class InlineMessage
  {
  public:

    InlineMessage()
    {}

    InlineMessage(const InlineMessage& other)
    {
      *this = other;
    }

    ~InlineMessage()
    {
      clear();
    }

    void
    setParent(const Message* parent)
    {}

    void
    set(const Type& msg)
    {}

    void
    set(Type* msg)
    {}
      
    void
    clear(void)
    {}

    const Type*
    get(void) const
    {
      return m_msg;
    }

    Type*
    get(void)
    {
      return m_msg;
    }

    template <typename T>
    inline bool
    get(const T*& m) const
    {
      return false;
    }

    template <typename T>
    inline bool
    get(T*& m)
    {
      return false;
    }

    unsigned
    getSerializationSize(void) const
    {
      return 0;
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
      return *this;
    }

    bool
    operator==(const InlineMessage& other) const
    {
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
      return 0;
    }

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

  private:
    //! Parent message.
    const Message* m_parent;
    //! Inlined message.
    Type* m_msg;

    //! Replace current message.
    //! @param[in] msg message.
    void
    replace(Type* msg)
    {}

    void
    synchronizeHeader(void)
    {}
  };

}

#endif