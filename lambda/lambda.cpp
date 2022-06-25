#include <iostream>

/*
Lambda signature : [capture list] (parameters) -> return type {
    // Function body
};
*/

// With name
auto lambda_func = [](int a)
{
    std::cout << "Hello world! " << a << std::endl;
};

int main()
{
    // Without name and calling automatically
    []()
    {
        std::cout << "Hello from nameless lambda" << std::endl;
    }();

    lambda_func(11);

    // Directly use lambda in cout
    std::cout << [](double a, double b)
    {
        return (a + b);
    }(12.1, 13.2)
              << std::endl;

    // Return type of a lambda function
    std::cout << [](double a, double b) -> int
    {
        return a + b;
    }(1.2, 1.5) << std::endl;

    return 0;
}