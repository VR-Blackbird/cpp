#include <iostream>

void say_name(const std::string &str)
{
    std::cout << str;
}

int main()
{
    std::string_view data{"Google"};
    // say_name(data); Not possible to convert string_view to string
    say_name(std::string(data)); // Explicit conversion from string_view to string
    return 0;
}