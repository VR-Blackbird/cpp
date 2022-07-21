#include <iostream>
#include "dimention.h"

int main()
{
    Dimention d1(12, 13);
    std::cout << *(d1.get_x()) << std::endl;
    std::cout << *(d1.get_y()) << std::endl;
    Dimention d2(std::move(Dimention(11, 12)));
    std::cout << *(d2.get_x()) << std::endl;
    std::cout << *(d2.get_y()) << std::endl;

    return 0;
}