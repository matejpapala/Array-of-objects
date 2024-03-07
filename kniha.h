#ifndef KNIHA_H
#define KNIHA_H

#define MAX 50
#include <iostream>
using namespace std;

class kniha {
public:
	kniha();
	kniha(int id, string nazev, double cena);
	double getCena();
	friend ostream& operator<<(ostream& vystup, kniha &x);
	friend istream& operator>>(istream& vstup, kniha &x);
private:
	int id;
	string nazev;
	double cena;
};

class knihovna {
private:
	int pocet;
	kniha k[MAX];
public:
	friend ostream& operator<<(ostream& vystup, knihovna &x);
	knihovna();
	void pridatKnihu(kniha pridavana);
	double prumerCenyKnih();
	//vypocitat prumernou cenu knih
};

#endif
