#pragma once
//la encargada de cualquier interaccion
#include "edificio.h"
#include "Mapa.h"
#include "vector.h"
#include "Disparo.h"
#include "personaje.h"


class Interaccion
{
public:
	Interaccion(void);
	virtual ~Interaccion(void);
	static void ataque(Vector posicion, unsigned int daño, unsigned int salpicadura); //Introduces donde atacar y cuando daño haces
	static void choque ( Personaje &a, Objeto &p);
	//El personaje es el que se esta moviendo por tanto es el personaje
	//el que debe cambiar la trayectoria para evitar el obstaculo
	static float distancia (Objeto &a, Objeto &b);
};

