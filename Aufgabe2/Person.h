#pragma once
#include <string>

enum Nationality{
    de, en, fr, it, au
};

class Person{
public:

private:
    std::string m_name;
    Nationality m_nationality;

public:
    Person(std::string name, Nationality nationality);

    void greet(Person* other);
    std::string getName();

};