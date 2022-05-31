#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a[]{11, 2, 3, 4, 5, 6, 7, 8};
    int *ptr1{a};
    int *ptr2{a + 2};

    cout << ptr1 - ptr2 << endl; // Result is an integer representing the distance between two pointers

    // Consistent way to represent pointer differences

    ptrdiff_t pt_diff = ptr1 - ptr2;
    cout << pt_diff << endl;
    cout << sizeof(pt_diff) << endl;
    cout << sizeof(ptrdiff_t) << endl;   //Size of a Pointer Diff is also similar to that of a pointer 8bytes
    return 0;
}