#include <iostream>

int main()
{
    int a{90};

    int b{90};
    int c{10};

    // Capture everything out of the scope of the lambda by value
    [=]()
    {
        std::cout << (a + b + c) << std::endl;
    }();

    // Capture everything by reference

    [&]()
    {
        ++a;
        ++c;
        std::cout << (a + b + c) << std::endl;
    }();

    return 0;
}