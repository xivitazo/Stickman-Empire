#include "Disparo.h"
#include "Interaccion.h"
#include "glut.h"

Disparo::Disparo(vector posicion, edificio destino,unsigned int da�o, unsigned int salpicadura )
{
	//radio peque�o (copiado de Pang)
	radio=0.1f;
	this ->da�o=da�o;
	this ->destino = destino;
	this ->posicion = posicion;
	this -> salpicadura = salpicadura;
}


Disparo::~Disparo(void)
{
}

bool Disparo::Mueve(void)
{
	vector v;
	v=(destino.posicion-posicion).unitario();
//Hallas la direccion ue debe seguir el disparo de forma din�mica
	velocidad = v*velocidad_max;
	if (abs(posicion.vx-destino.posicion.vx)<=destino.superificie.vx && abs(posicion.vy-destino.posicion.vy)<=destino.superificie.vy)
//Si esta dentro de los limites del objetivo
	{
		Interaccion::ataque (posicion, da�o, salpicadura);
		return 1;
	}
	return 0;

}
void Disparo :: timer(float tiempo)
{
	posicion=posicion+velocidad*tiempo;
}
void Disparo :: dibuja(void)
{
	glTranslatef(posicion.vx,posicion.vy,5);
	glutSolidSphere(radio,20,20);
	glTranslatef(-posicion.vx,-posicion.vy,-5);
}

