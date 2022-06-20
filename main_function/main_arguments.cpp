#include <iostream>

int main(int argc, char **argv) // int argc - stores number of argumnets passed while running the executable
// Char ** argv - a pointer to a pointer to a character or pointer to a character array
{
    std::cout << argc << std::endl;
    for (size_t i{1}; i < argc; ++i)
        {
            std::cout << argv[i] << std::endl;
        }
    return 0;
}