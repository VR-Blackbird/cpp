#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    unsigned short int dat{25};
    cout << showbase;
    cout << "Decimal " << dec << dat << endl;
    cout << "Octal " << oct << dat << endl;
    cout << "Hex " << hex << dat << endl;
    cout << "Binary " << bitset<16>(dat) << endl; // Print in binary

    // Shift operators
    cout << noshowbase;
    cout << "------------------Shifting -----------------" << endl;
    cout << "Binary " << bitset<16>(dat) << endl;
    cout << "Decimal " << dec << dat << endl;
    // cout << "Size of short int : " << sizeof(short int) << endl;
    dat = static_cast<unsigned short>(dat << 2);
    cout << "Binary " << bitset<16>(dat) << endl;
    cout << "shifted left : " << dat << endl;
    // cout << "Size : " << dec << sizeof((dat << 2)) << endl; // Implicit coversion to int as bitwise operations does not support values of sie less than int
    dat = static_cast<unsigned short>(dat << 2);
    cout << "Binary " << bitset<16>(dat) << endl;
    cout << "shifted left : " << dat << endl;

    // Shift right
    dat = static_cast<unsigned short>(dat >> 2);
    cout << "Binary " << bitset<16>(dat) << endl;
    cout << "Shifted right " << dat << endl;
}