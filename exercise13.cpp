#include <iostream>
using namespace std;

void common_elements(int array_1[], int array_2[])
{
    // REMEMBER, The input arrays array_1 and array_2 have a fixed size of 10

    // Don't modify anything above this line
    // Your code will go below this line
    int common[10]{};
    int count = 0;
    for (size_t i{0}; i < 10; ++i)
    {
        for (size_t j{0}; j < 10; ++j)
        {
            if (array_1[i] == array_2[j])
            {
                common[count] = array_1[i];
                count += 1;
                break;
            }
        }
    }
    if (count == 0)
    {
        cout << "There are 0 common elements" << endl;
    }
    else
    {
        cout << "There are " << count << " common elements they are : ";
        for (size_t i{0}; i < count; ++i)
        {
            cout << common[i] << " ";
        }
    }
    // Your code will go above this line
    // Don't modify anything after this line
}

int main()
{
    int array_1[]{1, 21, 4, 5, 9, 3, 6, 7, 414, 155};
    int array_2[]{11, 2, 44, 45, 49, 43, 46, 47, 55, 88};
    common_elements(array_1, array_2);
}