#ifndef SMART_PTR_H_INCLUDED_
#define SMART_PTR_H_INCLUDED_

//! Not complete missing assing operators
template<typename T>
class Smart_ptr
{
public:

  Smart_ptr() :
    _cnt_ptr(nullptr)
  { }

  Smart_ptr(T* obj) :
    _cnt_ptr(nullptr)
  {
    try
    {
      _cnt_ptr = new Counter_ptr(obj);
    }
    catch(...)
    {
      delete _cnt_ptr;
      Error_Handler();
      //throw;
    }
    
  }

  ~Smart_ptr()
  { 
    _cnt_ptr->deref();
  }

  Smart_ptr<T>& operator=(const T* obj)
  {
    if (_cnt_ptr)
      delete _cnt_ptr;
    
    _cnt_ptr = new Counter_ptr((T*)obj);
    return *this;
  }

  Smart_ptr<T>& operator=(T* obj)
  {
    if (_cnt_ptr)
      delete _cnt_ptr;
    
    _cnt_ptr = new Counter_ptr(obj);
    return *this;
  }

private:
  template <typename Type>
  class Counter_ptr
  {
  private:
    Type* ptr;
    unsigned count;

  public:
    Counter_ptr(Type* obj) :
      ptr(obj),
      count(1)
    { }

    ~Counter_ptr()
    { 
      deref();
    }

    void deref()
    {
      count--;
      if (count <= 0)
        delete ptr;
    }

    void ref()
    {
      count++;
    }
  };

  Counter_ptr<T>* _cnt_ptr;
};


#endif
