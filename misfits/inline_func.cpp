#include <iostream>

inline int max(int a, int b) // Use only for short and quick functions
{

    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    std::cout << max(10, 17) << std::endl; // Expands function definition here itself
    return 0;
}