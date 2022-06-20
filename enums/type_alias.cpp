#include <iostream>

int main()
{
    using HugeInt = unsigned long long int; // New way of aliasing
    typedef unsigned long int Huge;         // Older way of type aliasing
    HugeInt a{11111111111111};
    Huge b{1111111};
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}