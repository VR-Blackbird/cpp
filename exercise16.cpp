#include <iostream>
using namespace std;

int *minimum_address(int data[], unsigned int size)
{

    int *min_address;

    // Don't modify anything above this line
    // Your code should go below this line
    // REMEMBER !ONLY POINTER ARITHMETIC SHOULD BE USED TO ACCESS ARRAY DATA

    int min_val{*data};
    for (size_t i{0}; i < size; ++i)
    {
        if (*(data + i) < min_val)
        {
            min_val = *(data + i);
            min_address = (data + i);
        }
    }
    return min_address;

    // Your code should go above this line
    // Don't modify anything below this line

    return min_address;
}

int main()
{
    int a[]{11, 2, 3, 4, 5, 6, 7, 1};
    int *ret_ptr{minimum_address(a, 8)};
    cout << ret_ptr << " " << *ret_ptr << endl;

    //Print distance of the minimum element from the beginning

    cout << *ret_ptr << " lies at a distance of " << (ret_ptr - a) << " metres from the beginning" << endl;
    return 0;
}