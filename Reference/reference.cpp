#include <iostream>
using namespace std;

int main()
{
    int major{10};
    int &major_reference{major}; // must declare and initialise in a single line
    major_reference = 90;        // Modifying original value through a reference
    cout << major_reference << endl;
    cout << major << endl; // Reference have the same address of roiginal variable

    // Range based for loops references

    int scores[]{1, 2, 3, 4, 5};

    // Will not change the original array
    for (auto score : scores)
    {
        score *= 10;
    }

    // Print out values

    for (auto score : scores)
    {
        cout << score << endl;
    }

    cout << "After update" << endl;
    // To change our original array ...use references

    for (auto &score : scores)
    {
        score *= 10;
    }

    // Print out values

    for (auto score : scores)
    {
        cout << score << endl;
    }

    return 0;
}