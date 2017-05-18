#pragma once
#include "personaje.h"
#include "Cuartel.h"
#include "Fabrica.h"
#include "Recursos.h"
#define MAX 300
class Lista_de
{
protected:
	//Tamaño del vector de cosas
	int numero;
	//Estableces lo creado para tener un control
	unsigned int cuarteles, fabricas, personajes;
	//Estableces limites para crear
	unsigned int max_cuarteles, max_fabricas, max_personajes;
	unsigned int limite_tropas; // limite por unidad de tiempo

	//Numero de "cosas" generadas
	//Distinto del numero de tropas y demás
	edificio  *lista [MAX];
	

public:
	//Los metodos en comentario son xq creo que no son necesarios
	Lista_de(void);
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
		Si es Fábrica
			1-Prueba(todo1)
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
	void timer (float t);

};