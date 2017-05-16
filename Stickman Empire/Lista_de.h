#pragma once
#include "personaje.h"
//En un principio no ponemos limite, 
//si vemos que lo necesitamos lo hacemos
class Lista_de
{
protected:
	//int MAX;
	int numero;
	//No se si borrar el numero entonces 
	//en la clase como tal de edificio
	personaje modelo, *lista [];
	//Cuando creemos un nuevo personaje todas las estadisticas 
	//estaran en el modelo, de tal forma que no tendremos que pasar 
	//informacion sobre que estadisticas tiene que tener nuestra creación

public:
	//Los metodos en comentario son xq creo que no son necesarios
	Lista_de(int tipo);
	~Lista_de(void);
	bool agregar ();
	//void mueve(float t);
	//Puede que mueve() no sea necesario xq movemos cada personaje por separado
	void dibuja();
	//void rebote(Caja caja);
	//void rebote(Pared pared);
	void choque();
	//void destruirContenido();
	//void eliminar(int index);
	//void eliminar(Esfera *e);
	int morir (); 
	//Este sustituiría los anteriores comentados, viendo cuanta vida tienen los personajes
	//devuelve cuantos personajes han muerto en el bucle
	int GetNumero(){return numero;}
	//Esfera* colision (Hombre &h);
	//Esfera * operator [] (int i);

};

