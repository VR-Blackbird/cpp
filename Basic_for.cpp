#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const size_t Count{10};
    for (size_t i{1}; i <= Count; ++i) // Size_t is a non negative data type (unsigned integer)
    {
        cout << pow(i, 2) << endl;
    }

    cout << endl;
    for (size_t i{1}; i <= Count; ++i) // Curly braces can be omitted if we have only one statement in loop body
        cout << pow(i, 3) << endl;
}