#include <iostream>
#include <cmath> //We have all the math operations in this library. Check cmath documentation.
using namespace std;

int main()
{

    float value{1.542};
    int power1{10};
    float power2{2.99573};
    cout << "Floor of the value : " << floor(value) << endl;
    cout << "Ceil of the value : " << ceil(value) << endl;
    cout << "Exponent : " << exp(value) << endl;
    cout << "Power of a value : " << pow(power1, power2) << endl;
    cout << "log function --- reverse of power of e : " << log(20) << endl;
    cout << "Log power of 2 : " << log2(18) << endl;
    cout << "Log power of 10 : " << log10(100) << endl;
    cout << "Square root of a value : " << sqrt(3) << endl;
    cout << "Rounded value : " << round(3.145) << endl;
    cout << "Rounded to upper limit : " << round(3.5) << endl;
}