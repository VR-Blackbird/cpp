#include <iostream>
using namespace std;

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

// Switch does not work with types other than integral types and enum
int main()
{
    int tool{Pen};
    switch (double mark_size{13.6}; 90) // Initialising a variable called marker_size whose scope is within switch block
    {
    case Pen:
        cout << "Pen chosen\n"
             << mark_size;
        break;
    case Eraser:
        cout << "Eraser chosen\n"
             << mark_size;
        break;
    case Marker:
        cout << "Marker chosen\n"
             << mark_size;
        break;
    case Rectangle:
    case Circle:
    case Ellipse:
        cout << "Drawing shapes";
        break;
    default:
        cout << "No valid option specified" << endl;
        break;
    }
}