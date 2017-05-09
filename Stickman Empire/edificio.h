#pragma once
#include "Objeto.h"
class edificio : public Objeto
{
public:
	edificio(void);
	virtual ~edificio(void);
	void tecla();
	void subirNivel();
	void timer (float tiempo);
protected:
	unsigned int vida;
	static unsigned int numero_generado, numero_total;
};
