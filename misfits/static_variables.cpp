#include <iostream>

// Static variable used inside a function

unsigned int return_count()
{
    // unsigned int counting{0};    Lifetime is only within this function and it is killed after function exits the stack
    static unsigned int counting{0}; // Lifetime is throughout program execution
    counting++;
    return counting;
}

// Static variable referenced

// Since a static variable is available throughout the program execution, it can be referenced

unsigned int &return_count_reference()
{
    // unsigned int counting{0};    Lifetime is only within this function and it is killed after function exits the stack
    static unsigned int counting{0}; // Lifetime is throughout program execution
    counting++;
    return counting;
}

int main()
{
    for (size_t i{}; i < 10; ++i)
    {
        unsigned int &ref = return_count_reference();
        ref++;
        std::cout << ref << std::endl;
    }

    std::cout << std::endl;

    for (size_t i{}; i < 10; ++i)
    {

        std::cout << return_count() << std::endl;
    }
    return 0;
}