#include "exercise.h"

Box::Box(double width, double length, double height)
{
    m_length = length;
    m_width = width;
    m_height = height;
}

double Box::base_area()
{
    return m_length * m_width;
}
double Box::volume()
{
    return (base_area() * m_height);
}
