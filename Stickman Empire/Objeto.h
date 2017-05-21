#pragma once
#include "vector.h"
class Objeto
{
protected:
	bool visible;
	vector posicion;
	vector superificie;
	float altura;
public:
	//constructor con altura y visibilidad por defecto a 0
	Objeto(float a=0,bool v=0);
	virtual ~Objeto(void);
	virtual void dibuja();

	friend class Interaccion;
};

