#include <iostream>

template <typename Returntype, typename T, typename R>
Returntype multiple_maximum(T a, R b)
{

    return (a > b) ? a : b;
}

int main()
{
    // Method 1
    std::cout << multiple_maximum<double, int, double>(12, 19.1) << std::endl;
    std::cout << multiple_maximum<int, int, double>(12, 19.1) << std::endl;
    // Method 2
    std::cout << multiple_maximum<double>(12, 19.1) << std::endl;
    // Method 3
    std::cout << multiple_maximum<int, int>(12, 19.1) << std::endl;

    return 0;
}