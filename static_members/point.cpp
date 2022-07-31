#include "point.h"

size_t Point::object_count{};

Point::Point(double x, double y) : m_x{x}, m_y{y}
{
    ++object_count;
}

void Point::print_info()
{
    std::cout << "m_x : " << m_x << ", "
              << "m_y : " << m_y << std::endl;
}
void Point::get_object_count()
{
    std::cout << "Object number : " << object_count << std::endl;
}