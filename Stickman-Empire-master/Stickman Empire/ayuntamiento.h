#pragma once
#include "edificio.h"

class Ayuntamiento : public Edificio
{
protected:
	unsigned int ataque, rango, salpicadura;

public:
	Ayuntamiento(void);
	~Ayuntamiento(void);
	virtual bool atacar (Edificio &objetivo);
	//Devuelve un 1 cuando crea un disparo hacia el objetivo
	void timer (float tiempo);
	void dibuja(void);
	void subirNivel(unsigned int tipo);


	friend class Interaccion;
};

