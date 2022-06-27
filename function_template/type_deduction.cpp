#include <iostream>

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x{19};
    int y{12};
    double z{21.1};
    std::cout << maximum<double>(x, z) << std::endl; // Implicit coversion will take place and convert int values to double
    std::cout << maximum<int>(x, z) << std::endl;
    return 0;
}