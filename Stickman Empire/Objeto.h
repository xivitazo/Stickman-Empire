#pragma once
#include "vector.h"
#include "glut.h"

class Objeto
{
protected:
	bool visible;
	Vector posicion;
	Vector superificie;
	float altura;
public:
	//constructor con altura y visibilidad por defecto a 0
	Objeto(float a=0,bool v=0);
	virtual ~Objeto(void);
	virtual void dibuja(void);
	virtual void timer (float tiempo);
	Vector getPoscion();

	friend class Interaccion;
};

