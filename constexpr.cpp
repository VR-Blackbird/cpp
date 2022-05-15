#include <iostream>

// Constexpr with if statement. Removes the code block which failed, during compile time itself
int main()
{

    constexpr bool condition{false};
    if constexpr (condition)
    {
        std::cout << "Something passed" << std::endl;
    }
    else
    {
        std::cout << "Something failed" << std::endl;
    }
}