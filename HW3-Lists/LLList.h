#ifndef LL_LIST_
#define LL_LIST_

#include <iostream>
#include "ListInterface.h" //LLList will be derived from this interface
#include "Node.h"          //for creating and managing nodes in the LL
using namespace std;

template<class ItemType>
class LLList : public ListInterface<ItemType>{
  private:
    Node<ItemType> *root;
	Node<ItemType> dummy;
	int itemCount;
  public:
	  LLList();
      bool isEmpty() const;
	  int getLength() const;
	  bool insert(int newPosition, const ItemType& newEntry);
	  bool remove(int position);
	  void clear();
	  ItemType getEntry(int position) const;
	  void replace(int position, const ItemType& newEntry);
	  void printList() const;
	  //~LLList();
};

#include "LLList.cpp"
#endif
