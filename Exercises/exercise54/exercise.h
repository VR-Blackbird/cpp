#ifndef EXERCISE

#define EXERCISE

class Box
{
private:
    double m_length{1};
    double m_width{1};
    double m_height{1};

public:
    Box() = default;
    Box(double p_width, double p_length);
    Box(double p_width, double p_length, double p_height);
    double volume();
};

#endif