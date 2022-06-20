#include <iostream>

void is_sum_even(int data[], unsigned int size, bool &result);

int main()
{
    bool is_even{false};
    int arr[]{1, 2, 3, 4, 5, 6, 5, 3, 1};
    is_sum_even(arr, std::size(arr), is_even);
    std::cout << std::boolalpha ;
    std::cout << is_even << std::endl;
    return 0;
}

void is_sum_even(int data[], unsigned int size, bool &result)
{
    int sum{};
    for (size_t i{}; i < size; ++i)
    {
        sum += data[i];
    }
    if (sum % 2 == 0)
    {
        result = true;
    }
    else
    {
        result = false;
    }
}