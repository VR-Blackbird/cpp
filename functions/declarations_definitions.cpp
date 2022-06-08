#include <iostream>

using namespace std;

// Function declaration
int maximum_number(int a, int b);
int minimum_number(int a, int b);

// Main function
int main()
{
    cout << maximum_number(10, 90) << endl;
    cout << minimum_number(10, 90) << endl;
    return 0;
}

// Function definition
int minimum_number(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int maximum_number(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}