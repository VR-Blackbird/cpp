#ifndef FRIEND
#define FRIEND
#include <iostream>
#include <string.h>
class Dog
{
private:
    std::string name;
    int age;

public:
    Dog() = default;
    Dog(int d_age, std::string d_name = "Jimmy");
    int get_age() const;
    friend void get_dog_info();
    friend void get_const_dog(const Dog &d);
};

#endif