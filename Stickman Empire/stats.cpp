#include "stats.h"


stats::stats(unsigned int vida_max=0,unsigned int ataque=0, unsigned int rango=0, unsigned int velocidad_max=0)
{
	this->vida_max=vida_max;
	this->ataque=ataque;
	this->rango = rango;
	this->velocidad_max=velocidad_max;
}


stats::~stats(void)
{
}