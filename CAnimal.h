#ifndef CANIMAL_H
#define CANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class CAnimal {            
	string nume = "";          
	int data_aducerii = 0;
	int greutate = 0;
	string hrana_preferata = "";
	int cantitate_hrana_pe_zi = 0;
public:
	virtual void citeste() = 0;              
	virtual void scrie() = 0;               

	string GetNume();       
	int GetData_Aducerii();
	int GetGreutate();
	string GetHrana_Preferata();
	int GetCantitate_hrana_pe_zi();
	void SetNume(string nume);
	void SetData_Aducerii(int timp);
	void SetGreutate(int greut);
	void SetHrana_Preferata(string hrana);
	void SetCantitate_hrana_pe_zi(int cantitate);

	virtual ~CAnimal() {};              
};

#endif
