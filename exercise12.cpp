#include <iostream>
using namespace std;

void hunt_for_vowels(char message[], unsigned int size)
{

    unsigned int vowel_count{}; // Initialized to zero

    // Don't modify anything above this line
    // Your code should go below this line

    // const char vowels[6]{'a', 'e', 'i', 'o', 'u'};
    for (size_t i{0}; i < size; ++i)
    {
        if (message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u')
        {
            vowel_count += 1;
        }
        else if (message[i] == 'A' || message[i] == 'E' || message[i] == 'I' || message[i] == 'O' || message[i] == 'U')
        {
            vowel_count += 1;
        }
    }

    // Your code should go above this line
    // Don't modify anything below this line

    std::cout << "The string : " << message << " has " << vowel_count << " vowels";
}

int main()
{
    char msg[]{"Akdjbsdjai"};
    hunt_for_vowels(msg, size(msg) - 1);
}