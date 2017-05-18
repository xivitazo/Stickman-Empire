#pragma once
#include "Lista_de.h"
#include "ayuntamiento.h"
class Jugador
{
	float x_ojo;
	float y_ojo;
	float z_ojo;
	Lista_de poblado;
	ayuntamiento ayunta;
public:
	Jugador(void);
	virtual ~Jugador(void);
	bool generar(unsigned int tipo, unsigned int especifico=0);
	void TeclaEspecial(unsigned char key);
	void Raton (int button, int state, int x, int y);
	void Tecla (unsigned char key);
	void Inicializa();
	void RotarOjo();
	void Mueve();
	void Dibuja();
};

