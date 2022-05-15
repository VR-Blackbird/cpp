#include <iostream>
using namespace std;

int great{};
int n1{92};
int n2{43};
bool fast{false};
int main()
{
    great = (n1 > n2) ? n1 : n2;
    cout << great << endl;
    int speed{fast ? 300 : 150};
    cout << speed << endl;
}