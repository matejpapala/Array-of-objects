#include <iostream>
#include "kniha.h"

int main() {
	double prum;
	kniha book1(1,"heripotr", 100);
	kniha book2(2,"vitchr", 200);
	kniha book3(3,"alchemista", 300);
	knihovna x;
	x.pridatKnihu(book1);
	x.pridatKnihu(book2);
	x.pridatKnihu(book3);
	
	cout << x;
	
	prum = x.prumerCenyKnih();
	cout << "Prumer cen je: " << prum << endl;
	return 0;
}
