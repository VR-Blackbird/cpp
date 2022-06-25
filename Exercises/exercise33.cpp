#include <iostream>

void func()
{
    // YOUR CODE WILL GO BELOW THIS LINE
    // DON'T MODIFY ANYTHING ABOVE THIS LINE
    static unsigned int some_number{0};
    std::cout << ++some_number << " ";

    // YOUR CODE SHOULD GO ABOVE THIS LINE
    // DON'T MODIFY ANYTHING BELOW THIS LINE
}

void do_work(unsigned int n)
{
    for (unsigned int i{0}; i < n; ++i)
    {
        func();
    }
}

int main()
{
    do_work(10);
    return 0;
}