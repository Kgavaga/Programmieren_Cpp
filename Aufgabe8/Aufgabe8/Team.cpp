#include "Team.h"
#include <string>
#include <iostream>

int Team::_counter = 0;

Team::Team(const std::string& name)
	:_name(name), _id(_counter++), _boat(nullptr)
{
	std::cout << "Erstelle Team " << _id << " namens " << _name << std::endl;
}

Team::~Team()
{
	std::cout << "Zerstoere Team " << _id << " namens " << _name << std::endl;
}

void Team::addPerson(const Person* person)
{
	_personList.push_back(person);
}
