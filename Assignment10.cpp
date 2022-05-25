#include <iostream>
using namespace std;
#include <ctime>

int main()
{
    cout << "Welcome to the greatest calculator on earth" << endl;
    while (true)
    {
        srand(time(0));
        int number1{};
        int number2{};
        int operat{};
        int computer_result{};
        int user_result{};
        char again{};
        number1 = rand() % 200;
        number2 = rand() % 200;
        operat = rand() % 3;
        switch (operat)
        {
        case 0:
            cout << "What is the result of " << number1 << " + " << number2 << ": ";
            computer_result = number1 + number2;
            break;

        case 1:
            cout << "What is the result of " << number1 << " - " << number2 << ": ";
            computer_result = number1 - number2;
            break;
        case 2:
            cout << "What is the result of " << number1 << " * " << number2 << ": ";
            computer_result = number1 * number2;
            break;
        default:
            break;
        }
        cin >> user_result;
        if (user_result == computer_result)
        {
            cout << "Congragulations, you got the result " << computer_result << " right" << endl;
        }
        else
        {
            cout << "Nahhh! the correct result is : " << computer_result << endl;
        }
        cout << "Do you want me to try again ? : ";
        cin >> again;
        if (again == 'n' || again == 'N')
        {
            cout << "See you later!" << endl;
            break;
        }
    }
}