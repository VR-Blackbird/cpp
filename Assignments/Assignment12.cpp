#include <iostream>
#include <concepts>

template <typename T>
concept ConvertibleToStdString = requires(T n)
{
    std::to_string(n);
};
// Declaration
template <typename T, typename F>
requires ConvertibleToStdString<T> && ConvertibleToStdString<F>
auto concatenate(const T n1, const F n2) -> decltype(std::to_string(n1) + std::to_string(n2));

int main()
{

    auto result = concatenate(11, 12.34);
    std::cout << "result : " << result << std::endl;
    return 0;
}

// Definition
template <typename T, typename F>
requires ConvertibleToStdString<T> && ConvertibleToStdString<F>
auto concatenate(const T n1, const F n2)-> decltype(std::to_string(n1) + std::to_string(n2))
{
    return std::to_string(n1) + std::to_string(n2);
}