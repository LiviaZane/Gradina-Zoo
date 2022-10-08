#include "CCaprioara.h"

void CCaprioara::citeste() {
	CAnimalIerbivor::citeste();
	int pui;
	cout << "Numar pui : ";
	cin >> pui;
	this->nr_pui = pui;
}

void CCaprioara::scrie() {
	cout << "------ Animal ierbivor ------" << endl;
	CAnimalIerbivor::scrie();
	cout << "Numar pui : " << this->nr_pui << endl << endl;
}