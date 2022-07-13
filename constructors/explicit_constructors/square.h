#ifndef SQUARE
#define SQUARE

class Square
{
public:
    explicit Square(double sside);
    ~Square();
    double surface() const;

private:
    double side;
};

#endif