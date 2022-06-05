#include <string>
#include <iostream>
// #include "exercise.h"

std::string build_from_raw_pieces(const char *str1, const char *str2)
{

    std::string result;

    // Don't modify anything above this line
    // Your code will go below this line
    // ((result += str1) += ' ') += str2;  

    result = std::string(str1) + ' ' + str2;


    // Your code will go above this line
    // Don't modify anything below this line
    return result;
}

int main()
{
    const char i1[]{"Hello world!"};
    const char i2[]{"I am john"};
    std::cout << build_from_raw_pieces(i1, i2);
    return 0;
}