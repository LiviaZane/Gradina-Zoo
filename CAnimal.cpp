#include "CAnimal.h"

string CAnimal::GetNume() { return nume; };        // functii accesorii
int CAnimal::GetData_Aducerii() { return data_aducerii; };
int CAnimal::GetGreutate() { return greutate; };
string CAnimal::GetHrana_Preferata() { return hrana_preferata; };
int CAnimal::GetCantitate_hrana_pe_zi() { return cantitate_hrana_pe_zi; };

void CAnimal::SetNume(string nume) { this->nume = nume; };
void CAnimal::SetData_Aducerii(int timp) { this->data_aducerii = timp; };
void CAnimal::SetGreutate(int greut) { this->greutate = greut; };
void CAnimal::SetHrana_Preferata(string hrana) { this->hrana_preferata = hrana; };
void CAnimal::SetCantitate_hrana_pe_zi(int cantitate) { this->cantitate_hrana_pe_zi = cantitate; };