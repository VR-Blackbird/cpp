#include <iostream>
using namespace std;

bool is_palindrome(unsigned long long int num)
{

    int reminder;
    unsigned long long int reversed{0};
    int temp = num;
    while (temp > 0)
    {
        reminder = temp % 10;
        reversed = (reversed * 10) + reminder;
        temp = temp / 10;
    }

    if (reversed == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << boolalpha;
    cout << is_palindrome(1412) << endl;

    return 0;
}