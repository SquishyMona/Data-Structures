/*
define OurStack class here derived from StackInterface.h
All methods from the interface must be defined.
The driver (problem1.cpp) is provided for this problem your convienence.
*/
#include <stack>
#include <iostream>

template <class T>
class OurStack {
    std::stack<T> privStack;
 public:
    bool isEmpty() const;
    bool push(const T& newEntry);
    bool pop();
    T peek() const;

};

template <class T>
bool OurStack<T>::isEmpty() const {
    return privStack.empty();
}

template <class T>
bool OurStack<T>::push(const T& newEntry) {

    privStack.push(newEntry);
    return true;
}

template <class T>
bool OurStack<T>::pop() {
    if(privStack.empty())
    {
        return false;
    }
    else
    {
        privStack.pop();
        return true;
    }

}

template <class T>
T OurStack<T>::peek() const {
    return privStack.top();
}
