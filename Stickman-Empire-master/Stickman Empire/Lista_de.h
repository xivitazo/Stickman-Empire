#pragma once
#include "Personaje.h"
#include "Cuartel.h"
#include "Fabrica.h"
#include "Recursos.h"
#include "Objeto.h"
#include "Color.h"
#define MAX 300
//Tamaño del vector de cosas
class Lista_de
{
	int numero;
	Color equipo;
	//Estableces lo creado para tener un control
	unsigned int cuarteles, fabricas, personajes;
	//Estableces limites para crear
	unsigned int max_cuarteles, max_fabricas, max_personajes;
	unsigned int limite_tropas; // limite por unidad de tiempo

	//Numero de "cosas" generadas
	//Distinto del numero de tropas y demás
	Edificio  *lista [MAX];
	//Vector que contiene edificios y personajes
	Objeto *disparos[MAX];
	//Vector que contiene disparos del equipo
	

public:
	Lista_de(unsigned char red, unsigned char green, unsigned char blue);
	~Lista_de(void);
	bool agregar (unsigned int tipo,unsigned int especifico=0, unsigned int cuartel=0);	
	/*
		tipo es lo que quieres añadir:
			1-Cuartel
			2-Fábrica
			3-Personaje
		especifico de lo que haces
			Si es personaje:
				1-Prueba(todo1)
				2-...
			Si es Fábrica
				1-Prueba(todo1)
				2-...
		cuartel es la variable nombre del cuartel que quiere generar una tropa
	*/
	void dibuja();
	//void rebote(Caja caja);
	//void rebote(Pared pared);
	void choque();
	int morir (); 
	//devuelve cuantos personajes han muerto en el bucle
	//los muertos se iguala la direccion a 0 para poder corroborar que no se ha borrado
	int GetNumero(){return numero;}
	void subirNivel (unsigned int tipo, unsigned int especifico=0);
	void timer (float tiempo);

};