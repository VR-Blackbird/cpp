#include <iostream>

using namespace std;

int main()
{
    int a[]{11, 2, 3, 4, 5, 6, 7, 8};
    int *int_ptr = a;
    cout << int_ptr << endl;
    int_ptr += 4;
    cout << int_ptr << endl; // Navigating to next element address
    cout << *int_ptr;

    // Arithmetic in a loop print all elements
    cout << endl;
    cout << endl;
    int *new_ptr{a};
    // Using pointers

    // for (size_t i{0}; i < size(a); ++i)
    // {
    //     cout << new_ptr << " " << *new_ptr << endl;
    //     new_ptr++;
    // }

    // Using array name itself

    for (size_t i{0}; i < size(a); ++i)
    {
        cout << *(a + i) << endl; // Not modifying anything, just using array a in the expression
    }

    // Print in reverse order using array name
    // While printing in reverse don't do i>=0 as it will always pass since the type is an unsigned integer
    cout << endl;
    for (size_t i{size(a)}; i > 0; --i)
    {
        cout << *(a + i - 1) << endl; // Not modifying anything, just using array a in the expression
    }
    cout << endl;

    // Print in reverse using pointers

    // Re-initialise the pointer
    new_ptr = a + size(a) - 1;
    for (size_t i{0}; i < size(a); ++i)
    {
        cout << *(new_ptr--) << endl;
    }

    return 0;
}