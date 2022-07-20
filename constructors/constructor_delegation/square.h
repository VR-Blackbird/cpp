#ifndef SQUARE

#define SQUARE
#include <string>

class Square
{

private:
    double side{1};
    std::string color;
    int shading{1};
    int position{};

public:
    Square() = default;
    Square(double m_side);
    Square(double m_side, const std::string &p_color, int p_shading);
};

#endif