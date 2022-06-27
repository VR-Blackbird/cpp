#include <iostream>

template <typename T>
int hunt_down(T value, T *collection, unsigned int size)
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

// THE DECLARATION FOR YOUR TEMPLATE SEPCIALIZATION WILL GO BELOW THIS LINE
// DON'T MODIFY ANYTHING ABOVE THIS LINE
template <>
int hunt_down<const char *>(const char *value, const char **collection, unsigned int size);

int main()
{
    unsigned int student_id{817616};
    unsigned int student_ids[]{111222, 442222, 817616, 333900};
    int index{hunt_down(student_id, student_ids, 4)};
    std::cout << index << std::endl;
    const char *name{"Kumar"};
    const char *names[]{"ajnsd", "kumar"};
    std::cout << hunt_down(name, names, 2) << std::endl;
    return 0;
}

template <>
int hunt_down<const char *>(const char *value, const char **collection, unsigned int size)
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