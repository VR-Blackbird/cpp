#include "reverser.h"
#include <cassert>
Reverser::Reverser(std::initializer_list<int> list)
{
    assert(list.size() == 5);
    lst = list;
}

void Reverser::print_reverse()
{
    for (unsigned int i{5}; i > 0; --i)
    {
        std::cout << *(lst.begin() + (i - 1)) << std::endl;
    }
}