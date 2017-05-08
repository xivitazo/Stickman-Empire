#pragma once
#include "personaje.h"
class arquero : public personaje 
{
public:
	arquero(void) {numero++;}
	~arquero(void){ numero--;}
	void dibuja();
	
	//Eres imbecil
private:
	static int nivel, numero;
};