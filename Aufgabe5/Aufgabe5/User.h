#pragma once
#include <string>
class User
{
	std::string _name;
	long long int _id;
	static long long int _counter;

public:
	User(std::string name = "Hans");
	void print() const;
};