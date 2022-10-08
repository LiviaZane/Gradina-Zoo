#include "CVulpe.h"

void CVulpe::citeste() {
	CAnimalCarnivor::citeste();
	int temperatura;
	cout << "Temperatura maxima : ";
	cin >> temperatura;
	this->temp_max = temperatura;
	string tipul;
	cout << "Tip : ";
	cin >> tipul;
	this->tip = tipul;
}

void CVulpe::scrie() {
	cout << "------ Animal carnivor ------" << endl;
	CAnimalCarnivor::scrie();
	cout << "Temperatura maxima : " << this->temp_max << endl;
	cout << "Tip : " << this->tip << endl << endl;
}