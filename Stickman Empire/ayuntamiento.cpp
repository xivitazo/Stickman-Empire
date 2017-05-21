#include "ayuntamiento.h"
#include "Disparo.h"


ayuntamiento::ayuntamiento(void)
{
}


ayuntamiento::~ayuntamiento(void)
{
}
bool ayuntamiento:: atacar (edificio &objetivo)
{
	if ((objetivo.getPoscion()-posicion).modulo()>rango)
	{
		return 0;
	}
	new Disparo (posicion,objetivo,ataque,salpicadura);
	return 1;
}