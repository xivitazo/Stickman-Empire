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
	virtual bool atacar (edificio &objetivo);
	//Devuelve un 1 cuando crea un disparo hacia el objetivo
	void timer (float tiempo);
	void dibuja();


	friend class Interaccion;
};

