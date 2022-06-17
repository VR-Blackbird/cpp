#include <iostream>

double multidim_sum(double scores[][4], size_t size);

int main()
{
    double values[][4]{
        {1, 2, 3, 4},
        {5, 6, 7, 8}};

    std::cout << multidim_sum(values, 2);
    return 0;
}

double multidim_sum(double scores[][4], size_t size)
{
    double total_sum{};
    for (size_t i{}; i < size; ++i)
    {
        for (size_t j{}; j < 4; ++j)
        {
            total_sum += scores[i][j];
        }
    }
    return total_sum;
}