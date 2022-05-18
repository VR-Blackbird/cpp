#include <iostream>
#include <vector>

void pay_less()
{

    std::vector<double> unit_prices{10.4, 21.5, 14.0, 15.2, 7.9};
    std::vector<double> number_of_items{60, 20, 10, 30, 20, 50};

    // Don't modify anything above this line
    // Your code should go below this line
    double least_cost = unit_prices[0] * number_of_items[0];
    const unsigned int COUNT{5};
    size_t i{1};
    while (i < COUNT)
    {
        double item_value = unit_prices[i] * number_of_items[i];
        if (item_value < least_cost)
        {
            least_cost = item_value;
        }
        ++i;
    }

    // Your code should go above this line
    // Don't modify anything below this line

    std::cout << "The least I can pay is  : " << least_cost;
}

int main()
{
    pay_less();
}