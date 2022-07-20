#include <iostream>
#include "exercise.h"

int main()
{
    Box b1(3, 2);
    Box b2(3, 2, 90);
    std::cout << b1.volume() << std::endl;
    std::cout << b2.volume() << std::endl;
    return 0;
}