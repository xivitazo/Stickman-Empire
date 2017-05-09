#include "Interaccion.h"


Interaccion::Interaccion(void)
{
}


Interaccion::~Interaccion(void)
{
}

void Interaccion::ataque ( Disparo &d, edificio &e)
{
	Objeto o;
	float distancia;
	distancia=(d.posicion-e.posicion).modulo();		//distancia de los dos objetos
	if (distancia<=0.0f)
	{
		e.vida-=d.daño;
	}

}