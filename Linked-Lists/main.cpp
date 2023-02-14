#include <iostream>
#include "Node.h"

template <class T>
void print_list(Node<T>*);

int main()
{
    Node<int>* root = new Node<int>(5);
    root->setNext(new Node<int>(8));
    root->getNext()->setNext(new Node<int>(10));

    // Also could be done as the following:
    // Node<int>* root = new Node<int>(5, new Node<int>(8, new Node<int>(10)))

    print_list(root);

    return 0;
}

template<class T>
void print_list(Node<T>* r) 
{
    while(r != nullptr) 
    {
        std::cout << r->getValue() << std::endl;
        r = r->getNext();
    }
}