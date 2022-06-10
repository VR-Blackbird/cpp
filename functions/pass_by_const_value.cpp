#include <iostream>

using namespace std;

void pass_const_value(const int age);

int main()
{
    int age{19};
    pass_const_value(age);

    return 0;
}

void pass_const_value(const int age)
{
    // ++age; Cannot modify as the copy is a const int value as defined in the function definition

    cout << age << endl;
}