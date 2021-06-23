#pragma once
#include <string>

class Person {
	const std::string _name;
	static int _counter;
	const int _id;

	//std::vector<Team> teamList;

public:
	Person(const std::string& name);
	~Person();
	//void addTeam(Team team);
};