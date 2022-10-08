#ifndef CCAPRIOARA_H
#define CCAPRIOARA_H

#include "CAnimalIerbivor.h"

class CCaprioara : public CAnimalIerbivor {
public:
	int nr_pui = 0;
	void citeste() override;
	void scrie() override;
};

#endif