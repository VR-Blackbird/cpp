#include "square.h"

Square::Square(double sside) : side{sside}
{
}

double Square::surface() const
{
    return side * side;
}

Square::~Square()
{
}