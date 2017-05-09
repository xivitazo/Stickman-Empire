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

	static void ataque( Disparo &d, edificio &e);
	static void choque ( Objeto &o, Objeto &p);
};

