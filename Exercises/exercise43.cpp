#include <iostream>
#include <cmath>

class Point
{
public:
    double m_x{1};
    double m_y{1};

public:
    double distance_to(Point point2)
    {
        return std::sqrt(std::pow(point2.m_x - m_x, 2) + std::pow(point2.m_y - m_y, 2));
    }
};

int main()
{
    Point p1;
    Point p2;
    p2.m_x = 2;
    p2.m_y = 2;
    std::cout << p1.distance_to(p2) << std::endl;
    return 0;
}