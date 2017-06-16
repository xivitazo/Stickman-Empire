#include "Ayuntamiento.h"
#include "Disparo.h"

Ayuntamiento :: Ayuntamiento(void)
{
}
 
Ayuntamiento :: ~Ayuntamiento(void)
{
}

bool Ayuntamiento :: atacar (Edificio &objetivo)
{
	if ((objetivo.getPoscion()-posicion).modulo()>rango)
	{
		return 0;
	}
	new Disparo (posicion,objetivo,ataque,salpicadura);
	return 1;
}

void Ayuntamiento :: timer (float tiempo )
{
}

void Ayuntamiento :: dibuja ()
{
}

void Ayuntamiento :: subirNivel (unsigned int tipo) 
{
}