#include <iostream>

enum class Month
{
    jan,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
}; // Numbering starts from 0

enum class New_Month
{
    jan = 1,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
}; // Numbering starts from 1

// Enumerator aliases

enum class News_Month
{
    jan = 1,
    january = jan,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    february = feb,
    oct,
    nov,
    dec
};

// Type of enum is by default integer

// Custom type

enum class Custom_Month : unsigned char
{
    jan = 1,
    january = jan,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    february = feb,
    oct,
    nov,
    dec
};

int main()
{
    Month frst{Month::jan};
    New_Month n_frst{New_Month::jan};
    News_Month ni_first{News_Month::february};
    Custom_Month char_first{Custom_Month::february};
    std::cout << static_cast<int>(frst) << std::endl;
    std::cout << static_cast<int>(n_frst) << std::endl;
    std::cout << static_cast<int>(ni_first) << std::endl;
    std::cout << static_cast<unsigned char>(char_first) << std::endl;
    return 0;
}