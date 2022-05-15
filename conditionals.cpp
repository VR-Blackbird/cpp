#include <iostream>
using namespace std;

const unsigned char red{0b100};
const unsigned char orange{0b010};
const unsigned char green{0b001};

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

void determine_signal(unsigned char signal_color)
{
    short int match{1};
    if ((signal_color & red))
    {
        cout << "Red" << endl;
    }
    else if ((signal_color & orange))
    {
        cout << "Orange" << endl;
    }
    else if ((signal_color & green))
    {
        cout << "Green" << endl;
    }
    else
    {
        cout << "Signal Malfunction" << endl;
    }
}

void determine_tool(int tool)
{

    if (tool == Pen)
    {
        std::cout << "Active tool is pen" << std::endl;
        // Do the actual painting
    }
    else if (tool == Marker)
    {
        std::cout << "Active tool is Marker" << std::endl;
    }
    else if (tool == Eraser)
    {
        std::cout << "Active tool is Eraser" << std::endl;
    }
    else if (tool == Rectangle)
    {
        std::cout << "Active tool is Rectangle" << std::endl;
    }
    else if (tool == Circle)
    {
        std::cout << "Active tool is Circle" << std::endl;
    }
    else if (tool == Ellipse)
    {
        std::cout << "Active tool is Ellipse" << std::endl;
    }
}

int main()
{
    unsigned char signal_color{0b010};
    int tool{Ellipse};
    determine_signal(signal_color);
    determine_tool(tool);
}