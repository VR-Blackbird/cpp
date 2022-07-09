#include <iostream>
#include "init.h"

int main()
{

    Cylinder c1(4);
    std::cout << "volume : " << c1.volume() << std::endl;

    return 0;
}