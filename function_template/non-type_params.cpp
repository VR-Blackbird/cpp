#include <iostream>

template <int threshold, typename T>
bool is_valid(T collection[], size_t size)
{
    T sum = 0;
    for (size_t i{}; i < size; ++i)
    {
        sum += collection[i];
    }
    return (sum > threshold) ? true : false;
}

int main()
{
    double collection[]{10.3, 12.1, 43.4};
    std::cout << is_valid<50, double>(collection, 3);
    return 0;
}