#include <iostream>
using namespace std;

int *maximum_address(int data[], unsigned int size)
{

    int *max_address;

    // Don't modify anything above this line
    // Your code will go below this line
    int *pt{data};
    int max_num{0};
    cout << pt << endl;
    for (size_t i{0}; i < size; ++i)
    {
        if (max_num < data[i])
        {
            max_num = data[i];
            max_address = &data[i];
        }
    }

    // Your code should go above this line
    // Don't modify anything after this line
    return max_address;
}

int main()
{
    int dat[9]{4, 2, 1, 3, 5, 6, 4, 8, 5};
    cout << maximum_address(dat, 9);
}