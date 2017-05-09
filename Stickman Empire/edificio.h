#pragma once
#include "Objeto.h"
#include "ayuntamiento.h"
class edificio : public Objeto
{
protected:
	unsigned int vida;
	//tener cuidado que static este funcionaria tanto para nuestro ayuntamiento
	//como para el del rival en caso de que exista
	static unsigned int numero_generado, numero_total;

public:
	edificio(unsigned int v=0);
	virtual ~edificio(void);
	void tecla();
	void subirNivel();
	void timer (float tiempo);
	void atacado (unsigned int daño);

	friend class Interaccion;
	friend class Disparo;
};
