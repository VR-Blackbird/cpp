#include <iostream>

// Don't modify anything above this line
// Your code will go below this line

// void find_character(const char *str, unsigned int size, char c)

// {
// }

int contains_character(const char *str, unsigned int size, char c)
{
    for (size_t i{0}; i < size; ++i)
    {
        if (*str == c)
        {
            return i;
        }
        str++;
    }
    return -1;
}
void find_character(const char *str, unsigned int size, char c)
{

    int location{};
    location = contains_character(str, size, c);
    if (location == -1)
    {
        std::cout << "Could not fund the character " << c << " in " << str;
    }
    else
    {
        std::cout << "Found character " << c << " at index " << location;
    }
}
int main()
{
    char message[]{"Hello There"};
    std::cout << contains_character(message, sizeof(message), 'o') << std::endl;
    find_character(message, sizeof(message), 'o');
    return 0;
}

// Your code will go above this line
// Don't modify anything below this line