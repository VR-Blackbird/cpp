#include <iostream>
#include "dog.h"

int main()
{

    Dog dog1("Fluffy", "Shepherd", 2);

    // Direct access
    dog1.print_info();
    std::cout << dog1.get_age() << std::endl;
    std::cout << dog1.get_name() << std::endl;
    dog1.get_age() = 20;
    std::cout << dog1.get_age() << std::endl;

    const Dog dog2("Ffy", "She", 21);
    std::cout << dog2.get_age() << std::endl;

    // dog1.set_age(10); Compiler error

    // dog1.set_name("Milou"); // Compiler error

    // Pointer to non const
    // Dog * dog_ptr = &dog1;

    // Non const reference
    // Dog& dog_ref = dog1;

    return 0;
}