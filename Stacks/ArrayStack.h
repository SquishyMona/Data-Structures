#ifndef ARRAY_STACK
#define ARRAY_STACK

#define MAX 10
#include "StackInterface.h"

template <class T>
class ArrayStack : public StackInterface<T> {
    T stack[MAX];
    int top;

public:
    ArrayStack();
    bool isEmpty() const;
    bool push(const T& newEntry);
    bool pop();
    T peek() const;
};


#endif