#include <iostream>

using namespace std;

int main()
{

    // Sum of integers

    int sum1{100};
    int sum2{900};
    cout << "Addition of integers : " << sum1 + sum2 << endl;

    // Subtraction
    cout << "Subtraction of integers : " << sum1 - sum2 << endl;

    // Multiplication
    cout << "Multiplication of integers : " << sum1 * sum2 << endl;

    // Division
    cout << "Division of integers : " << static_cast<float>(sum1) / static_cast<float>(sum2) << endl;

    // Modulo
    cout << "Modulus of integers : " << sum2 % sum1 << endl;
}