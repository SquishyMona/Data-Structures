#ifndef _NODE_CLASS
#define _NODE_CLASS

template <class ItemType>
class Node {
    ItemType value;
    Node* next;
public:
    Node() : value(0), next(nullptr) {}
    Node(ItemType val) : value(val), next(nullptr) {}
    Node(ItemType val, Node* n) : value(val), next(n) {}

    Node<ItemType>* getNext() const;       // Returns the next node
    ItemType getValue() const;             // Returns the value of the node
    void setNext(Node<ItemType>*);         // 
    void setValue(ItemType);               // Set the value of the next node
};

template <class ItemType>
Node<ItemType>* Node<ItemType>::getNext() const {
    return next;
}

template <class ItemType>
ItemType Node<ItemType>::getValue() const{
    return value;
}

template <class ItemType>
void Node<ItemType>::setNext(Node<ItemType>* n) {
    next = n;
}

template <class ItemType>
void Node<ItemType>::setValue(ItemType val) {
    value = val;
}

#endif