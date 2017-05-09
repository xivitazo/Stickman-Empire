#pragma once
#include "edificio.h"
class Fabrica : public edificio
{
protected:
	unsigned int comida, hierro, oro;
public:
	Fabrica(void);
	virtual ~Fabrica(void);
};


