#include <iostream>
using namespace std;

int main()
{
    string country;
    cout << "Where do you live?" << endl;
    getline(cin, country);
    cout << "I've heard great things about " << country << ".I'd like to go sometime.";
    return 0;
}