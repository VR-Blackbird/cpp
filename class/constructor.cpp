#include <iostream>

// Cylinder class
class Cylinder
{
private:
    // Member variables
    double base_radius{};
    double height{};

public:
    // Constructors declaration
    Cylinder()
    {
        base_radius = 12.0;
        height = 12.3;
    }
    Cylinder(double r, double h)
    {
        base_radius = r;
        height = h;
    }

    double volume()
    {
        return base_radius * height;
    }
};

class Box
{
public:
    // Member variables
    double m_length{};
    double m_width{};
    double m_height{};

public:
    // Constructors declaration
    Box(double l = 2, double w = 2, double h = 2)
    {
        m_length = l;
        m_width = l;
        m_height = l;
    }
    double base_area()
    {
        return m_length * m_width;
    }
    double volume()
    {
        return (base_area() * m_height);
    }
};

int main()
{
    Box box1(10, 10, 10);
    std::cout << box1.base_area() << std::endl;
    std::cout << box1.volume() << std::endl;
    Cylinder c1;
    Cylinder c2(10, 10);
    std::cout << c1.volume() << std::endl;
    std::cout << c2.volume() << std::endl;
    return 0;
}