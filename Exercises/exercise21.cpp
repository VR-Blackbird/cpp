#include <iostream>
#include <cstring>
using namespace std;

void extract_message(const char *src1, const char *src2,
                     const char *src3, const char *src4)
{

    char *result;
    result = new char[20]; // Dynamically allocate for space

    // Don't modify anything above this line
    // Your code will go below this line

    strncpy(result, src1 + 15, 3);
    strncpy(result + 3, src2 + 5, 4);
    strncpy(result + 7, src3 + 10, 3);
    strncpy(result+10, src4+3, 5);
    cout << result << endl;

    // Your code will go above this line
    // Don't modify anything below this line

    delete[] result;
    result = nullptr;
}

int main()
{
    const char src1[]{"will old space the replace"};
    const char src2[]{"sense sky hit has"};
    const char src3[]{"hello went is get"};
    const char src4[]{"red blue yellow orange"};

    extract_message(src1, src2, src3, src4);
}