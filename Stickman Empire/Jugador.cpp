#include "Jugador.h"


Jugador::Jugador(void)
{
}


Jugador::~Jugador(void)
{
}
bool Jugador :: generar (unsigned int tipo, unsigned int especifico)
{
	return poblado.agregar(tipo,especifico);
}

