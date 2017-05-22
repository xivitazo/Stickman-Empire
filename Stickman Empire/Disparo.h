#pragma once
#include "vector.h"
#include "edificio.h"
#include "Objeto.h"
class Disparo : public Objeto
{
protected:
	float radio;
	unsigned int daño;
	edificio destino;
	vector velocidad;
	int velocidad_max, salpicadura;
	//vector aceleracion; lo omitimos por ahora
public:
	//constructor con daño = d y radio = r;
	Disparo(vector posicion, edificio destino,unsigned int daño, unsigned int salpicadura );
	//Introduces la posicion del disparo, aquien disparar, el daño y la salpicadura
	virtual ~Disparo(void);

	void dibuja(void);
	bool Mueve(void); //devuelve un 1 en el momento que llega al destino
	void timer (float tiempo);

	//amigo de la clase interacción para que interaccion
	//pueda usar las cosas de disparo
	friend class Interaccion;
};

