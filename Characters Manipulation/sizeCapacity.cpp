#include <iostream>
#include <string>

int main()
{

    // Empty method to check if a string is empty

    std::string contained {"hehe"};
    std::string empty_string(90, 'p');
    std::string empty_string1{};

    std::cout << std::boolalpha;
    std::cout << contained.empty() << std::endl;
    std::cout << empty_string1.empty() << std::endl;
    std::cout << empty_string.empty() << std::endl;
    std::cout << empty_string << std::endl;

    std::cout << contained.size() << std::endl;
    std::cout << contained.length() << std::endl;

    std::cout << contained.max_size() << std::endl;
    std::cout << empty_string1.max_size() << std::endl;


    contained.reserve(900); //Reserve a capacity of 900
    contained.shrink_to_fit();

    std::cout << contained.capacity() << std::endl;
    std::cout << empty_string.capacity() << std::endl;

    return 0;
}