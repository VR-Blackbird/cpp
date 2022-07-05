#include <iostream>

class Cylinder
{
private:
    // Member variables
    double base_radius{1};
    double height{1};

public:
    // Constructors declaration
    Cylinder() = default;
    Cylinder(double r, double h)
    {
        base_radius = r;
        height = h;
    }

    double volume()
    {
        return base_radius * height;
    }
    double get_base_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }
    void set_radius(double radius)
    {
        base_radius = radius;
    }
    void set_height(double hei)
    {
        height = hei;
    }
};

int main()
{
    Cylinder c1;
    std::cout << c1.get_base_radius() << std::endl;
    std::cout << c1.get_height() << std::endl;
    c1.set_radius(19);
    c1.set_height(20);
    std::cout << c1.get_base_radius() << std::endl;
    std::cout << c1.get_height() << std::endl;

    return 0;
}