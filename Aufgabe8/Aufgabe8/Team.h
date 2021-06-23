#pragma once
#include <string>
#include <iostream>
#include <memory>
#include <vector>
#include "Boat.h"
#include "Person.h"

class Team {
	const std::string _name;
	static int _counter;
	const int _id;

	const Boat* _boat;
	std::vector<const Person*> _personList;

public:
	Team(const std::string& name);
	~Team();

	void addPerson(const Person* person);
	void addBoat(const Person* person);
};