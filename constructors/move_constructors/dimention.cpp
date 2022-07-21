#include "dimention.h"

Dimention::Dimention(double x_par, double y_par) : x{new double(x_par)}, y{new double(y_par)}
{
}

Dimention::Dimention(Dimention &&d) : x{d.get_x()}, y{d.get_y()}
{
    d.invalidate();
}

void Dimention::invalidate()
{
    x = nullptr;
    y = nullptr;
}

double *Dimention::get_x()
{
    return x;
}

double *Dimention::get_y()
{
    return y;
}

Dimention::~Dimention()
{
    delete x;
    delete y;
}