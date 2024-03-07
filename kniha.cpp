#include "kniha.h"

kniha::kniha(){
	this->cena = 0;
	this->id = -1;
	this->nazev = "0";
}

kniha::kniha(int id, string nazev, double cena) {
	this->id = id;
	this->nazev = nazev;
	this->cena = cena;
}

ostream& operator<<(ostream& vystup, kniha &x) {
	cout << "Nazev: " << x.nazev << ", ID: " << x.id << ", cena: " << x.cena << endl;
	return vystup;
}

istream& operator>>(istream& vstup, kniha &x) {
	cout << "Zadejte nazev: ";
	getline(cin, x.nazev);
	cout << "Zadejte cenu: ";
	vstup >> x.cena;
	cout << "Zadejte id: ";
	vstup >> x.id;
	return vstup;	
}

double kniha::getCena() {
	return this->cena;
}
