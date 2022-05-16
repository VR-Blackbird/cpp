#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Which day is today [1: Monday], ......, [7: Sunday]" << endl;
    cin >> day;
    // if (day < 1 || day > 7)
    // {
    //     cout << day << " is not a valid day!";
    //     return 0;
    // }

    switch (day)
    {
    case 1:
        cout << "Today is Monday" << endl;
        break;
    case 2:
        cout << "Today is Tuesday" << endl;
        break;
    case 3:
        cout << "Today is Wednesday" << endl;
        break;
    case 4:
        cout << "Today is Thursday" << endl;
        break;

    case 5:
        cout << "Today is Friday" << endl;
        break;
    case 6:
        cout << "Today is Saturday" << endl;
        break;
    case 7:
        cout << "Today is Sunday" << endl;
        break;
    default:
        cout << day << " is not a valid day!";
        return 0;
        break;
    }

    int ndays;
    cout << "How many days have passed up to today : " << endl;
    cin >> ndays;

    int days_between = day - (ndays % 7);
    if (days_between <= 0)
    {
        days_between += 7;
    }

    switch (days_between)
    {
    case 1:
        cout << "If we went " << ndays << " in the past, we would hit a Monday" << endl;
        break;
    case 2:
        cout << "If we went " << ndays << " in the past, we would hit a Tuesday" << endl;
        break;
    case 3:
        cout << "If we went " << ndays << " in the past, we would hit a Wednesday" << endl;
        break;
    case 4:
        cout << "If we went " << ndays << " in the past, we would hit a  Thursday" << endl;
        break;

    case 5:
        cout << "If we went " << ndays << " in the past, we would hit a  Friday" << endl;
        break;
    case 6:
        cout << "If we went " << ndays << " in the past, we would hit a  Saturday" << endl;
        break;
    case 7:
        cout << "If we went " << ndays << " in the past, we would hit a  Sunday" << endl;
        break;
    default:
        cout << day << " is not a valid day!";
        return 0;
        break;
    }
}