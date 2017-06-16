#pragma once
#include "edificio.h"
#include "Recursos.h"
class Fabrica : public Edificio
{
protected:
	Recursos produccion;
	unsigned int p_subirNivel; 
	//Precio de oro que cuesta subir de nivel;

public:
	Fabrica(int tipo);
	virtual ~Fabrica(void);
	//void subirNivel(int tipo=0); Creo que la has puesto duplicada
	//falta implementar el rollo de cobrar el subir de nivel
	void dibuja(void);
	void timer (float tiempo);
	void subirNivel(unsigned int tipo);

	friend class Interaccion;
};


