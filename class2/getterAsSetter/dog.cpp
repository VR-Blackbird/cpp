#include "dog.h"

Dog::Dog(std::string name_param, std::string breed_param, unsigned int age_param)
{
    m_name = name_param;
    m_breed = breed_param;
    m_age = age_param;
}

// Getters that can work as setters
std::string &Dog::get_name()
{
    // return m_name;
    return this->m_name;
}
std::string &Dog::get_breed()
{
    return m_breed;
}
unsigned int &Dog::get_age()
{
    return m_age;
}

// Const member functions

const std::string &Dog::get_name() const
{
    // return m_name;
    return this->m_name;
}
const std::string &Dog::get_breed() const
{
    return m_breed;
}
const unsigned int &Dog::get_age() const
{
    return m_age;
}

// Setters
void Dog::set_name(std::string name_param)
{
    // m_name = name_param;
    this->m_name = name_param;
}
void Dog::set_breed(std::string breed_param)
{
    m_breed = breed_param;
}
void Dog::set_age(unsigned int age)
{
    m_age = age;
}

// Utility functions
void Dog::print_info()
{
    std::cout << "Dog (" << this << ") : [ name : " << this->m_name
              << ", breed : " << this->m_breed
              << ", age : " << this->m_age << "]" << std::endl;
}