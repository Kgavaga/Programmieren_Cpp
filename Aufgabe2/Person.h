#pragma once
#include <string>

class Person{
public:
    enum Nationality{
        de, en, fr, it
    };

private:
    std::string m_name;
    Nationality m_nationality;

public:
    Person(std::string name, Nationality nationality);
    ~Person();

    void greet(Person* other);
    std::string getName();

};