#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// void create_matrix(const arr_size, )

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    int **darr = new int *[n];

    for (int i{0}; i < n; i++)
    {
        int s1;
        cin >> s1;
        darr[i] = new int[s1];
        // int arr[s1];
        for (int j{0}; j < s1; j++)
        {
            int element{};
            cin >> element;
            darr[i][j] = element;
        }
        // darr[i] = arr;
    }

    for (int i{}; i < q; ++i)
    {
        int a, b;
        cin >> a >> b;
        cout << darr[a][b] << endl;
    }

    return 0;
}
