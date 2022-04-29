#pragma once
#include "Henkilo.h"
class Opettaja : public Henkilo
{
public: 
	Opettaja();
	Opettaja(const string& aNimi, int aIka, const string& aKoulutusala);
	void tulostaTiedot() const;

private:
	string mKoulutusala;

};

