#include "Recursos.h"


Recursos::Recursos(void)
{
}


Recursos::~Recursos(void)
{
}


void Recursos::set(unsigned int comida=0, unsigned int hierro=0, unsigned int oro=0)
{
	this->comida=comida;
	this ->hierro=hierro;
	this -> oro=oro;
}
unsigned int Recursos:: getComida()
{
	return comida;
}
unsigned int Recursos:: getHierro()
{
	return hierro;
}
unsigned int Recursos:: getOro()
{
	return oro;
}