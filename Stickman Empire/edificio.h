#pragma once
#include "Objeto.h"
class edificio : public Objeto
{
protected:
	unsigned int vida,vida_max;
	//tener cuidado que static este funcionaria tanto para nuestro ayuntamiento
	//como para el del rival en caso de que exista
	static unsigned int numero_generado, numero_total, nivel;
	unsigned int limite;
	//Limite de generacion por unidad de tiempo (Cuarteles y fábricas)
	unsigned int nombre;
	//Este es el "nombre" de cada clase
	//


	//Hay que organizar una variable de coste de cada edificio y tal
	//habia 
	int tipo;
	//Estableces el tipo de clase edificio tal y como se establece en Lista_de.h


public:
	edificio(unsigned int v=0);
	virtual ~edificio(void);
	void tecla();
	void timer (float tiempo);
	void dibuja();
	void setTipo(unsigned int tipo);
	/*virtual*/bool poderGenerar (void);
	//Te dice si puedes generar independientemente del ripo de edificio que sea
	//En un personaje no se usará
	virtual void subirNivel(unsigned int tipo=0){};
	//Solo se usará el tipo en la clase personaje para definir que tropa sube de nivel

	friend class Interaccion;
	friend class Disparo;
	friend class Lista_de;
};
