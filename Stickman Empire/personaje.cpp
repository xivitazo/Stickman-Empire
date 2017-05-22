#include "personaje.h"
#include "Disparo.h"


personaje::personaje(int tipo)
{
	if (tipo==0)
	{
		setStats(1,1,1);
	}
}


personaje::~personaje(void)
{
}

void personaje :: setStats ( unsigned int vida, unsigned int ataque,unsigned int velocidad)
{
	this -> vida_max = vida;
	this -> ataque = ataque;
	this -> velocidad_max = velocidad;
}
bool personaje:: mueve(vector destino)
{
	if (abs(destino.vx-posicion.vx)<=0.01&&abs(destino.vy-posicion.vy)<=0.01)
	{
		velocidad=0;
		return 1;
	}
	velocidad=(destino-posicion).unitario()*(float)velocidad_max;
	return 0;
}
bool personaje ::atacar (edificio &objetivo)
{
	if ((posicion-objetivo.getPoscion()).modulo()> rango)
	{
		mueve(posicion+((posicion-objetivo.getPoscion()).unitario()*((posicion-objetivo.getPoscion()).modulo()-rango)));
		return 0;
	}
	else
	{
		new Disparo (posicion,objetivo,ataque,salpicadura);
		return 1;
	}
}
void personaje :: subirNivel (unsigned int tipo)
{
	if (tipo ==1)
	{
		setStats (vida_max*1.1f,ataque*1.1f,velocidad_max*1.1f);
		vida=vida_max;
	}
}