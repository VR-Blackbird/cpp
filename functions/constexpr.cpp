#include <iostream>

constexpr std::string_view say_name(std::string_view &str)
{
    // std::cout << str; Not allowed in constexpr
    str = "google.com";
    return str;
}

int main()
{
    std::string_view data{"Google"};            // Run time variable as an argument
    std::string_view modified = say_name(data); // So, evaluated only during run time

    std::cout << modified << std::endl;
    return 0;
}