#include "copy.h"

Person::Person(std::string l_name, std::string f_name, int *age_param) : lastname{l_name}, first_name{f_name}, age{age_param}
{
}

Person::Person(const Person &some_person) : lastname(some_person.get_lname()), first_name(some_person.get_fname()), age(new int(*(some_person.get_age())))
{
}

std::string Person::get_fname() const
{
    return first_name;
}
std::string Person::get_lname() const
{
    return lastname;
}
int *Person::get_age() const
{
    return age;
}