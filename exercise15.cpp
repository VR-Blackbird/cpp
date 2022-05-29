#include <iostream>
using namespace std;

void shoot_forward(int data[], unsigned int offset)
{

    // Don't modify anything above this line
    // Your code will go below this line
    int *int_ptr{data + offset};

    cout << "The element " << offset << " slots away from the beginning is : " << *int_ptr;

    // Your code will go above this line
    // Don't modify anything below this line
}

int main()
{
    int data[]{13, 21, 3, 41, 22, 55};
    shoot_forward(data, 3);
    return 0;
}