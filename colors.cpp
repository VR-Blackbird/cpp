#include <iostream>
using namespace std;

const unsigned int red_color{0xFF000000};
const unsigned int green_color{0x00FF0000};
const unsigned int blue_color{0x0000FF00};
const unsigned int alpha{0x000000FF};

const unsigned int my_color{0xAABBCD00};

int main()
{

    // Color ranges from 0-255 in decimal
    cout << hex << showbase;
    cout << "Red is : " << ((my_color & red_color) >> 24) << endl;
    cout << "Green is : " << ((my_color & green_color) >> 16) << endl;
    cout << "Blue is : " << ((my_color & blue_color) >> 8) << endl;
    cout << "Alpha is : " << ((my_color & alpha) >> 0) << endl;
}