#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // Const
    const int a{10};
    const float he{1.67f};
    cout << "a = " << a << endl;
    cout << "float = " << he << endl;
    cout << "Twice float = " << 3 * he << endl;
    // a = 19; Compile error
    // he = 90.90; Compile error

    // Const expr

    constexpr int root{11};
    constexpr int sum{10 + root};

    const int new_const{19};
    constexpr int new_sum(new_const + sum);

    cout << "Sum = " << sum << endl;
    // Assert at compile time. Compile time checks
    static_assert(new_sum == 40);
    cout << "New sum = " << new_sum << endl;
}