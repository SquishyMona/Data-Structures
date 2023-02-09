#include <iostream>

const int START = 1;
const int STOP = 5;

int recursive_squares(int, int);

int main()
{
    std::cout << recursive_squares(START, STOP) << std::endl;
}

int recursive_squares(int start, int stop)
{
    if (stop < 0)
    {
        std::cout << "Error: stop must be greater than 0" << std::endl;
        return -1;
    }

    // Precondition
    if (start == stop)
    {
        std::cout <<  start * start << " + ";
        return start * start;
    }

    // Postcondition
    int square = start * start;
    int sum = square + recursive_squares(start + 1, stop);
    std::cout << square;
    if(square == 1) 
    { 
        std::cout << " = "; 
    }
    else 
    { 
        std::cout << " + "; 
    }

    return sum;
}