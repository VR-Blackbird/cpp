#include <iostream>

int maximum_of_array(int *elements, size_t size)
{
    int maximum{0};
    for (size_t i{}; i < size; ++i)
    {
        if (*(elements + i) > maximum)
        {
            maximum = *(elements + i);
        }
    }
    return maximum;
}

double maximum_of_array(double *elements, size_t size)
{
    double maximum{0};
    for (size_t i{}; i < size; ++i)
    {
        if (*(elements + i) > maximum)
        {
            maximum = *(elements + i);
        }
    }
    return maximum;
}

int main()
{
    int elements[]{1, 2, 3, 4, 5, 6};
    double elements_double[]{1.1, 22.2, 3.3, 4, 5, 6};
    std::cout << maximum_of_array(elements, std::size(elements)) << std::endl;
    std::cout << maximum_of_array(elements_double, std::size(elements)) << std::endl;
    return 0;
}