#include <string>
#include <iostream>
// #include "exercise.h"

std::string who_s_the_greatest(std::string data[], unsigned int size)
{

    std::string result;

    // Don't modify anything above this line
    // Your code will go below this line

    for (size_t i{}; i < size; ++i)
    {
        if (data[i] > result)
        {
            result = data[i];
        }
    }

    // Your code will go above this line
    // Don't modify anything below this line

    return result;
}

int main()
{
    std::string data1[]{"I", "am", "the", "king", "of", "the", "jungle"};
    std::cout << who_s_the_greatest(data1, size(data1));
    return 0;
}