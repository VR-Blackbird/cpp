#include <iostream>
using namespace std;

unsigned int digit_sum(unsigned int data)
{

    int s{};
    while (data > 10)
    {
        s += data % 10;
        data /= 10;
    }
    s += data;
    return s;
}

int main()
{
    unsigned int v{62727289};
    cout << digit_sum(v);
    return 0;
}