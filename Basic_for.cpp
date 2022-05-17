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
    for (size_t i{1}; i <= Count; ++i) // Curly braces can be omitted if we have only one statement in loop -body
        cout << pow(i, 3) << endl;

    // Range based for loops
    int values[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int value : values)
    {
        cout << value << endl;
    }

    cout << endl;
    for (auto value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        cout << value << endl;
    }
    cout << endl;
    // Indexing in range based for loops

    for (size_t i{}; i < 10; ++i)
    {
        cout << values[i] << endl;
    }

    cout << values[19]; // Out of index prints garbage values
}