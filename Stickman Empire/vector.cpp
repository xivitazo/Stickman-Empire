#include "vector.h"


vector::vector(float x, float y)
{
	vx = x;
	vy = y;
}

vector::~vector(void)
{
}

vector vector :: operator - (vector &v)
{
	vector aux;
	aux.vx =vx - v.vx;
	aux.vy =vy - aux.vy;
	return aux;
}

vector vector:: operator + (vector &v)
{
	vector aux;
	aux.vx =vx + v.vx;
	aux.vy =vy + aux.vy;
	return aux;
}

float vector:: operator * (vector &v)
{
	return vx*v.vx+vy*v.vy;
}

vector vector :: operator * (float n)
{
	vector aux;
	aux.vx =vx *n;
	aux.vy =vy *n;
	return aux;
}
vector vector :: operator / (float n)
{
	vector aux;
	aux.vx =vx /n;
	aux.vy =vy /n;
	return aux;
}

float vector::modulo()
{
	return (float)sqrt(vx*vx+vy*vy);
}

float vector::argumento()
{
	return (float)atan2(vy,vx);
}
vector vector:: unitario ()
{
	vector u (vx,vy);
	return u/modulo();

}