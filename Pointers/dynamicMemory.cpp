#include <iostream>
using namespace std;

int main()
{

    int *heap_ptr{nullptr};
    heap_ptr = new int; // Create a memory for int in a heap
    *heap_ptr = 100;    // Specifying a value in the heap

    cout << *heap_ptr << endl;

    // Once done with all the operations, you can delete the memory (release memory)
    delete heap_ptr;
    heap_ptr = nullptr; //Safe way so that pointer does not point anywhere else [SAFETY]
    // *heap_ptr = 90;  Bad practice to assign values to a null pointer ..program will crash

    heap_ptr = new int (900); //Initialise a pointer directly
    cout << heap_ptr << endl;
    cout << *heap_ptr << endl;

    delete heap_ptr;
    heap_ptr = nullptr;
    return 0;
}