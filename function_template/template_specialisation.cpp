#include <iostream>
#include <cstring>

template <typename T>
T maximum(T a, T b)
{

    return (a > b) ? a : b;
}

template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    return (std::strcmp(a, b) > 0) ? a : b;
}

int main()
{
    int x{10};
    int y{19};
    const char *x1{"zzc"};
    const char *x2{"zvf"};
    std::cout << maximum(x, y) << std::endl;
    std::cout << maximum(x1, x2);
    return 0;
}