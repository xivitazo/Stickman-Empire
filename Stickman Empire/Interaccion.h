#pragma once
//la encargada de cualquier interaccion
#include "edificio.h"
#include "Mapa.h"
#include "vector.h"
#include "Disparo.h"


class Interaccion
{
public:
	Interaccion(void);
	virtual ~Interaccion(void);
	static void ataque(vector posicion, unsigned int daño, unsigned int salpicadura); //Introduces donde atacar y cuando daño haces
	static void choque ( Objeto &o, Objeto &p);
	static float distancia (Objeto &a, Objeto &b);
};

