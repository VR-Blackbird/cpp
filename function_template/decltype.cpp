#include <iostream>
// Deduce type of an expression

template <typename T, typename F>
auto maximum(T a, F b) -> decltype((a > b) ? a : b); // Trailing return types

int main()
{
    int a{10};
    double b{19.3};
    decltype((a > b) ? a : b) c{}; // General usecase of decltypes

    std::cout << sizeof(c) << std::endl;
    std::cout << maximum(a, b) << std::endl;
    return 0;
}

template <typename T, typename F>
auto maximum(T a, F b) -> decltype((a > b) ? a : b)
{
    return (a > b) ? a : b;
}