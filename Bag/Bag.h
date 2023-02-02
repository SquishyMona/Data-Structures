#ifndef _BAG_CLASS_
#define _BAG_CLASS_

#include <vector>
#include "BagInterface.h"

template<class ItemType>
class Bag : public BagInterface<ItemType> {
    static const int DEFAULT_BAG_SIZE = 6;              // Default size of the bag
    ItemType items[DEFAULT_BAG_SIZE];                   // Array of bag items, underlying data structure
    int itemCount;                                      // Current count of bag items
    int maxItems;                                        // Max capacity of the bag.

public:
    Bag();                                              // Default constructor
    int getCurrentSize() const;                         // Returns the current size of the bag
    bool isEmpty() const;                               // Returns true if the bag is empty
    bool add(const ItemType& newEntry);                 // Adds a new entry to the bag
    bool remove(const ItemType& anEntry);               // Removes one occurrence of a given entry from the bag
    void clear();                                       // Removes all entries from the bag
    int getFrequencyOf(const ItemType& anEntry) const; // Counts the number of times a given entry appears in the bag
    bool contains(const ItemType& anEntry) const;  
    int getIndexOf(const ItemType& anEntry) const;    // Tests whether this bag contains a given entry
    std::vector<ItemType> toVector() const;            // Empties and then fills a given vector with all entries that are in this bag
};

template<class ItemType>
Bag<ItemType>::Bag() {
    itemCount = 0;
    maxItems = DEFAULT_BAG_SIZE;
}

template<class ItemType>
int Bag<ItemType>::getCurrentSize() const {
    return itemCount;
}

template<class ItemType>
bool Bag<ItemType>::isEmpty() const {
    return itemCount == 0;
}

template<class ItemType>
bool Bag<ItemType>::add(const ItemType& newEntry) {
    if (itemCount < maxItems) {
        items[itemCount] = newEntry;
        itemCount++;
        return true;
    }
    else {
        return false;
    }
}

template<class ItemType>
bool Bag<ItemType>::remove(const ItemType& anEntry) {
    for (int i = 0; i < itemCount; i++) {
        if (items[i] == anEntry) {
            items[i] = items[itemCount - 1];
            itemCount--;
            return true;
        }
    }
    return false;
}

template<class ItemType>
void Bag<ItemType>::clear() {
    for (int i = 0; i < itemCount; i++) {
        items[i] = NULL;
    }
    itemCount = 0;
}

template<class ItemType>
int Bag<ItemType>::getFrequencyOf(const ItemType& anEntry) const {
    int frequency = 0;
    for (int i = 0; i < itemCount; i++) {
        if (items[i] == anEntry) {
            frequency++;
        }
    }
    return frequency;
}

template<class ItemType>
bool Bag<ItemType>::contains(const ItemType& anEntry) const {
    for (int i = 0; i < itemCount; i++) {
        if (items[i] == anEntry) {
            return true;
        }
    }
    return false;
}

template<class ItemType>
std::vector<ItemType> Bag<ItemType>::toVector() const {
    std::vector<ItemType> bagVector;
    for (int i = 0; i < itemCount; i++) {
        bagVector.push_back(items[i]);
    }
    return bagVector;
}

template<class ItemType>
int Bag<ItemType>::getIndexOf(const ItemType& target) const {
    for (int i = 0; i < itemCount; i++) {
        if (items[i] == target) {
            return i;
        }
    }
    return -1;
}

#endif