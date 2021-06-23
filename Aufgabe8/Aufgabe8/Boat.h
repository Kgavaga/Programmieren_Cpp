#pragma once
#include <string>
#include <iostream>
#include <memory>

class Boat {
	const std::string _name;
	static int _counter;
	const int _id;

public:
	Boat(const std::string& name);
	~Boat();
};