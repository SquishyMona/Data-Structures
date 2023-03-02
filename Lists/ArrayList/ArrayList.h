#ifndef LIST_ARRAY_CLASS
#define LIST_ARRAY_CLASS

#include "ListInterface.h"
#define MAX_ITEMS 10

template<class T>
class ArrayList : public ListInterface<T> {
	T items[MAX_ITEMS];
	int counter;
	
public:
	ArrayList();
	bool isEmpty() const;
	int getLength() const;
	bool insert(int newPosition, const T& newEntry);
	bool remove(int position);
	void clear();
	T getEntry(int position) const;
	void replace(int position, const T& newEntry);
	void printList();
};

#include "ArrayList.cpp"

#endif