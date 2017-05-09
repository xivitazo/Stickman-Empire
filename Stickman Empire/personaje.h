#pragma once
#include "ayuntamiento.h"

class personaje : public ayuntamiento
{
protected:
	vector velocidad, velocidad_max;
	vector aceleracion;

public:
	personaje(void);
	virtual ~personaje(void);
	void mueve();

	friend class Interaccion;
};