#include <iostream>

// void increment(int &data)
// {
//     data++;
//     std::cout << data << std::endl;
// }

// Compiler execution Error ----> takes in a double value
//      stores in a temporary variable of type int
//      tries to modify the temporary varibale

void print_out(const int &data)
{
    std::cout << data << std::endl;
}

int main()
{
    double double_var{19.6};
    print_out(double_var);
    return 0;
}