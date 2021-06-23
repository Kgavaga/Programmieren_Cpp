#include "Boat.h"
#include <string>
#include <iostream>
#include <memory>

int Boat::_counter = 0;

Boat::Boat(const std::string& name)
	:_name(name), _id(_counter++)
{
	std::cout << "Erstelle Boat " << _id << " namens " << _name << std::endl;
}

Boat::~Boat()
{
	std::cout << "Zerstoere Boat " << _id << " namens " << _name << std::endl;
}
