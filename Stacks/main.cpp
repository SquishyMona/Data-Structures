#include <iostream>
#include "ArrayStack.h"
#include "ArrayStack.cpp"

int main()
{
    ArrayStack<int> sta;

    std::cout << sta.peek() << std::endl;
}