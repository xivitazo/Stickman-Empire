#include "Cuartel.h"


Cuartel::Cuartel(void):solados(0)
{
}


Cuartel::~Cuartel(void)
{
}

void Cuartel::generarTropa(void)
{
	if(limite_tropas<numero_tropas)		
	{
		solados.agregar();
		//quiero limitar la creación a un limite, y empezar a crear
		//memoria dinamica para poder borrar y crear
	}
}
