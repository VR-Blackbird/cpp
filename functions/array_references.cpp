#include <iostream>

double sum(const double (&scores)[8]);

int main()
{
    double scores[]{1, 21, 24, 28, 10, 11, 12, 13};
    std::cout << sum(scores);
    return 0;
}

double sum(const double (&scores)[8])
{

    double total_sum{};

    for (auto score : scores)
    {
        total_sum += score;
    }
    return total_sum;
}