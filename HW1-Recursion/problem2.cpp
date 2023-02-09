#include <iostream>
#include <string>

void recursive_reversed_num(int);

int main() 
{
    recursive_reversed_num(12345);
    std::cout << std::endl;
}

void recursive_reversed_num(int num)
{
    // Precondition
    if (num < 10)
    {
        std::cout << num;
        return;
    }

    // Postcondition
    int digit = num % 10;
    std::cout << digit;
    recursive_reversed_num(num / 10);
}