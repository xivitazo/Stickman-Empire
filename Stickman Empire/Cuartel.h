#pragma once
#include "edificio.h"
#include "personaje.h"
class Cuartel : public edificio
{
protected:
	unsigned int limite_tropas;

public:
	Cuartel(void);
	virtual ~Cuartel(void);
	void generarTropa (/*No sabemos que poner*/);

	friend class Interaccion;
};