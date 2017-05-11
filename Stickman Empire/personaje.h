#pragma once
#include "ayuntamiento.h"

class personaje : public ayuntamiento
{
protected:
	vector velocidad;
	vector aceleracion;
	unsigned int velocidad_max;

public:
	personaje(int tipo);
	/*Lista de tipos:
		0-Prueba, todo 1
		1-.........*/
	virtual ~personaje(void);
	void setStats ( unsigned int vida, 
						unsigned int ataque,
						unsigned int salpicadura,
						unsigned int velocidad);
	bool mueve (vector destino, float t);
	//devuele un 1 cuando llega a la posicion
	bool atacar (edificio objetivo);
	//devuelve un 1 cuando ha atacado

	friend class Interaccion;
};