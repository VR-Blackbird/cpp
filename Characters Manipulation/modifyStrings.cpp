#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Clear everything and make it empty

    string clearable_string{"Gonna get cleared"};

    cout << clearable_string << endl;

    cout << clearable_string.size() << endl;

    clearable_string.clear();

    cout << clearable_string << endl;
    cout << clearable_string.size() << endl;

    // Insert characters at a given index

    string new_str{"You can insert anything you want here. Don't worry about what to add. You can crack it up"};

    new_str.insert(15, "everything and ");


    cout << new_str << endl;
    //We can insert a c-string as well. It is the same method as we used before for inserting a normal string strings

    //Erase

    cout << new_str.erase(14, new_str.size() - 14);

    return 0;
}