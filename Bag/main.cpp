#include <iostream>
#include "Bag.h"

int main() {
    Bag<int> myBag;

    myBag.add(1);
    myBag.add(2);
    myBag.add(2);
    myBag.add(4);
    myBag.add(5);
    myBag.add(6);

    std::cout << "myBag contains " << myBag.getCurrentSize() << " items." << std::endl;
    std::cout << "myBag contains '1' " << myBag.getFrequencyOf(1) << " times." << std::endl;
    std::cout << "myBag contains '2' " << myBag.getFrequencyOf(2) << " times." << std::endl;

    std::cout << "The index of '6' is " << myBag.getIndexOf(6) << std::endl;

    std::cout << "Is my bag empty? " << myBag.isEmpty() << std::endl;

    std::cout << "Does my bag contain '12'? " << myBag.contains(12) << std::endl;
    std::cout << "Does my bag contain '5'? " << myBag.contains(2) << std::endl;

    myBag.clear();
    std::cout << "Is my bag empty? " << myBag.isEmpty() << std::endl;

    myBag.add(1);
    myBag.add(2);
    myBag.add(2);
    myBag.add(4);
    myBag.add(5);
    myBag.add(6);

    std::vector<int> myBagVector = myBag.toVector();
    std::cout << "myBagVector contains: " << myBagVector[0] << ", " 
                                        << myBagVector[1] << ", " << myBagVector[2] << ", " 
                                        << myBagVector[3] << ", " << myBagVector[4] << ", " 
                                        << myBagVector[5] << ", " << std::endl;
    return 0;
}