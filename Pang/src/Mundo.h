
class Mundo
{
public: 
	void Tecla(unsigned char key);
	void Inicializa();
	void RotarOjo();
	void Mueve();
	void Dibuja();
	void Raton(int button, int state, int x, int y);
	void RatonPasivo(int x, int y);

	float x_ojo;
	float y_ojo;
	float z_ojo;
};
