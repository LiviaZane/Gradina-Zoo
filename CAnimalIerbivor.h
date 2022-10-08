#ifndef CANIMALIERBIVOR_H
#define CANIMALIERBIVOR_H

#include "CAnimal.h"

class CAnimalIerbivor : virtual public CAnimal {    //virtual, pentru evitare mostenire in romb/diamant la urs
public:
	void citeste() override;
	void scrie() override;
};

#endif