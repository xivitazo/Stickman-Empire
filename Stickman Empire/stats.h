#pragma once
class stats
{
public:
	stats(unsigned int vida_max, 
		unsigned int ataque,
		unsigned int rango, 
		unsigned int velocidad_max);
	~stats(void);
	void set (unsigned int vida, 
		unsigned int ataque,
		unsigned int velocidad_max);
	unsigned int getVida_max();
	unsigned int getAtaque();
	unsigned int getRango();
	unsigned int getVelocidad_max();

private:
	unsigned int vida/*_max*/, ataque, rango, velocidad_max;
};

