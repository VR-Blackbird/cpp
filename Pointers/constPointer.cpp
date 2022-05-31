#include <iostream>
using namespace std;

int main()
{

    // Non const pointer to non const data
    int var{19};
    int var2{200};
    int *p_var{};
    p_var = &var;
    cout << p_var << endl;
    cout << *p_var << endl;
    *p_var = 90; // Go through the pointer and change the value of the variable in that memory address
    cout << p_var << endl;
    cout << *p_var << endl;
    p_var = &var2; // Make the pointer point somewhere else
    cout << p_var << endl;
    cout << *p_var << endl;

    // Pointer to const (pointer pointing to a constant which means we cannot change the value)
    //----> But can change the pointer location

    cout << "------------------Pointer to const--------------" << endl;
    const int *cp_var{&var};
    cout << cp_var << endl;

    // *cp_var = 9000;   Compilation error

    cp_var = &var2;
    cout << cp_var << endl;

    cout << "-----------------------Const pointer to non const data----------------" << endl;
    // Can't change a pointer location ...In this case, a pointer is a constant and it can't move anywhere .
    // But can change value

    int *const cp1_var{&var};
    // cp1_var = &var;  Can't do this
    cout << cp1_var << endl;

    // Changing the value
    *cp1_var = 1900;
    cout << *cp1_var << endl;

    cout << "---------------------------Const pointer to const data-------------" << endl;

    // We can neither change a value nor change the memory location
    const int *const cc1_var{&var};
    //cc1_var = &var2;  Can't change memory
    //*cc1_var = 9000;  Can't change value

    cout << *cc1_var << endl;


    return 0;
}