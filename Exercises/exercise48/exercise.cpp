#include "exercise.h"
#include <iostream>

Point::Point(double x, double y)
{
    m_x = x;
    m_y = y;
}

double Point::x()
{
    return m_x;
}
double Point::y()
{
    return m_y;
}
Point *Point::set_x(double val)
{
    this->m_x = val;
    return this;
}
Point *Point::set_y(double val)
{
    this->m_y = val;
    return this;
}

void print_point(Point &p)
{
    std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]";
}