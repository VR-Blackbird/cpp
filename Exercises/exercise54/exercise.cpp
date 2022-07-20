#include "exercise.h"

Box::Box(double p_width, double p_length) : Box::Box(p_width, p_length, 1)
{
}

Box::Box(double p_width, double p_length, double p_height) : m_width{p_width}, m_height{p_height}, m_length{p_length}
{
}

double Box::volume()
{
    return m_height * m_length * m_width;
}