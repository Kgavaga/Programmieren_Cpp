#include "Person.h"
#include <iostream>

Person::Person(std::string name, Nationality nationality)
    : m_name{name}, m_nationality{nationality}{}

void Person::greet(Person* other)
{
    switch(m_nationality){
        case de:
            std::cout << "Hallo " << other->getName() << std::endl;
            break;
        case en:
            std::cout << "Hello " << other->getName() << std::endl;
            break;
        case fr:
            std::cout << "Bonjour " << other->getName() << std::endl;
            break;
        case it:
            std::cout << "Ciao " << other->getName() << std::endl;
            break;
    }
}

std::string Person::getName()
{
    return m_name;
}
