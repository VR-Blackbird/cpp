#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string planet{"Earth is our planet"};
    string preferred_planet{planet};
    name = "lower";
    cout << name << endl;
    cout << planet << endl;
    cout << preferred_planet << endl;

    // substrings
    string earth{"Earth is my planet", 5};
    cout << earth << endl;
    string planet_name{planet, 13, 6};
    cout << planet_name << endl;

    std::string repeat_op{4, 'e'};
    cout << repeat_op << endl;

    // Concatenation

    cout << "Concatenation ---------------" << endl;
    string string1{"I am "};
    string string2{"a genius"};
    cout << string1 + string2 << endl;

    // Another way of concatenating strings together

    string string3{"I am "
                   "a genius "
                   "in this world"};
    cout << string3 << endl;

    // Using append method
    cout << string1 << endl;
    string1.append(string2);
    string1.append(5, '#');
    cout << string1 << endl;

    // Converting numbers to string
    cout << string1 + ' ' + to_string(17) << endl;

    // Accessing characters in std::string

    for (size_t i{}; i < string1.size(); ++i)
    {
        cout << string1[i] << endl;
        cout << string1.at(i);
    }

    for (auto i : string1)
    {
        cout << i;
    }
    cout << endl;
    string1[10] = '%';
    cout << string1 << endl;

    // Front and back functions of std::string

    string1 = "Karl";
    string2 = "Marks";

    string3 = string1 + ' ' + string2;

    cout << "Front ----> " << string3.front() << endl;
    cout << "Back -----> " << string3.back() << endl;

    // Changing front and back using references
    //  char ref = string3.front();
    //  ref = 'H'; //Won't work as it is just a copy

    char &ref = string3.front();
    ref = 'H'; // Will work as ref is a reference to that character
    cout << string3 << endl;

    // Direct way to change characters

    string3.back() = 'o'; // Returns a reference

    cout << string3 << endl;

    // cout << *string3 << endl;   //deferencing won't work on std::strings

    // Get access to underlying character arrays returns a const char pointer
    const char *wrapped_c_string = string3.c_str();
    cout << wrapped_c_string << endl;
    cout << *wrapped_c_string << endl;

    // Get access to underlying character arrays returns a non const char pointer

    char *wrapped_data = string3.data();

    wrapped_data[0] = 'Q';

    cout << wrapped_data << "--" << string3 << endl;

    return 0;
}