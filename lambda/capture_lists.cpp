#include <iostream>

int main()
{
    /*
    [Capture list](){
        Function body
    };
    */
    int a{12};
    int b{13};

    // General example of capture lists and capture by value
    // copies of a and b
    [a, b]()
    {
        std::cout << (a + b) << std::endl;
    }();

    // Capture by reference
    [&a, &b]()
    {
        ++a;
        std::cout << (a + b) << std::endl;
    }();

    std::cout << a << std::endl;
}