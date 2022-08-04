#include <iostream>

// Global namespace
double add(double a, double b)
{
    return a + b;
}

namespace My_Thing
{
    double add(double a, double b)
    {
        return a + b - 1;
    }

    void do_something()
    {
        double result = ::add(5, 6); // calls add function in global namespace
        double result1 = add(5, 6);  // calls add function in current namespace
        std::cout << "result : " << result << std::endl;
        std::cout << "result : " << result1 << std::endl;
    }

}

int main()
{
    My_Thing::do_something();

    return 0;
}