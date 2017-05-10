#pragma once
#include "personaje.h"//Duda sobre como implementar librerias tipo hijo
//Con implementar personaje esta ya añade todas las padres
//#include "edificio.h"
class mundo
{
public:
	mundo();
	virtual ~mundo();
	void Dibuja();
	void Tecla();
	void Tiempo();
};

