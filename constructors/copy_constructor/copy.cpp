#include "person.h"
#include <iostream>

Person::Person(const std::string &l_name, const std::string &f_name, int age_param) : last_name{l_name}, first_name(f_name), age{new int(age_param)}
{
}

Person::Person(const std::string &l_name, const std::string &f_name) : Person::Person(l_name, f_name, 12)
{
}

Person::Person(const std::string &l_name) : Person::Person(l_name, "remo", 13)
{
}
Person::Person(const Person &p1) : last_name{p1.get_lastname()}, first_name{p1.get_firstname()}, age{new int(*(p1.get_age()))}
{
}

Person::~Person()
{
    delete age;
}

void Person::set_firstname(const std::string &f_name)
{
    this->first_name = f_name;
}
void Person::set_lastname(const std::string &l_name)
{
    this->last_name = l_name;
}
void Person::set_age(int age)
{
    *(this->age) = age;
}

std::string Person::get_lastname() const
{
    return this->last_name;
}
std::string Person::get_firstname() const
{
    return this->first_name;
}
int *Person::get_age() const
{
    return this->age;
}
void Person::print_info() const
{
    std::cout << "First Name => " << this->first_name << std::endl
              << "Last Name => " << this->last_name << std::endl
              << "Age => " << *(this->age) << std::endl;
}