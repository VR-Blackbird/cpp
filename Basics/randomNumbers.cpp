#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int hh;
    cout << RAND_MAX << endl; // Compiler dependent
    cout << time(0) << endl;  // Time since jan 1st 1970
    srand(time(0));           // Set seed based on time
    for (size_t i{0}; i < 10; ++i)
    {
        cout << (rand() % 10) + 1 << endl; // Generate 10 random numbers from 1 - 10
    }
}