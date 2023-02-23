#ifndef STACK_INTERFACE_
#define STACK_INTERFACE_

template<class ItemType>
class StackInterface
{
  public:

  virtual bool isEmpty() const = 0;
  virtual bool push(const ItemType& newEntry) = 0;
  virtual bool pop() = 0;
  virtual ItemType peek() const = 0;
  virtual ~StackInterface() {}
};
#endif