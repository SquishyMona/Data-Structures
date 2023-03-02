#include <iostream>
#include "LLList.h"

template<class T>
LLList<T>::LLList() {
    root = nullptr;
    itemCount = 0;
}

template<class T>
bool LLList<T>::isEmpty() const {
    return root == nullptr;
}

template<class T>
int LLList<T>::getLength() const {
    return itemCount;
}

template<class T>
bool LLList<T>::insert(int newPosition, const T& newEntry) {
    if(isEmpty()) {
        root = new Node<T>(newEntry);
    }
    else {
        Node<T>* temp = root;
        for(int i = 0; i < newPosition - 1; i++) {
            temp = temp->getNextNode();
        }
        temp->setNextNode(new Node<T>(newEntry, temp->getNextNode()));
        itemCount++;
    }
    return true;
}

template<class T>
bool LLList<T>::remove(int position) {
    if (isEmpty())
    {
        std::cout << "The list is empty." << std::endl;
        return false;
    }
    Node<T>* temp = root;
    for(int i = 0; i < position - 1; i++) {
        temp = temp->getNextNode();
    }
    temp->setNextNode(temp->getNextNode()->getNextNode());
    itemCount--;
    return true;
}

template<class T>
void LLList<T>::clear() {
    root = nullptr;
    itemCount = 0;
}

template<class T>
T LLList<T>::getEntry(int position) const {
    Node<T>* temp = root;
    for(int i = 0; i < position; i++) {
        temp = temp->getNextNode();
    }

    return temp->getNodeValue();
}

template<class T>
void LLList<T>::replace(int position, const T& newEntry) {
    Node<T>* temp = root;
    for(int i = 0; i < position; i++) {
        temp = temp->getNextNode();
    }
    temp->setNodeValue(newEntry);
}

template<class T>
void LLList<T>::printList() const {
    Node<T>* temp = root;
    for(int i = 0; i < itemCount; i++) {
        std::cout << temp->getNodeValue() << " ";
        temp = temp->getNextNode();
    }
    std::cout << std::endl;
}