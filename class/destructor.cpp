#include <iostream>
#include <string_view>

class Dog
{
public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();

private:
    std::string name;
    std::string breed;
    int *p_age{nullptr};
};

void some_function()
{
    Dog new_dog("sheldon", "laks", 2);
}

// void param_function(Dog par_dog)
// {
// }

void destroy()
{
    Dog *my_dog = new Dog("ruby", "sheperd", 3);
    delete my_dog; // Need to explicitly release memory from heap to call the destructor on heap
}

int main()
{
    Dog my_dog("hisky", "sheperd", 3);
    std::cout << "Done" << std::endl;
    some_function();
    // Dog c_dog("jingle", "ajshd", 4);
    // param_function(c_dog);
    destroy();
    return 0;
}

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param)
{

    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Constructor called for " << name << std::endl;
}

Dog::~Dog()
{
    delete p_age;
    std::cout << "Destructor called for " << name << std::endl;
}
