#pragma once
#include "edificio.h"
#include "Lista_de.h"
class ayuntamiento : public edificio
{
protected:
	unsigned int ataque, rango, salpicadura;

public:
	ayuntamiento(void);
	~ayuntamiento(void);
	void atacar (edificio &atacado);
	void dibuja();


	friend class Interaccion;
};

