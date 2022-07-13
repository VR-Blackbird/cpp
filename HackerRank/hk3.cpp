#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a, int *b);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << a << std::endl;
    cout << b << std::endl;
    return 0;
}

void update(int *a, int *b)
{
    *a += *b;
    *b = abs(*(a) - *(b));
}