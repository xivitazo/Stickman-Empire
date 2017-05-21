#pragma once
#include "ayuntamiento.h"

class personaje : public ayuntamiento
{
protected:
	vector velocidad;
	vector aceleracion;
	unsigned int velocidad_max;
	void setStats ( unsigned int vida,unsigned int ataque, unsigned int velocidad);

public:
	personaje(int tipo);
	/*Lista de tipos:
		0-Prueba, todo 1 (subidas de nivel del 10%
		1-.........*/
	virtual ~personaje(void);
	bool mueve (vector destino, float t);
	//devuele un 1 cuando llega a la posicion
	bool atacar (edificio objetivo);
	//devuelve un 1 cuando ha atacado
	void dibuja();
	void subirNivel(unsigned int tipo);

	friend class Interaccion;
	friend class Lista_de;
};