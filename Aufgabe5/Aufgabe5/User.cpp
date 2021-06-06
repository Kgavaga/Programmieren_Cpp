#include "User.h"
#include <string>
#include <iostream>

long long int User::_counter = 0;

User::User(std::string name) :_name(name)
{
	_id = _counter++;
}

void User::print() const
{
	std::cout << _name << " hat die ID: " << _id << std::endl;
}
