#include <iostream>
#include "exercise.h"

int main()
{
    Point p1(25.1, 32.3);
    Point p2(p1);
    print_point(p1);
    print_point(p2);
}