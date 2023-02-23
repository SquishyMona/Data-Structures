#ifndef LINKED_LIST_STACK
#define LINKED_LIST_STACK
#include "StackInterface.h"
#include "Node.h"

template <class T>
class LLStack: public StackInterface<T> {
    Node<T>* root;                                 // Underlying data structure

public:
    LLStack();
    LLStack(T);
    bool isEmpty() const = 0;
    bool push(const T& newEntry) = 0;
    bool pop() = 0;
    T peek() const = 0;
    ~LLStack();
};

#include "LLStack.cpp"

#endif