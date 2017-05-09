#pragma once
#include "vector.h"
class Disparo
{
protected:
	float radio;
	unsigned int daño;
	vector posicion;
	vector velocidad;
	//vector aceleracion; lo omitimos por ahora
public:
	//constructor con daño = d y radio = r;
	Disparo(unsigned int d=0, float r=0);
	virtual ~Disparo(void);

	void Dibuja();
	void Mueve(float t);

	//amigo de la clase interacción para que interaccion
	//pueda usar las cosas de disparo
	friend class Interaccion;
};

