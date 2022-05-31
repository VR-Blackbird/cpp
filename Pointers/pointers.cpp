#include <iostream>
using namespace std;

int main()
{
    int *int_ptr{}; // Implicit null pointer
    double *doub_ptr{};

    // Explicit null pointer
    int *exp_ptr{nullptr};

    cout << "SizeofInt " << sizeof(int) << endl;
    cout << "Size of double " << sizeof(double) << endl;
    cout << "Size of int pointer " << sizeof(int_ptr) << endl;
    cout << "Size of double pointer " << sizeof(doub_ptr) << endl;

    int *p_number{}, other_var{};
    cout << sizeof(p_number) << " " << sizeof(other_var) << endl;
    other_var = 100;
    int *p_othervar{&other_var};
    cout << p_othervar << endl;
    cout << *p_othervar << endl;
    other_var = 190;
    cout << *p_othervar << endl; // Dereference pointer

    // Pointer to character

    char *pchar{};
    char char_var{'a'};
    const char *pmessage{"Hello world"};
    pchar = &char_var;
    cout << "Character pointer array " << *pchar << endl;
    cout << *pmessage << endl;
    cout << &pmessage;
    return 0;
}