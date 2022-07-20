#ifndef PERSON

#define PERSON
#include <string>

class Person
{
private:
    std::string last_name;
    std::string first_name;
    int *age{};

public:
    // Constructors
    Person() = default;
    ~Person();
    Person(const std::string &l_name, const std::string &f_name, int age_param);
    Person(const std::string &l_name, const std::string &f_name);
    Person(const std::string &f_name);
    Person(const Person &p1);

    // Setters
    void set_firstname(const std::string &f_name);
    void set_lastname(const std::string &f_name);
    void set_age(int age);

    // Getters
    std::string get_lastname() const;
    std::string get_firstname() const;
    int *get_age() const;
    void print_info() const;
};

#endif