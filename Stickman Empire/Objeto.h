#pragma once
#include "vector.h"
class Objeto
{
protected:
	bool Visible;
	vector posicion;
	vector superificie;
	float altura;
public:
	Objeto(void);
	virtual ~Objeto(void);
	void dibuja();
};

