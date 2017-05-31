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

	float x_ojo;
	float y_ojo;
	float z_ojo;
};
