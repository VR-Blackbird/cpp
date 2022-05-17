#include <iostream>
using namespace std;

int main()
{
    for (unsigned char i{0}; i < 255; i++)
    {
        auto integer_type = static_cast<int>(i);
        if (integer_type > 64 && integer_type < 91)
        {
            cout << i;
            if (integer_type != 90)
            {
                cout << " ";
            }
        }
    }
}