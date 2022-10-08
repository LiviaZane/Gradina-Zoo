#ifndef CVULPE_H
#define CVULPE_H

#include "CAnimalCarnivor.h"

class CVulpe : public CAnimalCarnivor {
public:
	int temp_max = 0;
	string tip = "";
	void citeste() override;
	void scrie() override;
};

#endif