#include "Disparo.h"


Disparo::Disparo(unsigned int d, float r)
{
	//dejo al constructor de oficio pero lo inicializo a 0 por si acaso.
	//radio peque�o (copiado de Pang)
	//velocidad y posicion est�n en principio a 0 ( por vector )
	radio=r;
	da�o=d;
}


Disparo::~Disparo(void)
{
}

void Disparo::Mueve(float t)
{
	posicion=posicion+velocidad*t;
	/*En principio no le meto aceleraci�n
	al disparo, por simplificar */
}

