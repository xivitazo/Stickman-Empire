#pragma once
#include "edificio.h"
#include "Recursos.h"
class Fabrica : public edificio
{
protected:
	Recursos produccion;
	unsigned int p_subirNivel; //Precio de oro que cuesta subir de nivel;

public:
	Fabrica(void);
	virtual ~Fabrica(void);
	void subirNivel(); //falta implementar el rollo de cobrar el subir de nivel

	friend class Interaccion;
};


