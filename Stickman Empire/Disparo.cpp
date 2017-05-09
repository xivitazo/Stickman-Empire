#include "Disparo.h"


Disparo::Disparo(unsigned int d, float r)
{
	//dejo al constructor de oficio pero lo inicializo a 0 por si acaso.
	//radio pequeño (copiado de Pang)
	//velocidad y posicion están en principio a 0 ( por vector )
	radio=r;
	daño=d;
}


Disparo::~Disparo(void)
{
}

void Disparo::Mueve(float t)
{
	posicion=posicion+velocidad*t;
	/*En principio no le meto aceleración
	al disparo, por simplificar */
}

