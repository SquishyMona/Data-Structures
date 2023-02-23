#ifndef _NODE_CLASS
#define _NODE_CLASS

template <class ItemType>
class Node {
    ItemType value;
    Node* up;
    Node* down;
    Node* left;
    Node* right;

public:
    Node() : value(0), up(nullptr), down(nullptr), left(nullptr), right(nullptr) {}
    Node(ItemType val) : value(val), up(nullptr), down(nullptr), left(nullptr), right(nullptr) {}
    Node(ItemType val, Node* l) : value(val), up(nullptr), down(nullptr), left(l), right(nullptr) {}
    Node(ItemType val, Node* u, Node* d, Node* r, Node* l) : value(val), up(u), down(d), left(l), right(r) {}

    Node<ItemType>* getAboveNode() const;      // Returns the above node
    Node<ItemType>* getBelowNode() const;       // Returns the below node
    Node<ItemType>* getLeftNode() const;        // Returns the left node
    Node<ItemType>* getRightNode() const;       // Returns the right node
    ItemType getValue() const;                  // Returns the value of the node
    void setAboveNode(Node<ItemType>*);         // Sets pointer to the node above
    void setBelowNode(Node<ItemType>*);         // Sets pointer to the node below
    void setLeftNode(Node<ItemType>*);          // Sets pointer to the node to the left
    void setRightNode(Node<ItemType>*);         // Sets pointer to the node to the right
    void setValue(ItemType);                    // Set the value of the next node
};

template <class ItemType>
Node<ItemType>* Node<ItemType>::getAboveNode() const {
    return up;
}


template <class ItemType>
Node<ItemType>* Node<ItemType>::getBelowNode() const {
    return down;
}

template <class ItemType>
Node<ItemType>* Node<ItemType>::getLeftNode() const {
    return left;
}

template <class ItemType>
Node<ItemType>* Node<ItemType>::getRightNode() const {
    return right;
}

template <class ItemType>
ItemType Node<ItemType>::getValue() const{
    return value;
}

template <class ItemType>
void Node<ItemType>::setAboveNode(Node<ItemType>* n) {
    up = n;
}

template <class ItemType>
void Node<ItemType>::setBelowNode(Node<ItemType>* n) {
    down = n;
}

template <class ItemType>
void Node<ItemType>::setLeftNode(Node<ItemType>* n) {
    left = n;
}

template <class ItemType>
void Node<ItemType>::setRightNode(Node<ItemType>* n) {
    right = n;
}

template <class ItemType>
void Node<ItemType>::setValue(ItemType val) {
    value = val;
}

#endif