#pragma once
#include "personaje.h"
class arquero : public personaje 
{
public:
	arquero(void) {numero++;}
	~arquero(void){ numero--;}
	void dibuja();
	
	
private:
	static int nivel, numero;
};