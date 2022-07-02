#include <iostream>

// Method 1:

// template <typename T>
// requires std::integral<T>
//     T get_value(T a)
// {
//     return (a + 10);
// }


// Method 2:

template <std::integral T>
T get_value(T a)
{
    return (a + 10);
}

int main()
{
    // std::cout << get_value(10.3) << std::endl; Fail the compilation stage
    std::cout << get_value(10) << std::endl;
    return 0;
}