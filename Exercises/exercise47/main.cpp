#include <iostream>
#include "exercise.h"

int main()
{
    Box b1(10.1, 20.4, 30.3);
    std::cout << b1.base_area() << std::endl;
    std::cout << b1.volume() << std::endl;
    return 0;
}
