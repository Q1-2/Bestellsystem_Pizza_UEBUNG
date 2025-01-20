#include "Bestellposition.h"

Bestellposition::Bestellposition(int posNr, Pizza* pizza, int menge)
{

}

Pizza* Bestellposition::getPizza() const
{
	return _pizza;
}

int Bestellposition::getMenge() const
{
	return _menge;
}
