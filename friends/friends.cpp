#include "friends.h"
#include <string.h>

Dog::Dog(int d_age, std::string d_name) : name{d_name}, age{d_age}
{
}

int Dog::get_age() const
{
    return this->age;
}