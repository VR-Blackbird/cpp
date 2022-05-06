#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int dec_number = 20;
    int oct_number = 017;
    int bin_number = 0b1000101;
    double hex_number = 0xFFFFFFFD;
    int negative_number{-10};
    signed int signed_number{10};
    unsigned int unsigned_number{1};

    // Fractions
    double num1 = -10;
    double num2 = 23;
    double random{};
    double div = num1 / num2;
    double inf = num1 / random;
    cout << "Infinity is : " << inf << endl;

    cout << "The div output is : " << div << endl;

    //
    cout << "The different numbers are: " << dec_number << endl
         << oct_number << endl
         << bin_number << endl
         << hex_number << endl;

    cout << "Integer occupies : " << sizeof(int) << " Bytes" << endl;
    cout << "Float occupies : " << sizeof(float) << " Bytes" << endl;
    cout << "dec_number variable occupies : " << sizeof(dec_number) << " Bytes" << endl;
    cout << "The negative number is : " << negative_number << endl;
    cout << "Signed number is : " << signed_number << endl;
    cout << "Unsigned number is : " << unsigned_number << endl;
    return 0;
}