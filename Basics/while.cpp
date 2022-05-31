#include <iostream>
using namespace std;

int main()
{
    const unsigned int COUNT{10};
    size_t i{0};
    while (i < COUNT)
    {
        cout << i << endl;
        i++;
    }
}