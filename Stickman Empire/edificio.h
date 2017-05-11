#pragma once
#include "Objeto.h"
class edificio : public Objeto
{
protected:
	unsigned int vida;
	//tener cuidado que static este funcionaria tanto para nuestro ayuntamiento
	//como para el del rival en caso de que exista
	static unsigned int numero_generado, numero_total, nivel;
	//Hay que organizar una variable de coste de cada edificio y tal
	//habia 


public:
	edificio(unsigned int v=0);
	virtual ~edificio(void);
	void tecla();
	void timer (float tiempo);

	friend class Interaccion;
	friend class Disparo;
};
