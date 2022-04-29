#include "Opettaja.h"
#include <iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

Opettaja::Opettaja(const string& aNimi, int aIka, const string& aKoulutusala) : Henkilo(aNimi, aIka), mKoulutusala(aKoulutusala)
{
	cout << "Opettaja-luokan rakentaja" << endl;
}

void Opettaja::tulostaTiedot() const
{
	Henkilo::tulostaTiedot();
	cout << "Tulostetaan OPETTAJAN tiedot" << endl;
	cout << "Koulutusala " << mKoulutusala << endl;
}
