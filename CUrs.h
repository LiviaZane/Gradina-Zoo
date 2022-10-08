#ifndef CURS_H
#define CURS_H

#include "CAnimalIerbivor.h"
#include "CAnimalCarnivor.h"

class CUrs : public CAnimalCarnivor, public CAnimalIerbivor {
public:
	string perioada_hibernare;
	void citeste() override;
	void scrie() override;
};

#endif