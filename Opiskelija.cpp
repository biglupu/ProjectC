#include "Opiskelija.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

//Aina kun luodaan opiskelija, luodaan my�s henkil�, koska Class Opiskelija : public Henkil�




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

//Nimi on Private tietoluokka Henkilo classiss�, joten Opiskelija class joutuu k�ytt�m��n Public rajapintaa

void Opiskelija::tulostaTiedot() const
//Periytetyss� luokassa voidaan m��ritell� uudelleen (override) kantaluokan metodeita. Varottava samannimisi� funktioita VAHINGOSSA perimisen yhteydess�. Periytetty luokka alempana priorityss�
{
	cout << "Tulostetaan OPISKELIJAN tiedot" <<endl;
	Henkilo::tulostaTiedot(); //T�ytyy t�sment�� Hekilo::tulosta, koska muuten funktio kutsuu loputtomasti itse��n.

	cout << "Opiskelijanumero: " << mOpNro << endl;
	cout << "Opintopisteet: " << mOpintopisteet << endl;
	cout << "Suoritetut kurssit " << endl;
	for (string kurssi : mKurssit)
	{
		cout << kurssi << endl;
	}


	//protected notaatio = ulosp�in "private" mutta periytyteille luokille "public"
}

string Opiskelija::getOpNro() const
{
	return mOpNro;
}
