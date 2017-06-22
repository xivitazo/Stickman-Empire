#include "Mundo.h"
#include "glut.h"
#include <math.h>
#include <stdio.h>

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

}
void Mundo::Raton(int button, int state, int vx, int vy)
{
	GLdouble x,y,z,modelview[16],proyeccion[16];
	GLint viewport[4];
	//printf("%d\t%d\t%d\t%d\n", button ,state, vx ,vy);
	glGetDoublev(GL_MODELVIEW_MATRIX,modelview);//Coges la matriz Modelview
	glGetDoublev(GL_PROJECTION_MATRIX,proyeccion);//Coges la matriz proyeccion
	glGetIntegerv(GL_VIEWPORT,viewport);//Coges el punto de vista
	gluUnProject(vx,vy,0,modelview,proyeccion,viewport,&x,&y,&z);//En x y z se guardan los valores de las coordenadas respecto del mundo
	//printf("%lf\t%lf\t%lf\n", x,y,z);
}
void Mundo::RatonPasivo(int x, int y)
{
	printf("%d\t%d\n",x,y);
}
