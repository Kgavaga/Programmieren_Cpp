#include <iostream>
#include <string>
#include "User.h"

int main()
{
	User* p1 = new User();
	User* p2 = new User("Jasmine");
	User* p3 = new User("Roger");

	User* people[] = { p1,p2,p3 };

	for (size_t i = 0; i < std::size(people); i++)
	{
		people[i]->print();
	}
}