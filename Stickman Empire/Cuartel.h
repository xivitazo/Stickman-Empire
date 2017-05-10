#pragma once
#include "edificio.h"
#include "personaje.h"
class Cuartel : public edificio
{
protected:
	unsigned int limite_tropas, numero_tropas;

public:
	Cuartel(void);
	virtual ~Cuartel(void);
	void generarTropa (void); //mirar el cpp
	void newTropa(unsigned int tipo);
	void timer (int t);

	friend class Interaccion;
};