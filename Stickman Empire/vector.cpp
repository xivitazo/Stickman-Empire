#include "vector.h"


Vector::Vector(float x, float y)
{
	vx = x;
	vy = y;
}
Vector::~Vector(void)
{
}

Vector Vector :: operator - (Vector &v)
{
	Vector aux;
	aux.vx =vx - v.vx;
	aux.vy =vy - aux.vy;
	return aux;
}

Vector Vector:: operator + (Vector &v)
{
	Vector aux;
	aux.vx =vx + v.vx;
	aux.vy =vy + aux.vy;
	return aux;
}

float Vector:: operator * (Vector &v)
{
	return vx*v.vx+vy*v.vy;
}

Vector Vector :: operator * (float n)
{
	Vector aux;
	aux.vx =vx *n;
	aux.vy =vy *n;
	return aux;
}
Vector Vector :: operator / (float n)
{
	Vector aux;
	aux.vx =vx /n;
	aux.vy =vy /n;
	return aux;
}

float Vector::modulo()
{
	return (float)sqrt(vx*vx+vy*vy);
}

float Vector::argumento()
{
	return (float)atan2(vy,vx);
}
Vector Vector:: unitario ()
{
	Vector u (vx,vy);
	return u/modulo();

}