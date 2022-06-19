#include <iostream>

void say_name(std::string_view &str)
{
    std::cout << str;
}

int main()
{
    std::string_view data{"Google"};
    say_name(data);
    return 0;
}