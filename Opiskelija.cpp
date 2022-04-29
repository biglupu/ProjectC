#include "Opiskelija.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

//Aina kun luodaan opiskelija, luodaan myös henkilö, koska Class Opiskelija : public Henkilö




Opiskelija::Opiskelija(const string& aNimi, int aIka, const string& aOpNro) : Henkilo (aNimi, aIka), mOpNro(aOpNro)
{
	cout << "Opiskelija -luokan parametrillinen rakentaja" << endl;
}

Opiskelija::Opiskelija() : Henkilo()
{
	cout << "opiskelija -luokan rakentaja" << endl;
}

void Opiskelija::lisaaKurssi(const string& aKurssi)
{
	mKurssit.push_back(aKurssi);
}

void Opiskelija::lisaaOpintopisteita(int aOpintopisteet)
{
	mOpintopisteet += aOpintopisteet;
}

int Opiskelija::getOpintopisteet() const
{
	return mOpintopisteet;
}

//Nimi on Private tietoluokka Henkilo classissä, joten Opiskelija class joutuu käyttämään Public rajapintaa

void Opiskelija::tulostaTiedot() const
//Periytetyssä luokassa voidaan määritellä uudelleen (override) kantaluokan metodeita. Varottava samannimisiä funktioita VAHINGOSSA perimisen yhteydessä. Periytetty luokka alempana priorityssä
{
	cout << "Tulostetaan OPISKELIJAN tiedot" <<endl;
	Henkilo::tulostaTiedot(); //Täytyy täsmentää Hekilo::tulosta, koska muuten funktio kutsuu loputtomasti itseään.

	cout << "Opiskelijanumero: " << mOpNro << endl;
	cout << "Opintopisteet: " << mOpintopisteet << endl;
	cout << "Suoritetut kurssit " << endl;
	for (string kurssi : mKurssit)
	{
		cout << kurssi << endl;
	}


	//protected notaatio = ulospäin "private" mutta periytyteille luokille "public"
}

string Opiskelija::getOpNro() const
{
	return mOpNro;
}
