#include <iostream>
using namespace std;

bool go{true};
int main()
{
    if (int speed{190}; go)
    {
        if (speed > 100)
        {
            cout << "Speeding up " << endl;
        }
        else
        {
            cout << "Slow down " << endl;
        }
    }
    else
    {
        cout << speed << endl;
        cout << "Bike not started " << endl;
    }
    // cout << speed << endl; Can't access speed variable outside the if block
}