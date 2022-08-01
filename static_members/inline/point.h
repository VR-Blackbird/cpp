#ifndef POINT
#define POINT

#include <iostream>

class Point
{
public:
    Point(double x, double y);
    Point() = default;
    void print_info();
    void get_object_count();

private:
    double m_x{};
    double m_y{};
    inline static size_t object_count{};
};

#endif