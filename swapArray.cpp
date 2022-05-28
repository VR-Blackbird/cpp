#include <iostream>
using namespace std;

int main()
{
    int arr1[5]{1, 2, 3, 4, 5};
    int arr2[5]{6, 7, 8, 9, 10};

    // Manual method
    // int temp = 0;
    // for (size_t i{0}; i < 5; ++i)
    // {
    //     temp = arr1[i];
    //     arr1[i] = arr2[i];
    //     arr2[i] = temp;
    // }

    // Swapping using pointers
    int *parr1{arr1};
    int *parr2{arr2};

    int *temp;

    temp = parr1;
    parr1 = parr2;
    parr2 = temp;

    for (size_t i{0}; i < 5; ++i)
    {
        cout << parr1[i] << " " << parr2[i] << endl;
    }

    return 0;
}