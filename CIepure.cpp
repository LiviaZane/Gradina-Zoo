#include "CIepure.h"

void CIepure::citeste() {
	CAnimalIerbivor::citeste();
	int suprafata;
	cout << "Suprafata : ";
	cin >> suprafata;
	this->suprafata_pe_care_traieste = suprafata;
}

void CIepure::scrie() {
	cout << "------ Animal ierbivor ------" << endl;
	CAnimalIerbivor::scrie();
	cout << "Suprafata : " << this->suprafata_pe_care_traieste << endl << endl;
}