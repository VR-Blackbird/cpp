#include <iostream>
using namespace std;
double volume()
{

    // Your code will go below this line

    double width{10.0};
    double length{20.1};
    double height{4.5};
    // Your code will go above this line
    return width * length * height;
}

int main()
{

    double volume_of_cuboid = volume();
    cout << "The volume of a cuboid with given dimentions is : " << volume_of_cuboid << endl;
}
