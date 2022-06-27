#include <iostream>

template <typename T>
void swap_them(T &var1, T &var2)
{
    T var3 = var1;
    var1 = var2;
    var2 = var3;
}

int main()
{
    std::string a{"hello"};
    std::string b{"world"};
    swap_them(a, b);
    std::cout << a << " " << b << std::endl;
    return 0;
}