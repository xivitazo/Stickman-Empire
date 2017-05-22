#pragma once
#include "edificio.h"
#include "personaje.h"
#include "Lista_de.h"
class Cuartel : public edificio
{
protected:
	unsigned int limite_tropas, numero_tropas;
	unsigned int tiempo;

public:
	Cuartel(void);
	virtual ~Cuartel(void);
	bool newTropa();
	//Devuelve un TRUE si se puede generar una nueva tropa 
	//Un FALSE si ya ha generado el maximo por unidad de tiempo
	void timer (float tiempo);
	bool poderGenerar (void);
	void dibuja();
	void subirNivel(unsigned int tipo=0);

	friend class Interaccion;
};