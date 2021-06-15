#pragma once
#include "Account.h"

class Tagesgeldkonto : public Account
{
	bool _einmalEingezahlt = false;
public:
	Tagesgeldkonto(const int & blz, const double & guthaben, const double & zinssatz);
	~Tagesgeldkonto();
	bool einzahlen(const double & betrag) override;
	virtual void printAll() const;
};