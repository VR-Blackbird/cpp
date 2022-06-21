#include <iostream>

int *return_max_number(int *a, int *b)
{
    if (*a > *b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a{100};
    int b{125};
    int *max_number = return_max_number(&a, &b);
    std::cout << ++(*max_number) << std::endl;
    return 0;
}