#include "CLeu.h"


void CLeu::citeste() {
	CAnimalCarnivor::citeste();
	int temp;
	cout << "Temperatura minima : ";
	cin >> temp;
	this->temp_min = temp;
	string tara;
	cout << "Tara de provenienta : ";
	cin >> tara;
	this->tara_prov = tara;
}

void CLeu::scrie() {
	cout << "------ Animal carnivor ------" << endl;
	CAnimalCarnivor::scrie();
	cout << "Temperatura minima : " << this->temp_min << endl;
	cout << "Tara de provenienta : " << this->tara_prov << endl << endl;
}
