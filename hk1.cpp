#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>

using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    unsigned int a;
    unsigned int b;
    cin >> a >> b;
    for (unsigned int i{a}; i <= b; ++i)
    {
        switch (i)
        {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            break;
        case 9:
            cout << "nine" << endl;
            break;
        default:
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
            break;
        }
    }
    return 0;
}
