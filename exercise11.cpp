
#include <iostream>
using namespace std;
bool is_collection_sorted(int numbers[], unsigned int collection_size)
{

    // Don't modify anything above this line
    // Your code will go below this line

    bool sorted{true};

    for (size_t i{0}; i < collection_size - 1; ++i)
    {
        if (numbers[i] > numbers[i + 1])
        {
            sorted = false;
            break;
        }
    }

    // Your code will go above this line
    // Don't modify anything below this line
    return sorted;
}

int main()
{
    int new_arr[]{1, 2, 2, 4, 5, 35};
    cout << boolalpha;
    cout << is_collection_sorted(new_arr, size(new_arr));
}