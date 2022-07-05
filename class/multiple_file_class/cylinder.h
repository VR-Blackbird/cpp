#ifndef CYLYIN_H
#define CYLYIN_H // include guards
#include "constants.h"
#include <cmath>

class Cylinder
{
private:
    double base_radius{1};
    double height{1};

public:
    Cylinder() = default;
    Cylinder(double r, double h);
    double get_volume();
    double get_base_radius();

    double get_height();

    void set_radius(double radius);

    void set_height(double hei);
};

#endif