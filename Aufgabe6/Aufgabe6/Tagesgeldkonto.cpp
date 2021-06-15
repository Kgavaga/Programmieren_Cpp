#include "Tagesgeldkonto.h"
#include <iostream>

Tagesgeldkonto::Tagesgeldkonto(const int & blz, const double & guthaben, const double & zinssatz)
	:Account(blz, guthaben, zinssatz)
{
}

Tagesgeldkonto::~Tagesgeldkonto()
{
}

bool Tagesgeldkonto::einzahlen(const double & betrag)
{
	if (_einmalEingezahlt && betrag >= 0) return false;
	_einmalEingezahlt = true;
	_guthaben += betrag;
	return true;
}

void Tagesgeldkonto::printAll() const
{
	Account::printAll();
	std::cout << "Bereits einmal eingezahlt: " << ((_einmalEingezahlt) ? "Ja" : "Nein") << std::endl;
}
