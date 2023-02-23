#define MAX 10
#include <iostream>
#include "ArrayStack.h"

template <class T>
ArrayStack<T>::ArrayStack() {
    top = -1;
    for (int i = 0; i < MAX; i++) {
        stack[i] = 0;
    }
    std::cout << "Stack created" << std::endl;
}

template <class T>
bool ArrayStack<T>::isEmpty() const {
    return top == -1;
}

template <class T>
bool ArrayStack<T>::push(const T& newEntry) {
    if (top == MAX - 1) {
        return false;
    }
    else {
        top++;
        stack[top] = newEntry;
        return true;
    }
}

template <class T>
bool ArrayStack<T>::pop() {
    if (top == -1) {
        return false;
    }
    else {
        stack[top] = 0;
        top--;
        return true;
    }
}

template <class T>
T ArrayStack<T>::peek() const {
    return stack[top];
}