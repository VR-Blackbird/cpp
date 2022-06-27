#include <iostream>
#include <cstring>

template <typename T>
int hunt_down(const T &value, const T *collection, unsigned int size)
{
    for (unsigned int i{0}; i < size; i++)
    {
        if (collection[i] == value)
        {
            return i; // Found it; return the index.
        }
    }
    return -1;
}

// THE DECLARATION OF YOUR OVERLOAD WILL GO BELOW THIS LINE

int hunt_down(const char *value, const char **collection, unsigned int size);

int main()
{
    const char *student{"Kumar"};
    const char *students[]{"sdnj", "Kumar"};
    std::cout << hunt_down(student, students, 2) << std::endl;
    return 0;
}

int hunt_down(const char *value, const char **collection, unsigned int size)
{
    for (unsigned int i{0}; i < size; i++)
    {
        if (std::strcmp(collection[i], value) == 0)
        {
            return i; // Found it; return the index.
        }
    }
    return -1;
}