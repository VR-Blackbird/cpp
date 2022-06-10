#include <iostream>
using namespace std;

void age_copy(const int *age);

int main()
{
    int age{21};
    cout << "Before function call " << age << endl;
    age_copy(&age);
    cout << "After function call " << age << endl;
    return 0;
}

void age_copy(const int* age)
{

    // ++(*age);  As the argument type is a pointer to a const value, we cannot deference and modify the value in age
    cout << "During function call " << *age << endl;
}