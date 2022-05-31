#include <iostream>
using namespace std;
void unique_numbers(int numbers[], unsigned int collection_size)
{

    // Don't modify anthing above this line
    // Your code should go below this line

    int unique{};
    bool found{false};
    int checks[30]{};
    for (size_t i{0}; i < collection_size; ++i)
    {
        found = false;
        for (int value : checks)
        {
            if (numbers[i] == value)
            {
                found = true;
            }
        }
        if (found == false)
        {
            checks[++unique] = numbers[i];
        }
    }
    cout << "The collection has " << unique << " unique elements, they are ";
    for (size_t i{1}; i < unique + 1; ++i)
    {
        cout << checks[i] << " ";
    }

    // Your code should go above this line
    // Don't modify anything below this line
}

int main()
{
    int numbers[]{11, 11, 11, 13, 14, 13, 4, 4, 6, 8};
    unique_numbers(numbers, 10);
}