#include <iostream>

namespace NoAdjust
{
    int add(int a, int b);
}

namespace Adjust
{
    const int adjustment{2};
    int add(int a, int b);
}

int main()
{
    std::cout << Adjust::add(1, 2) << std::endl;
    return 0;
}

namespace NoAdjust
{
    int add(int a, int b)
    {
        return a + b;
    }
}

namespace Adjust
{
    int add(int a, int b)
    {
        return a + b - adjustment;
    }
}