#ifndef CIEPURE_H
#define CIEPURE_H

#include "CAnimalIerbivor.h"

class CIepure : public CAnimalIerbivor {
public:
	int suprafata_pe_care_traieste = 0;
	void citeste() override;
	void scrie() override;
};

#endif