#include <iostream>
using namespace std;

int main()
{
    string fullname;
    int age;
    cout << "Please enter a name : " << endl;
    getline(cin, fullname);
    cin >> age;
    cout << "Hello, " << fullname << " "
         << "you are " << age << " years old.";
    cerr << "This is a error message" << endl;
    clog << "This is a log message";
    return 0;
}