#include <iostream>
#include <iomanip>
using namespace std;

bool is_leap_year(unsigned int year)
{

    bool is_leap{};

    if (year % 4 == 0)
    {
        if (year % 100 == 0 && year % 400 == 0)
        {
            is_leap = true;
        }
        else if (year % 100 != 0)
        {
            is_leap = true;
        }
        else
        {
            is_leap = false;
        }
    }
    else
    {
        is_leap = false;
    }

    return is_leap;
}

void calendar(unsigned int year, unsigned int day)
{
    for (unsigned int COUNT{}; auto month : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12})
    {
        switch (month)
        {
        case 1:
            cout << "January - " << year << endl;
            COUNT = 31;
            break;
        case 2:
            cout << "February - " << year << endl;
            if (is_leap_year(year))
            {
                COUNT = 29;
            }
            else
            {
                COUNT = 28;
            }
            break;
        case 3:
            cout << "March - " << year << endl;
            COUNT = 31;
            break;
        case 4:
            cout << "April - " << year << endl;
            COUNT = 30;
            break;
        case 5:
            cout << "May - " << year << endl;
            COUNT = 31;
            break;
        case 6:
            cout << "June - " << year << endl;
            COUNT = 30;
            break;
        case 7:
            cout << "July - " << year << endl;
            COUNT = 31;
            break;
        case 8:
            cout << "August - " << year << endl;
            COUNT = 31;
            break;
        case 9:
            cout << "September - " << year << endl;
            COUNT = 30;
            break;
        case 10:
            cout << "October - " << year << endl;
            COUNT = 31;
            break;
        case 11:
            cout << "November - " << year << endl;
            COUNT = 30;
            break;
        case 12:
            cout << "December - " << year << endl;
            COUNT = 31;
            break;
        default:
            break;
        }
        cout << setw(5) << "Mon" << setw(5) << "Tue" << setw(5) << "Wed" << setw(5) << "Thu" << setw(5) << "Fri" << setw(5) << "Sat" << setw(5) << "Sun" << setw(5) << endl;

        for (size_t i{1}; i < COUNT + day; ++i)
        {
            if (i < day)
            {
                cout << setw(5) << " ";
            }
            else
            {
                cout << setw(5) << (i - day) + 1;
            }
            if (i >= 7 && i % 7 == 0)
            {
                cout << endl;
            }
        }
        day = (day + COUNT - 1) % 7 + 1;
        cout << endl;
        cout << "---------------------------" << endl;
    }
}

int main()
{
    unsigned int year{};
    unsigned int day{};
    cout << "Enter the year : ";
    cin >> year;
    cout << endl;
    cout << "Enter the first day [1: Monday], ......, [7: Sunday] : ";
    cin >> day;
    cout << endl;
    calendar(year, day);
    return 0;
}