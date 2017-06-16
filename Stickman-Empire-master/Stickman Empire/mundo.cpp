#include "Mundo.h"
#include "glut.h"
#include <math.h>
#include "Lista_de.h"
#include <stdio.h>

Mundo:: Mundo():
	jugador1(255,0,0),
	jugador2(0,255,0),
	x_ojo(0),
	y_ojo(0),	//inicializo vista y con teclado la subo
	z_ojo(0)
{}


void Mundo::RotarOjo()
{
	float dist=sqrt(x_ojo*x_ojo+z_ojo*z_ojo);
	float ang=atan2(z_ojo,x_ojo);
	ang+=0.05f;
	x_ojo=dist*cos(ang);
	z_ojo=dist*sin(ang);
}
void Mundo::Dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
			0.0, 0, 0.0,      // hacia que punto mira  (0,0,0) 
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	//aqui es donde hay que poner el codigo de dibujo
	//dibujo del suelo
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
		glColor3ub(255,0,0);
		glVertex3f(-5.0f,0,-5.0f);
		glVertex3f(-5.0f,0,5.0f);
		glColor3ub(255,255,0);
		glVertex3f(5.0f,0,5.0f);	
		glVertex3f(5.0f,0,-5.0f);
	glEnd();
	glEnable(GL_LIGHTING);
	
  
}

void Mundo::Mueve()
{

}

void Mundo::Inicializa()
{
	x_ojo=0;
	y_ojo=10;
	z_ojo=20;
}

void Mundo::Tecla(unsigned char key)
{
	switch(key)
	{
	case 'a': x_ojo+=1; break;
	case 's': y_ojo+=1; break;
	case 'd': z_ojo+=1; break;
	case 'z': x_ojo-=1; break;
	case 'x': y_ojo-=1; break;
	case 'c': z_ojo-=1; break;
	}
}

void Mundo::Raton(int button, int state, int x, int y)
{

}
void Mundo:: RatonPasivo(int x, int y)
{

}