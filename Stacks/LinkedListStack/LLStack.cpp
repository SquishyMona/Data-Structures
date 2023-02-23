#include <iostream>
#include "LLStack.h"

template<class T>
LLStack<T>::LLStack() {
    root = nullptr;
    std::cout << "New stack created...\n";
}

template <class T>
LLStack<T>::LLStack(T val) {
    root = new Node<T>(val);
}

template<class T>
bool LLStack<T>::isEmpty() const {
    root == nullptr;
}

template<class T>
bool LLStack<T>::push(const T& val) {
    if(root == nullptr)
    {
        root = new Node<T>(val);
    }
    else
    {
        Node<T>* temp = new Node<T>(val, root);
        root = temp;
    }
}

template<class T>
bool LLStack<T>::pop() {
    if (!isEmpty() && root->getNextNode() != nullptr) {
        root = root->getNextNode();
        return true;
    }
    if (!isEmpty()) {
        root = nullptr;
        return true;
    }
}

template <class T>
T LLStack<T>::peek() const {
    if(!isEmpty()) {
        return root->getNodeValue();
    }
    return -1;
}

template<class T>
LLStack<T>::~LLStack() {
    std::cout << "Stack deleted...\n";
}