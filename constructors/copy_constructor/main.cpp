#include <iostream>
#include <string.h>
#include "copy.h"

int main()
{
    int age{26};
    const Person p1("king", "john", &age);
    Person p2(p1);
    p1.print_info();
    std::cout << std::endl
              << std::endl;
    p2.print_info();
    std::cout << std::endl;

    p2.set_age(2);
    p1.print_info();
    std::cout << std::endl;
    p2.print_info();
    std::cout << std::endl;

    return 0;
}