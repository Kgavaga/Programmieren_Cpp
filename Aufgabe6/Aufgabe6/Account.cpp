#include "Account.h"
#include <iostream>
#include <string>
#include <random>
#include <ctime>

std::mt19937 Account::_randomGenerator((time(nullptr)));

Account::Account(const int & blz, const double & guthaben, const double & zinssatz)
	:_kontonummer(_randomGenerator()), _blz(blz), _guthaben(guthaben), _zinssatz(zinssatz)
{}

Account::~Account()
{
}

void Account::printAll() const
{
	std::cout << "Kontonummer: " << _kontonummer<< std::endl;
	std::cout << "BLZ: " << _blz << std::endl;
	std::cout << "Guthaben: " << _guthaben << std::endl;
	std::cout << "Zinssatz: " << _zinssatz << std::endl;
}
