#include <vector>
#include <iostream>
using namespace std;
void print_multiples_of_3()
{

    std::vector<int> numbers{1, 21, 4, 5, 7, 3, 9, 3, 5, 17, 15};

    // Don't modify anything above this line
    // Your code should go below this line
    for (int number : numbers)
    {
        if (number % 3 == 0)
        {
            cout << number << " ";
        }
    }

    // Your code should go above this line
    // Don't modify anything below this line
}

int main()
{
    cout << "Printing multiples of 3s" << endl;
    print_multiples_of_3();
}