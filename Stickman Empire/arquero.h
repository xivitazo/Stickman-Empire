#pragma once
#include "vector.h"
#include "stats.h"
class arquero
{
public:
	arquero(void);
	~arquero(void);

private:
	vector posicion, velocidad;
	stats stat;
};

