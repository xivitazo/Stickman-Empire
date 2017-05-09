#pragma once
#include "edificio.h"
class Cuartel : public edificio
{
protected:
	unsigned int limite_tropas;

public:
	Cuartel(void);
	virtual ~Cuartel(void);
};

