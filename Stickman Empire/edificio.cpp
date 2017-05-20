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
