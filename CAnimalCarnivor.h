#ifndef CANIMALCARNIVOR_H
#define CANIMALCARNIVOR_H

#include "CAnimal.h"

class CAnimalCarnivor : virtual public CAnimal {    //virtual, pentru evitare mostenire in romb/diamant la urs
public:      
	void citeste() override;
	void scrie() override;
};

#endif