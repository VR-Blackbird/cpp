#include <iostream>
using namespace std;

unsigned int sum_up_to_99()
{
    unsigned int sum{};

    // Don't modify anything above this line
    // Your code will go below this line
    const size_t Count{100};
    for (size_t i{}; i < 100; ++i)
    {
        sum += i;
    }

    // Your code will go above this line
    // Don't modify anyting below this line

    return sum;
}

int main()
{
    cout << "Sum is : " << sum_up_to_99() << endl;
}
