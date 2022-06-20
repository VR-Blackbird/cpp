#include <iostream>

consteval int returns_int(int b)
{
    return 15 * b;
}

int main()
{
    const int compiletime_variable{190}; // compile time variable
    int runtime_variable{1900};
    // int val = returns_int(10);
    int val = returns_int(compiletime_variable); // Run time variables cannot be run at compile time
    std::cout << val << std::endl;
    return 0;
}