#include <iostream>
#include "ArrayList.h"

template<class T>
ArrayList<T>::ArrayList() : counter(0) {}

template<class T>
bool ArrayList<T>::isEmpty() const {
	if (counter == 0)
		return true;
	else
		return false;
}

template<class T>
int ArrayList<T>::getLength() const {
	return counter;
}

template<class T>
bool ArrayList<T>::insert(int newPosition, const T& newEntry) {
	if (counter >= MAX_ITEMS)
	{
		std::cout << "The list is full. Unable to insert." << std::endl;
		return false;
	}
	if (newPosition >= MAX_ITEMS || newPosition < 0)
	{
		std::cout << "Invalid position provided. The list size is " << MAX_ITEMS << std::endl;
		return false;
	}

	for (int i = getLength() - 1; i >= newPosition; i--) 
	{
		items[i + 1] = items[i];
	}
	items[newPosition] = newEntry;
	counter++;
	return true;
}

template<class T>
bool ArrayList<T>::remove(int position) {
	if (position >= MAX_ITEMS || position < 0)
	{
		std::cout << "Invalid position provided. The list size is " << MAX_ITEMS << std::endl;
		return false;
	}

	for (int i = position; i < counter - 1; i++)
	{
		items[i] = items[i + 1];
	}
	counter--;
	return true;
}

template<class T>
void ArrayList<T>::clear() {
	if (isEmpty())
	{
		std::cout << "List is already empty" << std::endl;
		return;
	}
	else
	{
		for (int i = 0; i < counter; i++)
		{
			items[i] = NULL;
		}
		counter = 0;
	}
}

template<class T>
T ArrayList<T>::getEntry(int position) const {
	if (position >= MAX_ITEMS || position < 0)
	{
		std::cout << "Invalid position provided. The list size is " << MAX_ITEMS << std::endl;
		return NULL;
	}
	else
	{
		return items[position];
	}
}

template<class T>
void ArrayList<T>::replace(int position, const T& newEntry) {
	if (position >= MAX_ITEMS || position < 0 || position > counter)
	{
		std::cout << "Invalid position provided. The list size is " << MAX_ITEMS << std::endl;
		return;
	}
	else
	{
		items[position] = newEntry;
	}
}

template<class T>
void ArrayList<T>::printList() {
	if (isEmpty())
	{
		std::cout << "The list is empty" << std::endl;
	}
	else
	{
		for (int i = 0; i < counter; i++)
		{
			std::cout << items[i] << " ";
		}
		std::cout << std::endl;
	}
}