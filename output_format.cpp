#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;

int main()
{
    // New line
    cout << "Line 1" << endl;
    cout << "Line 2" << endl;

    // Width
    int col_width = 12;
    cout << setfill('.'); // Fill empty spaces with .
    cout << left; // Left justification for column width
    cout << setw(col_width) << "Name" << setw(col_width) << "Age" << endl;
    cout << setw(col_width) << "Groose" << setw(col_width) << 10 << endl;
    cout << setw(col_width) << "Brudus" << setw(col_width) << 15 << endl;
}