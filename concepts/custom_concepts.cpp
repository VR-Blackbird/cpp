#include <iostream>

// Custom concept to check for integer values
template <typename T>
concept ViIntegral = std::is_integral<T>::value;

// Custom concept to check if the values are multipliable
template <typename T>
concept ViMultipliable = requires(T a, T b)
{
    a *b;
};

// template <typename T>
// concept ZeroDivisionCheck = requires(T a, T b)
// {
//     {(a *b) == 0};
// };

template <ViMultipliable T, ViMultipliable F>
auto multiply_numbers(T a, F b)
{
    return (a * b);
}

template <ViIntegral T>
T add_ten(T a)
{
    return (a + 10);
}

// template <ZeroDivisionCheck T, ZeroDivisionCheck F>
// auto divide(T a, F b)
// {
//     return (a / b);
// }

int main()
{
    std::cout << add_ten(12) << std::endl;
    std::cout << multiply_numbers(2, 19) << std::endl;

    return 0;
}