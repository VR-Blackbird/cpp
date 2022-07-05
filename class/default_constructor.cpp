#include <iostream>
#include <cmath>

class Point
{
public:
    // Default constructor
    Point() = default;

    // Constructor
    Point(double x, double y)
    {
        m_x = x;
        m_y = y;
    }
    // methods
    double distance_to(Point target)
    {
        return std::sqrt(std::pow(target.m_x - m_x, 2) + std::pow(target.m_y - m_y, 2) * 1.0);
    }
    // member variables
private:
    double m_x{1};
    double m_y{1};
};

int main()
{
    // Point p1; will throw an error since the the object is looking for a default empty constructor
    Point p1; //It will work since we have initialised a default constructor
    Point p2(11, 11);
    std::cout << p1.distance_to(p2);
    return 0;
}