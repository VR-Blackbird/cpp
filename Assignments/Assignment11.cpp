#include <iostream>

template <typename T>
concept ConvertibleToStdString = requires(T a, T b)
{
    std::to_string(a);
    std::to_string(b);
};

template <ConvertibleToStdString T, ConvertibleToStdString F>
std::string concatenate(T a, F b)
{
    return (std::to_string(a) + std::to_string(b));
}

int main()
{
    auto result = concatenate(10, 12.88);
    std::cout << "result : 
    " << result << std::endl;
    return 0;
}