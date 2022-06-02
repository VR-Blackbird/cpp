#include <iostream>
using namespace std;

int main()
{
    cout << boolalpha;
    cout << "Alphanumeric check : " << isalnum('(') << endl;
    cout << "Blank characters : " << isblank(' ') << endl;
    cout << "Lower case characters : " << islower('a') << endl;
    cout << "Upper case characters : " << isupper('A') << endl;
    cout << "Digits : " << isdigit('1') << endl;
    cout << "Convert to a lower case : " << static_cast<char> (tolower('+')) << endl;
    cout << "Convert to a upper case : " << static_cast<char> (toupper('l')) << endl;
}