#include <iostream>

void print_odd_numbers(unsigned long long int data);

int main()
{
    unsigned long long int a{123456789};
    print_odd_numbers(a);
    return 0;
}

void print_odd_numbers(unsigned long long int data)
{
    int rem{};
    while (data > 0)
    {
        rem = data % 10;
        if (rem % 2 != 0)
        {
            std::cout << rem;
        }
        data /= 10;
    }
}