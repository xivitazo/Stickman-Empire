#include "Interaccion.h"


Interaccion::Interaccion(void)
{
}


Interaccion::~Interaccion(void)
{
}

void Interaccion:: ataque (vector posicion, unsigned int daño, unsigned int salpicadura)
{
	//Falta por programar, me faltan los apuntes de ayer
	//sin embargo solo falta programar el hecho de hacer daño en un área
}
float Interaccion :: distancia (Objeto &a, Objeto &b)
{
	return sqrt((a.posicion.vx-b.posicion.vx)*(a.posicion.vx-b.posicion.vx)+(a.posicion.vy-b.posicion.vy)*(a.posicion.vy-b.posicion.vy));
}