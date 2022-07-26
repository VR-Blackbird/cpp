#ifndef Reverse
#define Reverse
#include <iostream>
class Reverser
{
public:
    Reverser(std::initializer_list<int> list);
    void print_reverse();

private:
    std::initializer_list<int> lst;
};

#endif