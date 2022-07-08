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

    return 0;
}