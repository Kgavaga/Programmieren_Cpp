#include <string>
#include <iostream>
#include <memory>
#include "Team.h"
#include "Person.h"
#include "Boat.h"

int main()
{
	Person* p1 = new Person("Christoph");
	Person* p2 = new Person("Jordan");
	Person* p3 = new Person("Jack");
	Person* p4 = new Person("Oliver");
	Person* p5 = new Person("Craig");

	Team* t1 = new Team("A");
	Team* t2 = new Team("B");
	Team* t3 = new Team("C");

	Boat* b1 = new Boat("Aldea");

	/*t1->addPerson(p1);
	t1->addPerson(p2);
	t1->addPerson(p3);
	t1->addBoat(b1);*/

	return 0;
}