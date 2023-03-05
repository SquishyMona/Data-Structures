#include <iostream>
#include "LLList.h"

template<class T>
LLList<T>::LLList() {
    root = &dummy;
    itemCount = 0;
}

template<class T>
bool LLList<T>::isEmpty() const {
    return dummy.getNextNode() == nullptr;
}

template<class T>
int LLList<T>::getLength() const {
    return itemCount;
}

template<class T>
bool LLList<T>::insert(int newPosition, const T& newEntry) {
    Node<T>* curr = root;
    for(int i = 0; i < newPosition; i++) {
        curr = curr->getNextNode();
    }
    curr->setNextNode(new Node<T>(newEntry, curr->getNextNode()));
    itemCount++;
    return true;
}

template<class T>
bool LLList<T>::remove(int position) {
    if(position > itemCount)
    {
        std::cout << "Position invalid, canno't remove item." << std::endl;
        return false;
    }
    Node<T>* curr = root;
    for(int i = 0; i < position - 1; i++) {
        curr = curr->getNextNode();
    }
    curr->setNextNode(curr->getNextNode()->getNextNode());
    itemCount--;
    return true;
}

template<class T>
void LLList<T>::clear() {
    dummy = new Node<T>();
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
    if(isEmpty())
    {
        std::cout << "The list is empty." << std::endl;
    }
    Node<T>* temp = root->getNextNode();
    for(int i = 0; i < itemCount; i++) {
        std::cout << temp->getNodeValue() << " ";
        temp = temp->getNextNode();
    }
    std::cout << std::endl;
}