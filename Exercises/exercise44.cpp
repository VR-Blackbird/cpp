#include <iostream>

class Box
{
public:
    // Member variables
    double m_length{};
    double m_width{};
    double m_height{};

public:
    // Constructors declaration
    Box(double l = 1, double w = 1, double h = 1)
    {
        m_length = l;
        m_width = w;
        m_height = h;
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
    Box b1(10.1, 20.4, 30.3);
    std::cout << b1.base_area() << std::endl;
    std::cout << b1.volume() << std::endl;
    return 0;
}