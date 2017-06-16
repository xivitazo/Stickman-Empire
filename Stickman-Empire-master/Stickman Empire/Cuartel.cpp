#include "Cuartel.h"


Cuartel :: Cuartel(void):
	tiempo(0), 
	limite_tropas(100), 
	numero_tropas(0)
{
}

Cuartel :: ~Cuartel(void)
{
}

void Cuartel :: subirNivel(unsigned int tipo)
{
	limite+=20;
}

bool Cuartel :: poderGenerar(void)
{
	return numero_tropas<= limite_tropas;
}

void Cuartel :: timer (float t)
{
	if (tiempo>=60)
	{
		numero_tropas=0;
	}
	else tiempo++;
}

void Cuartel :: dibuja () 
{
}
