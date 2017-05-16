#include "Lista_de.h"


Lista_de::Lista_de(int tipo): modelo(tipo)
{
	numero=0;
}


Lista_de::~Lista_de(void)
{
}
bool Lista_de:: agregar ()
{
	//if(numero<MAX_DISPAROS)
	//{
		lista[numero++]=&modelo;
	//}
	//else return false;
	return true;
}

void Lista_de :: dibuja()
{
	for(int n=0; n<numero;n++)
	{
		lista[n]->Dibuja();
	}
}
/*void Lista_de :: mueve(float t)
{
	for (int n=0; n<numero; n++)
	{
		lista[n]->mueve(t);
	}
}*/

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