#include <iostream>

template <int size, typename T>
int find_value(T collection[], T value_to_find)
{
    for (T i{}; i < size; ++i)
    {
        if (collection[i] == value_to_find)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int collection[]{11, 23, 31, 45, 54};
    std::cout << find_value<5, int>(collection, 31) << std::endl;
    return 0;
}