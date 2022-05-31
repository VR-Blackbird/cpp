#include <iostream>
using namespace std;

int main()
{
    int integral_check;
    cout << "Enter a number : " << endl;
    cin >> integral_check;
    if (integral_check % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}