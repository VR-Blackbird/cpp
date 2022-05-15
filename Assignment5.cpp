#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Please enter your age: " << endl;
    cin >> age;
    if (age >= 21)
    {
        if (age <= 39)
        {
            cout << "You are eligible for the treatment";
        }
        else
        {
            cout << "Too old for the treatment";
        }
    }
    else
    {
        cout << "Too young for the treatment";
    }
}