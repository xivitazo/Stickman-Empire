#pragma once
#include "vector.h"
#include "edificio.h"
class Disparo
{
protected:
	float radio;
	unsigned int da�o;
	vector  posicion;
	edificio destino;
	int velocidad, salpicadura;
	//vector aceleracion; lo omitimos por ahora
public:
	//constructor con da�o = d y radio = r;
	Disparo(vector posicion, edificio destino,unsigned int da�o, unsigned int salpicadura );
	//Introduces la posicion del disparo, aquien disparar, el da�o y la salpicadura
	virtual ~Disparo(void);

	void Dibuja();
	bool Mueve(float t); //devuelve un 1 en el momento que llega al destino

	//amigo de la clase interacci�n para que interaccion
	//pueda usar las cosas de disparo
	friend class Interaccion;
};

