#include <iostream>

template <typename T, typename F>
auto maximum(T a, F b)
{

    return (a > b) ? a : b;
}

int main()
{
    std::cout << maximum(25, 19.2) << std::endl; // Double return type deduced
    std::cout << maximum('g', 12) << std::endl;  // Int returntype deduced
    return 0;
}