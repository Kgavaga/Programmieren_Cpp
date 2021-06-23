#include "Person.h"
#include <string>
#include <iostream>
#include <memory>

int Person::_counter = 0;

Person::Person(const std::string& name)
	:_name(name), _id(_counter++)
{
	std::cout << "Erstelle Person " << _id << " namens " << _name << std::endl;
}

Person::~Person()
{
	std::cout << "Zerstoere Person " << _id << " namens " << _name << std::endl;
}
