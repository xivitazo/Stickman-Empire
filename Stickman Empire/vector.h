#pragma once
#include <cmath>

class vector
{
public:
	vector(float x=0, float y=0);
	virtual ~vector(void);
	float modulo();
	float argumento();	// argumento del vector
	void setValor(float x, float y);
	float getX();
	float getY();
	vector operator - (vector &);
	vector operator + (vector &);
	vector operator * (float);
	vector operator / (float);
	float operator * (vector &);
	vector unitario();
	float vx, vy;
};

