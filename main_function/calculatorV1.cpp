#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{

    if (argc != 4)
    {
        std::cerr << "Error : Too many arguments/ less arguments passed" << std::endl;
        std::cerr << "Usage ====> \"programName operand operation operand\"\nExample ====> ./cpp.exe 10 + 19" << std::endl;
        return 0;
    }

    double first_number{atof(argv[1])};
    double second_number{atof(argv[3])};

    if (first_number == 0 || second_number == 0)
    {
        std::cerr << "Error : Invalid operands specified..Please specify a valid integral/double type" << std::endl;
        return 0;
    }

    const char *c{argv[2]};

    if (std::strlen(c) != 1 || !(*c == '+' || *c == '-' || *c == 'x' || *c == '/'))
    {
        std::cerr << "Error : Invalid operation given ..Please choose either of the below \n +\n-\nx\n/\n";
        return 0;
    }
    switch (*c)
    {
    case '+':
        std::cout << first_number << " + " << second_number << " = "
                  << first_number + second_number << std::endl;
        break;

    case '-':
        std::cout << first_number << " - " << second_number << "="
                  << first_number - second_number << std::endl;
        break;

    case 'x':
        std::cout << first_number << " * " << second_number << " = "
                  << first_number * second_number << std::endl;
        break;

    case '/':
        std::cout << first_number << " / " << second_number << " = "
                  << first_number / second_number << std::endl;
        break;
    }
    return 0;
}