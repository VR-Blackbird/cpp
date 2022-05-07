#include <iostream>
using namespace std;

int main()
{

    double length{0};
    double width{0};
    double height{0};
    cout << "Welcome to box calculator. Please type length, width and height information : " << endl;
    cout << "Length : ";
    cin >> length;
    cout << "Width : ";
    cin >> width;
    cout << "Height : ";
    cin >> height;

    auto base = width * length;
    auto volume = base * height;
    cout << "The base area is : " << base << endl;
    cout << "The volume is : " << volume << endl;
}