// What difference?

// References, we can't change it to point somewhere else whereas we can change our pointer to point to another address

// We definitely have to initialise while declaring for reference. Whereas for pointers, we can leave it uninitialised ..it contains garbage

#include <iostream>
using namespace std;

int main()
{
    int major{99};
    int *ptr_major{&major};
    int &ref_major{major};

    cout << ptr_major << endl; // Cannot directly print the values
    cout << *ptr_major << endl;
    cout << ref_major << endl; // Can directly print the values

    // Changing values

    *ptr_major = 100;
    cout << *ptr_major << endl;

    ref_major = 190;
    cout << major << endl;
    cout << ref_major << endl;

    // Changing address

    int new_major{88};
    ptr_major = &new_major;

    cout << *ptr_major << endl;

    ref_major = new_major;
    cout << major << endl;
    cout << ref_major << endl;

    // Checking address after trying to change address of reference

    cout << &new_major << endl;
    cout << &major << endl;
    cout << &ref_major << endl; // Addresses are different which means ref_major got re-assigned
    cout << major << endl;


    //Cannot reference a const variable

    return 0;
}