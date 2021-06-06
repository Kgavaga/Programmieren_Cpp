#pragma once
#include "Account.h"

class Bausparvertrag : public Account
{
	double _bausparsumme;

public:
	Bausparvertrag(const int blz, const double guthaben, const double zinssatz, const double bausparsumme);
	bool einzahlen(const double betrag) override;
	virtual void printAll();
};