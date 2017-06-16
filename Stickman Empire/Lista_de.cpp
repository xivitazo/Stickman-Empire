#include "Lista_de.h"


Lista_de::Lista_de(unsigned char red, unsigned char green, unsigned char blue):equipo(red, green, blue)
{
	numero=0;
	cuarteles=0;
	fabricas=0;
	personajes=0;
	max_cuarteles=1;
	max_fabricas=1;
	max_personajes=1;
}


Lista_de::~Lista_de(void)
{

}
bool Lista_de:: agregar (unsigned int tipo,unsigned int especifico, unsigned int cuartel)
{
	if(numero<MAX)
	{
		if (tipo==1 && cuarteles<=max_cuarteles)
		{
			lista[numero]=new Cuartel ;
			cuarteles++;
			numero++;
		}
		else if (tipo==2 && fabricas<=max_fabricas)
		{
			lista[numero]=new Fabrica (especifico);
			fabricas++;
			numero++;
		}
		else if (tipo ==3 && personajes<=max_personajes && cuarteles>=1 && lista[cuartel]->poderGenerar())
		{
			lista[numero]=new Personaje (especifico);
			personajes++;
			numero++;
		}
		else return false;
	}
	else return false;
	return true;
}

void Lista_de :: dibuja()
{
	for(int n=0; n<numero;n++)
	{
		lista[n]->dibuja();
		disparos[n]->dibuja();
	}
}

/*void Lista_de :: choque()
{
	for(int n=0; n<numero;n++)
	{
		Interaccion
	}
}*/

int Lista_de :: morir()
{
	int muertos=0;
	for (int n=0;n<numero;n++)
	{
		if (lista[n]->vida<=0)
		{
			delete lista[n];
			numero--;
			for (int i=n;i<numero; i++)
			{
				lista[i]=lista[i+1];
			}
			muertos++;
		}
	}
	return muertos;
}
void Lista_de :: subirNivel(unsigned int tipo, unsigned int especifico)
{
	int contador=0;
	for (int n=0;n<numero;n++)
	{
		if (lista[n]->tipo==tipo)
		{
			lista [n]->subirNivel(especifico);
			if (contador!=0)
			{
				lista[n]->nivel++;
				contador++;
			}
		}
	}
}
void Lista_de :: timer (float tiempo)
{
	for(int n=0;n<numero;n++)
	{
		lista[n]->timer(tiempo);
		disparos[n]->timer(tiempo);
	}
}
