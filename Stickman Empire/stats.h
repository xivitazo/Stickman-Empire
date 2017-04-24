#pragma once
class stats
{
public:
	stats(unsigned int vida, unsigned int ataque, unsigned int rango, unsigned int velocidad_max, unsigned intarmadura);
	~stats(void);

private:
	unsigned int jvida, jataque, jrango, jvelocidad_max, jarmadura;
};

