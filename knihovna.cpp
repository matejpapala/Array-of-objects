#include "kniha.h"

ostream& operator<<(ostream& vystup, knihovna &x) {
	for(int i=0;i<x.pocet;i++){
		vystup << x.k[i] << endl;
	}
	return vystup;
}

knihovna::knihovna() {
	this->pocet = 0;
}

void knihovna::pridatKnihu(kniha pridavana) {
	this->k[pocet] = pridavana;
	pocet++;
}

double knihovna::prumerCenyKnih() {
	double result;
	for(int i=0;i<this->pocet;i++){
		result += k[i].getCena();
	}
	return result / pocet;
}
