#pragma once
#include "personaje.h"
class arquero : public personaje 
{
public:
	arquero(void) {numero++;}
	~arquero(void){ numero--;}
	void dibuja();
	
	//Eres imbecil
	// y tu
protected:
	float tumadre; //huele mal
private:
	static int nivel, numero;
};