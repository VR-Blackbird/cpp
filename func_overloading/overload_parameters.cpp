#include <iostream>

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

double max(double a, double b)
{

    if (a > b)
    {
        return a;
    }
    return b;
}

std::string_view max(std::string_view a, std::string_view b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    std::cout << max(12, 41) << std::endl;
    std::cout << max(12.3, 21.2) << std::endl;
    std::cout << max("zeorge", "local") << std::endl;
    return 0;
}