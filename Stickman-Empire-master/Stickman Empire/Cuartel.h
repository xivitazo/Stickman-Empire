#pragma once
#include "edificio.h"
#include "personaje.h"
#include "Lista_de.h"
class Cuartel : public Edificio
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
	void timer (float t); //****LUIS CAMBIA T->TIEMPO******
	// no hará falta usar la t... no entiendo la variable tiempo
	bool poderGenerar ();
	void dibuja();
	void subirNivel(unsigned int tipo=0);

	friend class Interaccion;
};