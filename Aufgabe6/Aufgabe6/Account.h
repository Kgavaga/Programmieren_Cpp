#pragma once
#include <random>
#include <ctime>


class Account
{
protected:
	static std::mt19937 _randomGenerator;
	const long long int _kontonummer;
	const unsigned int _blz;
	double _guthaben;
	double _zinssatz;

public:
	Account(const int blz, const double guthaben, const double zinssatz);
	virtual void printAll();
	virtual bool einzahlen(const double betrag) = 0;
};