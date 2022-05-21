#include <iostream>
using namespace std;
void unique_numbers(int numbers[], unsigned int collection_size)
{

    // Don't modify anthing above this line
    // Your code should go below this line

    int unique{};
    bool found{false};
    for (size_t i{0}; i < collection_size; ++i)
    {
        found = false;
        for (size_t j{0}; j < collection_size; ++j)
        {
            if (i != j)
            {
                if (numbers[i] == numbers[j])
                {
                    found = true;
                    break;
                }
            }
        }
        if (!found)
        {
            cout << numbers[i] << endl;
        }
    }

    // Your code should go above this line
    // Don't modify anything below this line
}

int main()
{
    int numbers[]{1, 2, 11, 10, 4, 3, 4, 5, 6, 8};
    unique_numbers(numbers, 10);
}