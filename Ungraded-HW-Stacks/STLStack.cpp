#include <iostream>
#include "STLStack.h"

template <class T>
bool STLStack<T>::isEmpty() const {
    return privStack.empty();
}

template <class T>
bool STLStack<T>::push(const T& newEntry) {

    privStack.push(newEntry);
    return true;
}

template <class T>
bool STLStack<T>::pop() {
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
T STLStack<T>::peek() const {
    return privStack.top();
}
