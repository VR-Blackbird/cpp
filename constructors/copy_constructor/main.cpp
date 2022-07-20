#include <iostream>
#include "person.h"

int main()
{
    Person p1("benjamin", "mark", 14);
    Person p2(p1);
    p2.set_age(19);
    std::cout << *(p1.get_age()) << std::endl;
    std::cout << *(p2.get_age()) << std::endl;

    return 0;
}