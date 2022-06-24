#include <iostream>

void say_my_name(const std::string &name)
{
    std::cout << "Hello " << name << std::endl;
}

// void say_my_name(std::string name)
// {
//     std::cout << "Hello " << name << std::endl;
// }

double max(double a, double b)
{
    std::cout << "Double function called" << std::endl;
    if (a > b)
    {
        return a;
    }
    return b;
}

int &max(int &a, int &b)
{
    std::cout << "int reference function called" << std::endl;
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    std::string name{"John"};
    // say_my_name(name);
    // say_my_name("John"); Compiler error
    say_my_name(name);
    say_my_name("John");
    char a{6};
    char b{9};

    auto result = max(a, b); // by default calls int reference function if it const reference function ...else calls double function
    // In the second case, need to convert char to int explicitly
    int int_a = a;
    int int_b = b;
    auto result_another = max(int_a, int_b);
    std::cout << result << std::endl;
    std::cout << result_another << std::endl;
    return 0;
}