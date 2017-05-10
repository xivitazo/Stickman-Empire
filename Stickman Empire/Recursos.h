#pragma once
class Recursos
{
	unsigned int comida,hierro,oro;
public:
	void set (unsigned int comida, unsigned int hierro, unsigned int oro);
	unsigned int getComida();
	unsigned int getHierro();
	unsigned int getOro();
	Recursos(void);
	~Recursos(void);
};

