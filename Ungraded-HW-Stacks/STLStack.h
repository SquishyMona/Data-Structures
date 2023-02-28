#ifndef STL_STACK_
#define STL_STACK_

#include <stack>

template <class T>
class STLStack {
    std::stack<T> privStack;
 public:
    bool isEmpty() const;
    bool push(const T& newEntry);
    bool pop();
    T peek() const;
};

#include "STLStack.cpp"
#endif
