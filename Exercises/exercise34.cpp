#include <iostream>

// Don't modify anything above this line
// Your code will go below this line.

int odd()
{
    static int odd_number{-1};
    odd_number += 2;
    return odd_number;
}

void print_odds(unsigned int count)
{
    for (size_t i{}; i < count; ++i)
    {
        std::cout << odd() << " ";
    }
}

// Your code will go above this line
// Don't modify anything below this line

int main()
{
    unsigned int count = 5;
    print_odds(count);
}