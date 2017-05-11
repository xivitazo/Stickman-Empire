#include "personaje.h"


personaje::personaje(int tipo)
{
	if (tipo==0)
	{
		setStats(1,1,1,1);
	}
}


personaje::~personaje(void)
{
}

void personaje :: setStats ( unsigned int vida, unsigned int ataque,unsigned int salpicadura,unsigned int velocidad)
{
	this -> vida = vida;
	this -> ataque = ataque;
	this -> salpicadura = salpicadura;
	this -> velocidad_max = velocidad;
}
bool personaje:: mueve(vector destino,float t)
{
	vector v;
	v=(destino-posicion).unitario()*velocidad_max;
//Hallas la direccion ue debe seguir el disparo de forma dinámica
	posicion=posicion + v*t;
	if (abs(destino.vx-posicion.vx)<=0.01&&abs(destino.vy-posicion.vy)<=0.01)
	{
		return 1;
	}
	return 0;
}
bool personaje ::atacar (edificio objetivo)
{
	/*Hay que comprobar que el objetivo esta dentro del rango de disparo, 
	si esta fuera hay que hacer que se mueva por medio de mueve hasta que ya le pega.
	Despues generar un disparo con el objetivo como destino*/
}