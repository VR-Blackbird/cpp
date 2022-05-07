#include <iostream>
using namespace std;

int main()
{
    // Postfix increment
    int value{10};
    cout << "Value during postfix increment : " << value++ << endl; // 10
    cout << value << endl;                                          // 11

    // Postfic decrement
    cout << "Value during postfix decrement : " << value-- << endl; // 11
    cout << value << endl;                                          // 10

    // Prefix Increment
    cout << "Value during prefix increment : " << ++value << endl; // 11
    cout << value << endl;                                         // 11

    // Prefix decrement
    cout << "Value during prefix decrement : " << --value << endl; // 10
    cout << value << endl;                                         // 10

    // Increment by an integer other than 1 (Compound assignment)
    // Addition
    value += 10;
    cout << value << endl;

    // Subtraction
    value -= 11;
    cout << value << endl;

    // Multiplication
    value *= 2;
    cout << value << endl;

    // Division
    value /= 3;
    cout << value << endl;

    // Modulus
    value %= 4;
    cout << value << endl;
}