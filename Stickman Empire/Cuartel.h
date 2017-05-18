#pragma once
#include "edificio.h"
#include "personaje.h"
#include "Lista_de.h"
class Cuartel : public edificio
{
protected:
	unsigned int limite_tropas, numero_tropas;

public:
	Cuartel(void);
	virtual ~Cuartel(void);
	bool newTropa(unsigned int tipo);
	void timer (int t);
	void dibuja();
	void subirNivel(unsigned int tipo=0);

	friend class Interaccion;
};