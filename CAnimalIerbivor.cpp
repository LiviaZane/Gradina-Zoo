#include "CAnimalIerbivor.h"

void CAnimalIerbivor::citeste() {
	string znume;
	cout << "Nume animal : ";
	cin >> znume;
	this->SetNume(znume);
	int ztimp;
	cout << "Timp aducere : ";
	cin >> ztimp;
	this->SetData_Aducerii(ztimp);
	int greut;
	cout << "Greutate : ";
	cin >> greut;
	this->SetGreutate(greut);
	string hrana;
	cout << "Hrana preferata : ";
	cin >> hrana;
	this->SetHrana_Preferata(hrana);
	int cantitate;
	cout << "Cantitate hrana pe zi : ";
	cin >> cantitate;
	this->SetCantitate_hrana_pe_zi(cantitate);
}

void CAnimalIerbivor::scrie() {
	cout << "Nume animal : " << this->GetNume() << endl;
	cout << "Timp aducere : " << this->GetData_Aducerii() << endl;
	cout << "Greutate : " << this->GetGreutate() << endl;
	cout << "Hrana preferata : " << this->GetHrana_Preferata() << endl;
	cout << "Cantitate hrana pe zi : " << this->GetCantitate_hrana_pe_zi() << endl;
}