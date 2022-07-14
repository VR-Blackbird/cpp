#ifndef COPY
#define COPY
#include <iostream>

class Person
{
private:
    std::string lastname;
    std::string first_name;
    int *age{};

public:
    Person() = default;
    Person(std::string l_name, std::string f_name, int *age_param);
    Person(const Person &some_person);

    std::string get_fname() const;
    std::string get_lname() const;
    int *get_age() const;
    void print_info() const
    {
        std::cout << lastname << std::endl
                  << first_name << std::endl
                  << *age;
    }
    void set_age(int added)
    {
        (*age) += added;
    }
};

#endif