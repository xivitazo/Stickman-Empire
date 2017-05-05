#pragma once
#include "vector.h"
#include "stats.h"

//#include "arquero.h"
class personaje : public stats
{
public:
	personaje(void);
	virtual ~personaje(void);
	void mueve(float tiempo);
	void tecla();
	void subirNivel();
private:
	vector posicion, velocidad, aceleracion;
	bool estado;
	//unsigned int vida;
	static unsigned int numero_generado, numero_total;
};

