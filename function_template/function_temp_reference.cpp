#include <iostream>

template <typename T>
T &maximum(T &a, T &b)
{
    std::cout << &a << std::endl;
    return (a > b) ? a : b;
}

int main()
{
    int x{10};
    int y{12};
    std::cout << &x << std::endl;
    std::cout << maximum(x, y) << std::endl;
    return 0;
}