#pragma once
#include "ayuntamiento.h"

class Personaje : public Ayuntamiento
{
protected:
	Vector velocidad;
	unsigned int velocidad_max;
	void setStats ( unsigned int vida,unsigned int ataque, unsigned int velocidad);

public:
	Personaje(int tipo);
	/*Lista de tipos:
		0-Prueba, todo 1 (subidas de nivel del 10%
		1-.........*/
	virtual ~Personaje(void);
	bool mueve (Vector destino);
	//devuele un 1 cuando llega a la posicion
	bool atacar (Edificio &objetivo);
	//Ataca, o se mueve hasta donde pueda atacar para golpear al objetivo
	//Devuelve un 1 cuando crea un disparo hacia el objetivo
	void dibuja(void);
	void timer (float tiempo);
	void subirNivel(unsigned int tipo);

	friend class Interaccion;
	friend class Lista_de;
};