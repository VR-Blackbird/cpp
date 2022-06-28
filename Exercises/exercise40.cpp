#include <iostream>
#include <string>
#include <cstring>

template <typename T, typename R>
std::string concatenate(T a, R b)
{
    std::string a_str = std::to_string(a);
    std::string b_str = std::to_string(b);
    return a_str + b_str;
}

int main()
{
    std::cout << concatenate<int, int>(12, 13);
    return 0;
}