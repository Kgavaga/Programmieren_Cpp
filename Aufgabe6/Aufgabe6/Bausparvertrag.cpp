#include "Bausparvertrag.h"
#include <iostream>

Bausparvertrag::Bausparvertrag(const int & blz, const double & guthaben, const double & zinssatz, const double & bausparsumme)
	:Account(blz, guthaben, zinssatz), _bausparsumme(bausparsumme)
{
}

Bausparvertrag::~Bausparvertrag()
{
}

bool Bausparvertrag::einzahlen(const double & betrag)
{
	if (betrag >= 0 && _guthaben + betrag <= _bausparsumme)
	{
		_guthaben += betrag;
		return true;
	}
	return false;
}

void Bausparvertrag::printAll() const
{
	Account::printAll();
	std::cout << "Bausparsumme: " << _bausparsumme << std::endl;
}
