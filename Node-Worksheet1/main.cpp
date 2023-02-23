#include <iostream>
#include "Node.h"

int main()
{
    Node<int>* root = new Node<int>(1);

    Node<int>* temp = root;
    for (int i = 0; i < 2; i++) {
        root->setRightNode(new Node<int>(i + 2, root));
        temp = temp->getRightNode();
    }

    temp = root;
    for (int i = 0; i < 2; i++) {
        root->setBelowNode(new Node<int>(i + 4, root, nullptr, nullptr, nullptr));
        temp = temp->getBelowNode();
    }

    root->setRightNode(new Node<int>(2, root));
    root->getRightNode()->setRightNode(new Node<int>(3, root->getRightNode()));

    root->setBelowNode(new Node<int>(4, root, nullptr, nullptr, nullptr));
    root->getBelowNode()->setRightNode(new Node<int>(5, root->getRightNode(), nullptr, root->getBelowNode(), nullptr));
    root->getBelowNode()->getRightNode()->setRightNode(new Node<int>(6, root->getRightNode()->getRightNode(), nullptr, root->getBelowNode()->getRightNode(), nullptr));

    
}