#include "pet.h"

Dog::Dog(std::string p_name, int p_age, std::string owner_name) : name{p_name}, age{p_age}, owner{owner_name}
{
}

Cat::Cat(std::string c_name, int c_age) : name{c_name}, age{c_age}
{
}

void Cat::get_cat_details(const Dog &d)
{
    std::cout << d.owner << std::endl;
}