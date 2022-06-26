#include <iostream>

template <typename T>
T maximum(T x, T y);

int main(int argc, char **argv)
{
    int a{10};
    int b{20};
    double c{19.2};
    double d{12.3};
    std::cout << maximum(10, 20) << std::endl;
    std::cout << maximum(c, d) << std::endl;
}

template <typename T>
T maximum(T x, T y)
{
    return (x > y) ? x : y;
}