#include <iostream>
#include "distance.h"
int main()
{
    Point p1(2, 3);
    Point p2(4, 6);
    std::cout << distance(p1, p2) << std::endl;
}