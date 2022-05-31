#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main()
{
    int column_width{10};
    unsigned short int a{19};

    // Compound shift and logics.   Won't work on unary operators like negations (~)
    cout << left;
    cout << setw(column_width) << "Decimal" << setw(column_width) << "Binary" << endl;
    cout << setw(column_width) << a << setw(column_width) << bitset<16>(a) << endl;
    a <<= 1;
    cout << setw(column_width) << a << setw(column_width) << bitset<16>(a) << endl;
    a >>= 1;
    cout << setw(column_width) << a << setw(column_width) << bitset<16>(a) << endl;

    // Logical AND
    a &= 0b101;
    cout << setw(column_width) << a << setw(column_width) << bitset<16>(a) << endl;

    // Logical OR

    a |= 0b111111;
    cout << setw(column_width) << a << setw(column_width) << bitset<16>(a) << endl;

    // Logical XOR

    a ^= 0b101010;
    cout << setw(column_width) << a << setw(column_width) << bitset<16>(a) << endl;
}