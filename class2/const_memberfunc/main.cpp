#include <iostream>
#include "dog.h"

void function_taking_pointer_to_const_dog(const Dog *const_p_dog)
{
    // const_p_dog->set_name("Hillo"); // Error : Expected
    const_p_dog->print_info(); // Error : Not expected
}
int main()
{

    const Dog dog1("Fluffy", "Shepherd", 2);

    // Direct access
    dog1.print_info();
    std::cout << dog1.get_age() << std::endl;
    std::cout << dog1.get_name() << std::endl;
    // dog1.set_age(10); Compiler error

    // dog1.set_name("Milou"); // Compiler error

    // Pointer to non const
    // Dog * dog_ptr = &dog1;

    // Non const reference
    // Dog& dog_ref = dog1;

    // Pointer to const
    const Dog *const_dog_ptr = &dog1;
    // const_dog_ptr->set_name("Milou"); // Expect
    std::cout << const_dog_ptr->get_name() << std::endl;

    // Const reference
    const Dog &const_dog_ref = dog1;
    // const_dog_ref.set_name("Milou"); // Expected
    std::cout << const_dog_ref.get_breed() << std::endl;

    function_taking_pointer_to_const_dog(&dog1);

    return 0;
}