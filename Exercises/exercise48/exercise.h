#ifndef EXERCISE_H
#define EXERCISE_H

class Point
{
public:
    // methods
    Point() = default;
    Point(double x, double y);

    double x();

    double y();

    Point *set_x(double val);

    Point *set_y(double val);
    // member variables
private:
    double m_x{1};
    double m_y{1};
};

void print_point(Point &p);

#endif // _EXERCISE_H
