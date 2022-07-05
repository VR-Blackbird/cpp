#ifndef EXERCISE_H
#define EXERCISE_H

class Box
{

public:
    // methods
    Box() = default;
    Box(double width, double length, double height);
    double base_area();
    double volume();

    // member variables
private:
    double m_width{1};
    double m_length{1};
    double m_height{1};
};

#endif // _EXERCISE_H
