#include "pet.h"

int main()
{
    Dog d1("jimmy", 10, "karl");
    Dog d2("hummp", 12, "lins");
    Cat c1("July", 18);
    c1.get_cat_details(d2);
    return 0;
}