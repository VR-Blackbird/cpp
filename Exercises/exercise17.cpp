#include <iostream>
using namespace std;
void merge_arrays(int data1[], int data2[],
                  unsigned int size1, unsigned int size2)
{

    // Don't modify anything above this line
    // Your code will go below this line
    int *d_ptr{new (nothrow) int[size1 + size2]{}};

    for (size_t i{}; i < (size1 + size2); ++i)
    {
        if (i < size1)
        {
            d_ptr[i] = data1[i];
        }
        else
        {
            d_ptr[i] = data2[i - size1];
        }
    }

    for (size_t i{}; i < (size1 + size2); ++i)
    {
        cout << d_ptr[i] << " ";
    }

    // Your code will go above this line
    // Don't modify anything below this line
}

int main()
{
    int data1[4]{1, 2, 3, 4};
    int data2[4]{5, 6, 7, 8};
    merge_arrays(data1, data2, 4, 4);
    return 0;
}