#include "Fabrica.h"


Fabrica::Fabrica(int tipo)
{
}

Fabrica::~Fabrica(void)
{
}

void Fabrica :: subirNivel (unsigned int tipo)
{
	vida = vida*1.75f;
	produccion.set(produccion.getComida()*1.1f,produccion.getHierro()*1.1f,produccion.getOro()*1.1f);
}

void Fabrica :: timer (float tiempo)
{
}

void Fabrica :: dibuja ()
{
}

