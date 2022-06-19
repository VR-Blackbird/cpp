#include <iostream>

void summer(int *data1, int *data2)
{
    std::cout << (*data1 + *data2) << std::endl;
}

int main()
{
    int a{11};
    int b{12};
    double c{12.3};
    double d{12.2};
    summer(&a, &b);
    // summer(&c, &d); Pointers can't do implicit conversions
    return 0;
}