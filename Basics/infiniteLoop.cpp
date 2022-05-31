#include <iostream>
using namespace std;

int main()
{
    char operation{};
    double operand1{};
    double operand2{};
    bool end{false};

    while (end == false)
    {
        std::cout << "--------------------------------------------" << std::endl;
        std::cout << "What operation do you want help with? " << std::endl;
        std::cout << "+,-,* and / are supported. Please choose one and type below" << std::endl;
        std::cout << "Your operation : ";

        std::cin >> operation;
        if (operation != '+' && operation != '-' && operation != '*' && operation != '/')
        {
            cout << "Operation not supported" << endl;
            continue;
        }

        std::cout << std::endl;
        std::cout << "Please type in your two operands separated by a space and hit enter: ";
        std::cin >> operand1 >> operand2;
        switch (operation)
        {
        case '+':
            std::cout << operand1 + operand2 << std::endl;
            break;
        case '-':
            std::cout << operand1 - operand2 << std::endl;
            break;
        case '*':
            std::cout << operand1 * operand2 << std::endl;
            break;
        case '/':
            std::cout << operand1 / operand2 << std::endl;
            break;
        default:
            std::cout << "Operation not supported" << std::endl;
            break;
        }

        char go_on{};
        std::cout << "Do you wish to continue ? " << std::endl; //  Y/N
        std::cin >> go_on;

        if (go_on == 'N' || go_on == 'n')
        {
            end = true;
        }
    }
}