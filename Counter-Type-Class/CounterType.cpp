// CounterType Implementation

#include <iostream>
#include "CounterType.h"

int counterType::objCount = 0;      // Initialize objCount

counterType::counterType() {
    counter = 0;
    objCount++;
}

counterType::counterType(int count) {
    if (count < 0) {
        count = 0;
        std::cout << "The count cannot be negative. Setting count to 0." << std::endl;
    }
    else {
        counter = count;
    }

    objCount++;
}

void counterType::increment() {
    counter++;
}

void counterType::decrement() {
    counter--;
    if (counter < 0) {
        counter = 0;
    }
}

void counterType::setCount(int count) {
    if (count < 0) {
        std::cout << "The count cannot be negative." << std::endl;
    }
    else {
        counter = count;
    }
}

int counterType::getCount() {
    return counter;
}

void counterType::reset() {
    counter = 0;
}

counterType::~counterType() {
    objCount--;
}