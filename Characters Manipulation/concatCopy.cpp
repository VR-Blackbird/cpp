#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char msg1[]{"Hello"};
    char msg2[]{" World!"};

    // String concatenation
    cout << "STRCAT of msg1 and msg2 --> " << strcat(msg1, msg2) << endl;
    cout << "Msg1 --> " << msg1 << endl; // Msg1 got changed to "Hello World!"
    cout << "Msg2 --> " << msg2 << endl;

    // strncat
    cout << "Msg1 -- >" << msg1 << endl;
    cout << "STRNCAT of msg1 and 5 characters of msg2 --> " << strncat(msg1, msg2, 6) << endl;

    // STRCPY

    cout << "---------String copy---------" << endl;
    cout << "Msg1----> " << msg1 << endl;
    cout << "Msg2----> " << msg2 << endl;

    const char *ptr_msg{"This is a very good place to live"};
    cout << "Ptr msg ---> " << ptr_msg << endl;
    cout << sizeof(ptr_msg) << endl;
    cout << strlen(ptr_msg) << endl;
    char *copy_st = new char[strlen(ptr_msg) + 1]; // Dynamic so that program does not crash using a null pointer

    cout << "Strcpy of msg1 to a new msg3 ---> " << strcpy(copy_st, ptr_msg) << endl;
    cout << "Msg3 ---> " << copy_st << endl;

    delete[] copy_st;
    copy_st = nullptr;

    // Copy only n characters
    const char *ptr_2{"jelly"};
    char new_arr[]{"killy is a good person"};

    // cout << "Strcpy --> " << strcpy(new_arr, ptr_2) << endl;
    // cout << new_arr << endl;
    cout << new_arr << endl;
    cout << "Strncpy --> " << strncpy(new_arr, ptr_2, 5) << endl;
    cout << new_arr;

    return 0;
}