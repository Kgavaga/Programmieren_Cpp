#include <iostream>
#include <cstdint>
#include "Person.h"

int main()
{
    Person* p1 = new Person("Franz", Person::de);
    Person* p2 = new Person("John", Person::en);
    Person* p3 = new Person("Elliot", Person::fr);
    Person* p4 = new Person("Camelo", Person::it);

    p1->greet(p2);
    p3->greet(p1);
    p2->greet(p4);
    p4->greet(p3);
    return 0;
}