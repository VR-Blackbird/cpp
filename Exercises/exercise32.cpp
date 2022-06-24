#include <iostream>
#include <cstring>

// Don't modify anything above this line
// Your code will go below this line
double add(double a, double b)
{
    return a + b;
}

std::string add(std::string &a, const std::string &b)
{
    return a += b;
}

const char *add(char *a, const char *b)
{

    return strcat(a, b);
}

// Your code will go above this line
// Don't modify anything below this line

int main()
{
    // char name[20]{"The sky"};
    std::string name{"The sky"};
    auto result_str = add(name, " is blue");
    std::cout << "result_str : " << result_str;
}
