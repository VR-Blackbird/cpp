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
    int tool{Rectangle};
    switch (tool)
    {
    case Pen:
        cout << "Pen chosen";
        break;
    case Eraser:
        cout << "Eraser chosen";
        break;
    case Marker:
        cout << "Marker chosen";
        break;
    case Rectangle:
    case Circle:
    case Ellipse:
        cout << "Drawing shapes";
        break;
    default:
        break;
    }
}