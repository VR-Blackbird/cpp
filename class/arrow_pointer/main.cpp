#include <iostream>
#include "cylinder.h"
// #include "cylinder.h"

int main()
{
    // Cylinder c1(10, 19);    //Storing in stack
    Cylinder *c1 = new Cylinder(10, 19); // Cylinder object on heap
    // std::cout << (*c1).get_volume() << std::endl;
    std::cout << c1->get_volume() << std::endl;
    delete c1;
    return 0;
}