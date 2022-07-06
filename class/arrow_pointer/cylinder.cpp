#include "cylinder.h"
Cylinder::Cylinder(double r, double h)
{
    base_radius = r;
    height = h;
}
double Cylinder::get_volume()
{
    return PI * pow(base_radius, 2) * height;
}
double Cylinder::get_base_radius()
{
    return base_radius;
}
double Cylinder::get_height()
{
    return height;
}
void Cylinder::set_radius(double radius)
{
    base_radius = radius;
}
void Cylinder::set_height(double hei)
{
    height = hei;
}