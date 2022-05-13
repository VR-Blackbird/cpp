#include <iostream>
using namespace std;

int main()
{
    // Implicit conversions from smallest type to largest type
    double price{45.6};
    int units{11};
    double total = price * units;

    cout << sizeof(price + units) << endl;

    // Explicit conversions

    int sum, sum1;
    sum = static_cast<int>(price) + static_cast<int>(total);
    sum1 = static_cast<int>(price + total);
    cout << sum << "  ---   " << sum1 << endl;
}