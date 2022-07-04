#include <iostream>

class Box
{
public:
    double m_length{10};
    double m_width{20};
    double m_height{30};

public:
    double base_area()
    {
        return m_length * m_width;
    }
    double volume()
    {
        return (base_area()* m_height);
    }
};

int main()
{
    Box box1;
    std::cout << box1.base_area() << std::endl;
    std::cout << box1.volume() << std::endl;
    return 0;
}