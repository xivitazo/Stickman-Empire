#include "edificio.h"


edificio::edificio(unsigned int v)
{
	vida=v;
}


edificio::~edificio(void)
{
}

void edificio :: setTipo (unsigned int tipo)
{
	this->tipo=tipo;
}

unsigned int edificio :: numero_generado=0;
unsigned int edificio :: numero_total=0;
unsigned int edificio :: nivel=0;
