#pragma once
#include "Objeto.h"
#include "ayuntamiento.h"
class edificio : public Objeto
{
public:
	edificio(void);
	virtual ~edificio(void);
	void tecla();
	void subirNivel();
	void timer (float tiempo);
	void atacado (unsigned int daño);
protected:
	unsigned int vida;
	static unsigned int numero_generado, numero_total;
};
