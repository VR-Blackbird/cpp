#ifndef PET
#define PET
#include <iostream>
#include <string.h>

class Dog
{
public:
    Dog(std::string p_name, int p_age, std::string owner_name);
    friend class Cat;

private:
    std::string name;
    int age;
    std::string owner;
};

class Cat
{
public:
    Cat(std::string c_name, int c_age);
    void get_cat_details(const Dog &d);

private:
    std::string name;
    int age;
    int legs;
};

#endif