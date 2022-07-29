#include <iostream>
#include "friends.h"

void get_dog_info()
{
    Dog d2(12, "Karl");
    std::cout << d2.name << std::endl;
}

void get_const_dog(const Dog &d)
{
    std::cout << d.name << std::endl;
}
int main()
{
    Dog d1(20);
    std::cout << d1.get_age() << std::endl;
    get_dog_info();
    get_const_dog(d1);
}