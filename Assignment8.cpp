#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    double width{20};
    double height{10};
    cout << "Welcome to territory control. Please type in your x and y positions" << endl;
    cout << "Enter x value : ";
    cin >> x;
    cout << "Enter y value : ";
    cin >> y;
    cout << "The point chosen is (" << x << ", " << y << ") " << endl;

    if (abs(x) < width / 2 && abs(y) < height / 2)
    {
        cout << "You are completely surrounded. Don't move!" << endl;
    }
    else
    {
        cout << "You're out of reach!" << endl;
    }
}