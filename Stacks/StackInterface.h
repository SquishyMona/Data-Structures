#ifndef STACK_INTERFACE_
#define STACK_INTERFACE_

template<class ItemType>
class StackInterface
{
  public:

  /* 
  * checks if the stack is empty.
  * Returns true if empty, false otherwise
  */
  virtual bool isEmpty() const = 0;
  
  /*
  * pushes a new element at the top of stack
  */
  virtual bool push(const ItemType& newEntry) = 0;

  /*
  * removes the element at the top of stack
  */
  virtual bool pop() = 0;

  /*
  * returns the elements at the top of stack
  * no changes made to the data structures
  */
  virtual ItemType peek() const = 0;
  
  virtual ~StackInterface() {}
};
#endif