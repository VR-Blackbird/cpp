#include <iostream>
using namespace std;

int main()
{
    int dec_number = 20;
    int oct_number = 017;
    int bin_number = 0b1000101;
    double hex_number = 0xFFFFFFFD;

    cout << "The different numbers are: " << dec_number << endl
         << oct_number << endl
         << bin_number << endl
         << hex_number << endl;

    cout << "Integer occupies : " << sizeof(int) << " Bytes" << endl;
    cout << "Float occupies : " << sizeof(float) << " Bytes" << endl;

    return 0;
}