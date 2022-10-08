#include "CUrs.h"

void CUrs::citeste() {
	CAnimalCarnivor::citeste();
	string perioada;
	cout << "Perioada de hibernare : ";
	cin >> perioada;
	this->perioada_hibernare = perioada;
}

void CUrs::scrie() {
	cout << "------ Animal ierbivor si carnivor ------" << endl;
	CAnimalIerbivor::scrie();
	cout << "Perioada de hibernare : " << this->perioada_hibernare << endl << endl;
}