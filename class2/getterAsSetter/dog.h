#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog
{
public:
    Dog() = default;
    Dog(std::string name_param, std::string breed_param, unsigned int age_param);

    // Getters
    std::string &get_name();
    std::string &get_breed();
    unsigned int &get_age();

    // Const member function declarations
    const std::string &get_name() const;
    const std::string &get_breed() const;
    const unsigned int &get_age() const;

    // Setters
    void set_name(std::string name_param);
    void set_breed(std::string breed_param);
    void set_age(unsigned int age);

    // Utility functions
    void print_info();

private:
    std::string m_name;
    std::string m_breed;
    unsigned int m_age;
};

#endif // DOG_H