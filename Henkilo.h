#pragma once

#include <string>
#include "Osoite.h"
#include "Koulu.h"


using std::string;


//kopiorakentaja on rakentaja, joka saa parametrinään const viitteen saman luokan olioon
//Kääntäjä tekee default kopiojan jos ei määritelty
class Henkilo {
public:

	Henkilo();

	Henkilo(const string& aNimi, int aIka);
	Henkilo(const string& aNimi, int aIka, const Osoite& aOsoite);

	Henkilo(const string& aNimi, int aIka, const Koulu& aKoulunNimi);

	Henkilo(string aNimi, int aIka, Osoite aOsoite);

	Henkilo(const string& aNimi, int aIka, Koulu aKoulunNimi);

	Henkilo(string aNimi, int aIka, Koulu aKoulunNimi);
	
		
	//Kääntäjä tekee oletuksena kopiorakentajan jokaiselle luokalle, esmes alla
	Henkilo(const Henkilo& aHenkilo);


	/*destruktori *~Henkilo();*/



	void setIka(int aIka);
	int getIka() const;
	void setNimi(string aNimi);
	string getNimi() const;

	//Setterit ja getterit osoitteelle
	void setOsoite(Osoite aOsoite);
	Osoite getOsoite() const;

	virtual void tulostaTiedot() const;
	//"virtual" staattinen sidonta => dynaaminen sidonta. Myöhäinen sidonta eli ajonaikaisesti katsotaan onko Henkilö vai Opettaja/Oppilas -luokkaa

	void tervehdi() const;

	

private:

	string nimi;
	int ika;
	Osoite osoite;
	Koulu mKoulunNimi;
};