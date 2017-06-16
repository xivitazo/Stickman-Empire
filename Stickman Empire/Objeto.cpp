#include "Objeto.h"


Objeto::Objeto(float a,bool v)
{
	altura=a;
	visible=v;
	//no inicializo posicion y vector porque están ya a 0
	//al crearse la clase vector con ellos.
}


Objeto::~Objeto(void)
{
}

Vector Objeto :: getPoscion()
{
	return posicion;
}
void Objeto :: dibuja(void)
{
	
}