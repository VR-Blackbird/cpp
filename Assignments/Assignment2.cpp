#include <iostream>
using namespace std;

double celsius_to_farenheit(double cel)
{
    double result = (9.0 / 5) * cel + 32;
    return result;
}

int main()
{

    double celcius{};
    cout << "Enter the value in celsius : " << endl;
    cin >> celcius;
    cout << celcius << " Celsius is " << celsius_to_farenheit(celcius) << " Fahrenheit";
    return 0;
}