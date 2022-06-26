#include <iostream>

template <typename T>
int hunt_down(const T &value, const T *collection, size_t size);

int main()
{
    const int students[]{5, 3, 2, 13};
    int to_find(13);
    std::cout << hunt_down(to_find, students, 4) << std::endl;
    return 0;
}

template <typename T>
int hunt_down(const T &value, const T *collection, size_t size)
{
    for (int i{0}; i < size; ++i)
    {
        if (value == collection[i])
        {
            return i;
        }
    }
    return -1;
}