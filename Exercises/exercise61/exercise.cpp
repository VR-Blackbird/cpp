#include "exercise.h"

CoolUtility::CoolUtility(const char *message) : m_object_description{message}
{
}

void CoolUtility::what_do_you_do() const
{
    std::cout << this->m_object_description;
}