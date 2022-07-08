#include "exercise.h"

int main()
{
    Point p1;
    std::cout << p1.x() << std::endl;
    p1.x() = 12;
    std::cout << p1.x() << std::endl;
    return 0;
}