#ifndef CLEU_H
#define CLEU_H

#include "CAnimalCarnivor.h"

class CLeu : public CAnimalCarnivor {
public:
	int temp_min = 0;
	string tara_prov = "";
	void citeste() override;
	void scrie() override;
};

#endif