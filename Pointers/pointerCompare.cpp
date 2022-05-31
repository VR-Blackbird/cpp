#include <iostream>
using namespace std;

int main()
{
    int a[]{11, 2, 3, 4, 5, 6, 7, 8};
    int *ptr1{&a[0]};
    int *ptr2{&a[5]};

    cout << boolalpha << endl;
    cout << (ptr1 > ptr2) << endl;
    cout << (ptr1 < ptr2) << endl;
    cout << (ptr1 <= ptr2) << endl;
    cout << (ptr1 >= ptr2) << endl;
    cout << (ptr1 == ptr2) << endl;
    cout << (ptr1 != ptr2) << endl;

    return 0;
}