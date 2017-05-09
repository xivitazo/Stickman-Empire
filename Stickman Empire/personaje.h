#pragma once
#include "ayuntamiento.h"

class personaje : public ayuntamiento
{
public:
	personaje(void);
	virtual ~personaje(void);
	void mueve();
protected:
	vector velocidad, velocidd_max;
	vector aceleracion;
};