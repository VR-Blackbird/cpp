#include <iostream>

using namespace std;

int main()
{
    bool red_light{true};
    bool green_light{false};
    if (red_light)
    {
        cout << "Red light is turned ON !" << endl;
    }
    else
    {
        cout << "Green light is turned ON !" << endl;
    }
    cout << "Memory consumed by a boolean value is " << sizeof(bool) << " Byte(s)." << endl;
    // Bool values print either 1(true) or 0(false)

    cout << "Green Light : " << green_light << endl;
    cout << "Red Light : " << red_light << endl;

    // Printing true or false instead of numbers 0 and 1

    cout << boolalpha;
    cout << "Green Light : " << green_light << endl;
    cout << "Red Light : " << red_light << endl;
}