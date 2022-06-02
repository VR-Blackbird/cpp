#include <iostream>
using namespace std;

void find_stuf_out(char data[], unsigned int size)
{

    unsigned int vowel_count{};
    unsigned int consonant_count{};

    // Don't modify anything above this line
    // Your code should go below this line

    for (size_t i{}; i < size; ++i)
    {
        if (isalpha(data[i]))
        {
            char c{};
            c = static_cast<char>(tolower(data[i]));
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowel_count += 1;
            }
            else
            {
                consonant_count += 1;
            }
        }
    }

    cout << "The string contains " << vowel_count << " vowels and " << consonant_count << " consonants";
    // Your code should go above this line
    // Don't modify anything below this line
}

int main()
{
    char data[]{"aSINGAM+_09"};
    find_stuf_out(data, 7);
}