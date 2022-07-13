#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    int arr[num];
    cin >> num;
    for (unsigned int i{}; i < num; ++i)
    {
        int val{};
        cin >> val;
        arr[i] = val;
    }


    for (int i{num - 1}; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
