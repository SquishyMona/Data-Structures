#include <iostream>
#include "ArrayStack.h"
#include "ArrayStack.cpp"

int main()
{
    ArrayStack<int> sta;

    sta.push(1);
    sta.push(2);
    sta.pop();

    std::cout << sta.peek() << std::endl;
}