#ifndef NODE_CLASS_
#define NODE_CLASS_

#include<iostream>

template<class ItemType>
class Node {
    ItemType value;
    Node<ItemType> *next;
public:
	//when a Node is created without any input
    Node():value(NULL), next(nullptr){};
	//when a Node is created and a value is passed
    Node(ItemType val):value(val), next(nullptr){};
	//when a Node is created and a value and next pointer is passed
    Node(ItemType val, Node<ItemType> *nextNode):value(val), next(nextNode){};
    
    Node<ItemType>* getNextNode() const;
    void setNextNode(Node<ItemType>*);
    ItemType getNodeValue() const;
    void setNodeValue(ItemType);
    
};

template<class ItemType>
Node<ItemType>* Node<ItemType>::getNextNode() const{
    return next;
}

template<class ItemType>
void Node<ItemType>::setNextNode(Node<ItemType>* nextNode){
    next = nextNode;
}

template<class ItemType>
ItemType Node<ItemType>::getNodeValue() const{
    return value;
}

template<class ItemType>
void Node<ItemType>::setNodeValue(ItemType val){
    value = val;
}

#endif
