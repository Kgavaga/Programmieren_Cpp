#include "Girokonto.h"

Girokonto::Girokonto(const int blz, const double guthaben, const double zinssatz)
	:Account(blz, guthaben, zinssatz)
{}

bool Girokonto::einzahlen(const double betrag)
{
	_guthaben += betrag;
	return true;
}
