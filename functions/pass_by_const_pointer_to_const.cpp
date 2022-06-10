#include <iostream>
using namespace std;

void age_copy(const int *const age);

int main()
{
    int age{21};
    cout << "Before function call " << age << endl;
    age_copy(&age);
    cout << "After function call " << age << endl;
    return 0;
}

void age_copy(const int *const age)
{

    // ++(*age);
    // age += 1; Cannpt change the pointer location as well
    cout << "During function call " << *age << endl;
}