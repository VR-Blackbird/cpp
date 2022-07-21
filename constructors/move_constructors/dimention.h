#ifndef DIM

#define DIM

class Dimention
{
private:
    double *x{};
    double *y{};
    void invalidate();

public:
    Dimention() = default;
    Dimention(double x_par, double y_par);
    Dimention(Dimention &&d);
    ~Dimention();
    double *get_x();
    double *get_y();
};

#endif