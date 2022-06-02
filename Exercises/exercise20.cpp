#include <iostream>
using namespace std;
void replace_spaces(char data[], unsigned int size)
{

    char *result{nullptr};

    // Don't modify anything above this line
    // Your code will go below this line

    result = new char[size];

    for (size_t i{}; i < size; ++i)
    {
        if (isblank(data[i]))
        {
            result[i] = '_';
        }
        else
        {
            result[i] = data[i];
        }
    }
    cout << "After replacing the spaces, we get : " << result;
    delete[] result;
    result = nullptr;

    // REMEMBER : WHEN YOU DYNAMICALLY ALLOCATE FOR SPACE FROM THE HEAP, YOU HAVE TO ACTIVELY RELEASE THAT TO THE
    // SYSTEM WHEN DONE WITH IT. BE A GOOD C++ CITIZEN!

    // Your code will go above this line
    // Don't modify anything below this line
}

int main()
{
    char data[]{"The sky is blue my friend"};
    replace_spaces(data, size(data));
}