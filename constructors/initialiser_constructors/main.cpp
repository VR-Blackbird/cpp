#include <iostream>
#include <cassert>
struct Point
{
public:
    Point(std::initializer_list<double> list)
    {
        assert(list.size() == 2);
        x = *(list.begin());
        y = *(list.begin() + 1);
        std::cout << list.size() << std::endl;
    }
    double get_x() const
    {
        return x;
    }
    double get_y() const
    {
        return y;
    }

private:
    double x;
    double y;
};

void print_point(const Point &p)
{
    std::cout << p.get_x() << std::endl;
    std::cout << p.get_y() << std::endl;
}

int main()
{
    Point p1{11, 18, 12};
    print_point(p1);
    return 0;
}