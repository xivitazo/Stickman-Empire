#include "Disparo.h"


Disparo::Disparo(void)
{
	//dejo al constructor de oficio pero lo inicializo a 0 por si acaso.
	//radio pequeño (copiado de Pang)
	velocidad.x=0;
	velocidad.y=0.0f;
	radio=0.1f;
	daño=0;
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