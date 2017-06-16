#pragma once
#include <cmath>

class Vector
{
public:
	Vector(float x=0, float y=0);
	virtual ~Vector(void);
	float modulo();
	float argumento();	// argumento del vector
	void setValor(float x, float y);
	float getX();
	float getY();
	Vector operator - (Vector &);
	Vector operator + (Vector &);
	Vector operator * (float);
	Vector operator / (float);
	float operator * (Vector &);
	Vector unitario();
	float vx, vy;
};

