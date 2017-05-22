#pragma once
#include "vector.h"
#include "edificio.h"
#include "Objeto.h"
class Disparo : public Objeto
{
protected:
	float radio;
	unsigned int da�o;
	edificio destino;
	vector velocidad;
	int velocidad_max, salpicadura;
	//vector aceleracion; lo omitimos por ahora
public:
	//constructor con da�o = d y radio = r;
	Disparo(vector posicion, edificio destino,unsigned int da�o, unsigned int salpicadura );
	//Introduces la posicion del disparo, aquien disparar, el da�o y la salpicadura
	virtual ~Disparo(void);

	void dibuja(void);
	bool Mueve(void); //devuelve un 1 en el momento que llega al destino
	void timer (float tiempo);

	//amigo de la clase interacci�n para que interaccion
	//pueda usar las cosas de disparo
	friend class Interaccion;
};

