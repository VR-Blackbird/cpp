#include <iostream>
#include "square.h"

bool compare(const Square &square1, const Square &square2)
{
    return (square1.surface() > square2.surface()) ? true : false;
}

bool compare(const Square &square1, double comparison)
{
    return (square1.surface() > comparison) ? true : false;
}

int main()
{
    Square s1(19.1);
    Square s2(10);
    // std::cout << s1.surface() << std::endl;

    std::cout << std::boolalpha << compare(s1, s2) << std::endl;
    std::cout << std::boolalpha << compare(s1, 11) << std::endl;

    return 0;
}