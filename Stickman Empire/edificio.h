#pragma once
#include "stats.h"
#include "vector.h"
class edificio : public stats
{
public:
	edificio(void);
	virtual ~edificio(void);
	void dibuja ();
	void tecla();
	void subirNivel();
	void timer (float tiempo);
private:
	vector posicion;
	unsigned int vida;
	static unsigned int numero_generado, numero_total;
};
