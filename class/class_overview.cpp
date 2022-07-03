#include <iostream>
#include <math.h>
// Cylinder classes
class Cylinder
{
    // public:
    double base_radius{10};
    double height{19.8};

public:
    double get_volume()
    {
        return 3.14 * pow(base_radius, 2) * height;
    }
};

int main()
{
    Cylinder c1;
    std::cout << c1.get_volume() << std::endl;
    // std::cout << c1.base_radius << std::endl;
    // c1.base_radius = 2;
    std::cout << c1.get_volume() << std::endl;

    return 0;
}