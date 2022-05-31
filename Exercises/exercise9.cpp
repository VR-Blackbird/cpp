#include <iostream>

void multiples_of_19()
{

    // Don't modify anything above this line
    // Your code will go below this line
    const unsigned int COUNT{1000};
    size_t i{100};
    do
    {
        if (i % 19 == 0)
        {
            std::cout << i << " ";
        }
        ++i;

    } while (i < 1000);

    // Your code will go above this line
    // Don't modify anything below this line
}

int main()
{
    multiples_of_19();
}