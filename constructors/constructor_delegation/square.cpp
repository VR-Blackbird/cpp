#include "square.h"
#include <iostream>

Square::Square(double m_side) : Square{m_side, "red", 1}
{
    std::cout << "Inside single parameter constructor" << std::endl;
}

Square::Square(double m_side, const std::string &p_color, int p_shading) : side{m_side}, color{p_color}, shading{p_shading}
{
    std::cout << "Inside multi parameter constructor" << std::endl;
}