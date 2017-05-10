#pragma once
#include "vector.h"
#include "edificio.h"
class Disparo
{
protected:
	float radio;
	unsigned int daño;
	vector  posicion;
	edificio destino;
	int velocidad, salpicadura;
	//vector aceleracion; lo omitimos por ahora
public:
	//constructor con daño = d y radio = r;
	Disparo(vector posicion, edificio destino,unsigned int daño, unsigned int salpicadura );
	//Introduces la posicion del disparo, aquien disparar, el daño y la salpicadura
	virtual ~Disparo(void);

	void Dibuja();
	bool Mueve(float t); //devuelve un 1 en el momento que llega al destino

	//amigo de la clase interacción para que interaccion
	//pueda usar las cosas de disparo
	friend class Interaccion;
};

