#include <iostream>
#include <cmath>
using namespace std;

double hexagon_area()
{

    // Your code will go below this line
    double side{6.7};

    double hex_area = (3 * sqrt(3)) / 2 * pow(side, 2);
    // Your code will go above this line

    return hex_area;
}

int main()
{

    cout << "The area of the hexagon is : " << hexagon_area() << endl;
}