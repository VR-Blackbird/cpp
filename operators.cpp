#include <iostream>

using namespace std;

int main()
{

    // Relational operators
    int num1{24};
    int num2{24};

    cout << boolalpha;
    cout << "Num1 < Num2 : " << (num1 < num2) << endl;
    cout << "Num1 > Num2 : " << (num1 > num2) << endl;
    cout << "Num1 <= Num2 : " << (num1 <= num2) << endl;
    cout << "Num1 >= Num2 : " << (num1 >= num2) << endl;
    cout << "Num1 == Num2 : " << (num1 == num2) << endl;

    // Logical operators
    bool oper1{true};
    bool oper2{false};
    cout << "AND operator : " << (oper1 && oper2) << endl;
    cout << "OR operator : " << (oper1 || oper2) << endl;
    cout << "Not operator : " << (!oper1) << endl;
}