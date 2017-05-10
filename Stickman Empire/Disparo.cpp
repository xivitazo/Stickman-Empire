#include "Disparo.h"
#include "Interaccion.h"

Disparo::Disparo(vector posicion, edificio destino,unsigned int daño, unsigned int salpicadura )
{
	//dejo al constructor de oficio pero lo inicializo a 0 por si acaso.
	//radio pequeño (copiado de Pang)
	//velocidad y posicion están en principio a 0 ( por vector )
	radio=0.1f;
	this ->daño=daño;
	this ->destino = destino;
	this ->posicion = posicion;
	this -> salpicadura = salpicadura;
}


Disparo::~Disparo(void)
{
}

bool Disparo::Mueve(float t)
{
	vector v;
	v=(destino.posicion-posicion).unitario();
//Hallas la direccion ue debe seguir el disparo de forma dinámica
	posicion=posicion + v*t;
	if (abs(posicion.vx-destino.posicion.vx)<=destino.superificie.vx && abs(posicion.vy-destino.posicion.vy)<=destino.superificie.vy)
//Si esta dentro de los limites del objetivo
	{
		Interaccion::ataque (posicion, daño, salpicadura);
		return 1;
	}
	return 0;

}


