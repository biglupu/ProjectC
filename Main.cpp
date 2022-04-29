#include <iostream>
#include <string>
#include <vector>
#include "Henkilo.h"
#include "Osoite.h"
#include "Opiskelija.h"
#include "Opettaja.h"
#include "Koulu.h"



using std::cout;
using std::endl;
using std::string;



int main() {

	//Small change?

	//Polymorfismi. Olio voi samanaikaisesti olla monen luokan instanssi. "Opettaja" on myös ihminen :D

	//C++ oletuksena "staattinen sidonta". Metodin toteutus valitaan osoittimen tyypin perusteella.
	//Muissa oliokielissä Java, C#, Swift oletuksena ja ainoana vaihtoehtona on ns. "dynaaminen sidonta" eli 
	//ajonaikaisesti katsotaan, minkä luokan instanssi on kantaluokkaosoittimen takana, ja valitaan metodi sen mukaan


	Henkilo kalle("Kalle", 20);



	//vector<Opettaja*>opettajat;
	//opettajat.push_back(new Opettaja("Kalle", 25, "Tietotekniikka "));
	//opettajat.push_back(new Opettaja("Kille", 27, "ATK "));


	//vector<Opiskelija*>opiskelijat;
	//opiskelijat.push_back(new Opiskelija("Valle", 20, "654321"));

	//opiskelijat.push_back(new Opiskelija("Ville", 20, "12345"));













	//vector<Henkilo*>henkilot;
	//henkilot.push_back(new Opettaja("Kalle", 25, "Tietotekniikka "));

	//henkilot.push_back(new Opiskelija("Ville", 20, "12345"));

	//henkilot.push_back(new Opettaja("Kille", 27, "ATK "));

	//henkilot.push_back(new Opiskelija("Valle", 20, "654321"));


	//for (Henkilo* h : henkilot) 
	//{
	//	h->tulostaTiedot();
	//}

	//for (Henkilo* h : henkilot) 
	//{
	//	delete h;
	//}

	//henkilot.clear(); //poistetaan osoittiment vektorista

	return 0;
}


//Henkilo* kille = new Opettaja("Kille", 27, "ATK ");
//kille->tulostaTiedot();
//
//Opettaja* kalle = new Opettaja("Kalle", 25, "Tietotekniikka ");
//kalle->tulostaTiedot();
//
//Henkilo* valle = new Opiskelija("Valle", 20, "654321");
//valle->tulostaTiedot();
//
//Opiskelija* ville = new Opiskelija("Ville", 20, "12345");
//ville->tulostaTiedot();


//Henkilo pekka("Pekka", 20);
//Henkilo x(pekka);
//pekka.tervehdi();
//
//cout << "Kopio x tervehdi!" << endl;
//x.tervehdi();
//
//Kalenterimerkinta ohjelmoinninTunnit(Paivays(1, 4, 2022), "Tunnit", true);
//ohjelmoinninTunnit.tulostaMerkinta();
//Kalenterimerkinta uusiMerkinta;
//uusiMerkinta.kysyTiedot();
//uusiMerkinta.tulostaMerkinta();
//Kalenterimerkinta p(uusiMerkinta);
//p.tulostaMerkinta();
//
//Opiskelija kalle("Kalle", 20, "12345");
//kalle.tulostaTiedot();
//
//cout << "Lisaa kallelle kursseja ja opintopisteita" << endl;
//kalle.lisaaKurssi("Ohjelmoinnin perusteet");
//kalle.lisaaOpintopisteita(5);
//kalle.lisaaKurssi("Tietotekniikan perusteet");
//kalle.lisaaOpintopisteita(3);
//
//kalle.tulostaTiedot();