#include "edificio.h"


Edificio::Edificio(unsigned int v)
{
	vida=v;
}


Edificio::~Edificio(void)
{
}

void Edificio :: setTipo (unsigned int tipo)
{
	this->tipo=tipo;
}

unsigned int Edificio :: numero_generado=0;
unsigned int Edificio :: numero_total=0;
unsigned int Edificio :: nivel=0;
