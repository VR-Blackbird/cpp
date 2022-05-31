#include <iostream>

// Entry point
/*
A multi line comment
*/

int addNumbers(int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;
}

int multiply(int first_param, int second_param)
{
    int mul = first_param * second_param;
    return mul;
}

int main()
{
    int number{3};
    int second_number{17};
    int input_number;
    int sum = addNumbers(34, 43);
    std::cout << "Welcome" << std::endl;
    std::cout << "Sum is : " << sum << std::endl;
    std::cout << "Product is : " << multiply(number, second_number);
    std::cerr << "Failed";
    return 0;
}