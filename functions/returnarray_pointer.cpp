#include <iostream>

const double *find_max_address(const double scores[], unsigned int size);

int main()
{
    double scores[]{11.2, 10.1, 13, 4, 93};
    const double *max_in = find_max_address(scores, std::size(scores));
    std::cout << *max_in << std::endl;
    return 0;
}

const double *find_max_address(const double scores[], unsigned int size)
{
    // std::cout << size << std::endl;
    const double *max_num{&scores[0]};
    for (size_t i{0}; i < size; ++i)
    {
        if (*max_num < scores[i])
        {
            max_num = &scores[i];
        }
    }
    return max_num;
}
