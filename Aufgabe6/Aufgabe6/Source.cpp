#include <iostream>
#include <string>
#include <random>
#include "Account.h"
#include "Tagesgeldkonto.h"
#include "Bausparvertrag.h"
#include "Girokonto.h"

int main()
{
	Tagesgeldkonto k1(12345678, 100.0, 0.001);
	Bausparvertrag k2(23456789, 100.0, 0.001, 999);
	Girokonto k3(34567890, 100.0, 0.001);
	Account* list[] = { &k1, &k2, &k3 };

	for (size_t i = 0; i < std::size(list); i++)
	{
		list[i]->printAll();
		list[i]->einzahlen(1000);
		std::cout << std::endl;
	}

	for (size_t i = 0; i < std::size(list); i++)
	{
		list[i]->printAll();
		list[i]->einzahlen(100);
		std::cout << std::endl;
	}

	for (size_t i = 0; i < std::size(list); i++)
	{
		list[i]->printAll();
		std::cout << std::endl;
	}
	return false;
}