#include <iostream>
#include "CounterType.h"
#include "CounterType.cpp"

int main() {
    counterType myCounter;
    std::cout << "myCounter has a value of " << myCounter.getCount() << std::endl;
    myCounter.increment();
    std::cout << "myCounter has a value of " << myCounter.getCount() << std::endl;
    myCounter.setCount(5);
    std::cout << "myCounter has a value of " << myCounter.getCount() << std::endl;
    myCounter.decrement();
    std::cout << "myCounter has a value of " << myCounter.getCount() << std::endl;
    myCounter.reset();
    std::cout << "myCounter has a value of " << myCounter.getCount() << std::endl;
    myCounter.decrement();
    std::cout << "myCounter has a value of " << myCounter.getCount() << std::endl;

    counterType mySetCounter(10);
    std::cout << "mySetCounter has a value of " << mySetCounter.getCount() << std::endl;


    return 0;
}
