#include <iostream>

using namespace std;

int main()
{

    const unsigned int COUNT{10};
    size_t increm{0};
    do
    {
        cout << increm << endl;
        ++increm;
    } while (increm < COUNT);
}