#include "Fabrica.h"


Fabrica::Fabrica(void)
{
}


Fabrica::~Fabrica(void)
{
}
void Fabrica :: subirNivel()
{

	vida=vida*1.75;
	produccion.set(produccion.getComida()+30,produccion.getHierro()+20,produccion.getOro()+20);
}


