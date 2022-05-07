#include <iostream>

using namespace std;

int main()
{

    int a{7};
    int b{4};
    int c{2};
    int d{12};
    int e{5};
    int f{9};
    int g{10};
    int result = a + b * c - d / e - f + g;
    cout << result << endl;
    result = a / b * c + d - e + f;
    cout << result << endl;
    result = (a + b) * c - (d / e) - f + g;
    cout << result << endl;
}