#pragma once
#include "Account.h"

class Girokonto : public Account
{
public:
	Girokonto(const int & blz, const double & guthaben, const double & zinssatz);
	~Girokonto();
	bool einzahlen(const double & betrag) override;
};