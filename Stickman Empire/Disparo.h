#pragma once
#include "vector.h"
class Disparo
{
protected:
	float radio;
	unsigned int daño;
	vector posicion;
	vector velocidad;
	//vector aceleracion;
public:
	Disparo(void);
	virtual ~Disparo(void);

	void Dibuja();
	void Mueve(float t);
};

