#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main()
{

    int column_width{19};
    int value1{13};
    int value2{51};
    cout << left;
    cout << setw(column_width) << "Value" << setw(column_width) << "Decimal" << setw(column_width) << "Binary" << endl;
    cout << setw(column_width) << "Value1" << setw(column_width) << value1 << setw(column_width) << bitset<8>(value1) << endl;
    cout << setw(column_width) << "Value2" << setw(column_width) << value2 << setw(column_width) << bitset<8>(value2) << endl;

    // Logical AND
    int dec_value = (value1 & value2);
    cout << setw(column_width) << "Value1 & Value2" << setw(column_width) << dec_value << setw(column_width) << bitset<8>(dec_value) << endl;

    // Logical OR
    int dec_or = (value1 | value2);
    cout << setw(column_width) << "Value1 | Value2" << setw(column_width) << dec_or << setw(column_width) << bitset<8>(dec_or) << endl;

    // Logical NOT
    int dec_not = (~value1);
    cout << setw(column_width) << "Not of Value1" << setw(column_width) << dec_not << setw(column_width) << bitset<8>(dec_not) << endl;

    // Logical XOR
    int dec_xor = (value1 ^ value2);
    cout << setw(column_width) << "Value1 ^ Value2 " << setw(column_width) << dec_xor << setw(column_width) << bitset<8>(dec_xor) << endl;
}
