#include "Lista_de.h"
class Mundo
{
	Lista_de jugador1, jugador2;
public: 
	Mundo(void);
	void Tecla(unsigned char key);
	void Inicializa();
	void RotarOjo();
	void Mueve();
	void Dibuja();
	void Raton (int button, int state, int x, int y);
	void RatonPasivo(int x, int y);

	float x_ojo;
	float y_ojo;
	float z_ojo;
};
