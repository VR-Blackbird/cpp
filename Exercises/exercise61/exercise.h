#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

class CoolUtility
{
public:
    inline static const char *s_general_description{"Cool utility to move us all to Mars"};
    CoolUtility() = default;
    CoolUtility(const char *message);
    void what_do_you_do() const;

private:
    const char *m_object_description;
};

#endif // _EXERCISE_H
