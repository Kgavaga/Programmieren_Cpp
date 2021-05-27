#include <iostream>
#include <cstdint>
#include "Person.h"

int main()
{
    Person* p1 = new Person("Franz", Nationality::de);
    Person* p2 = new Person("John", Nationality::en);
    Person* p3 = new Person("Elliot", Nationality::fr);
    Person* p4 = new Person("Camelo", Nationality::it);
    Person* p5 = new Person("Alf", Nationality::au);
    int a = static_cast<int>(Nationality::de);

    p1->greet(p2);
    p3->greet(p5);
    p2->greet(p4);
    p4->greet(p3);
    p5->greet(p1);
    return 0;
}