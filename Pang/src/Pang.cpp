// GLclock.c
// By Eric Stringer 2002
// A openGL example program, displays a 3D clock face
//
// Keyboard inputs: [ESC] = quit
// 'L' = enables/disables lighting
// 'V' = toggle ortho/prespective view
 
#include "glut.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 
// define glu objects
 
 
GLUquadricObj *Cylinder;
GLUquadricObj *Disk;
 
struct tm *newtime;
time_t ltime;
 
 
// lighting
GLfloat LightAmbient[]= { 0.5f, 0.5f, 0.5f, 1.0f };
GLfloat LightDiffuse[]= { 0.5f, 0.5f, 0.5f, 1.0f };
GLfloat LightPosition[]= { 5.0f, 25.0f, 15.0f, 1.0f };
GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
 
static int light_state = 1; // light on = 1, light off = 0
static int view_state = 1; // Ortho view = 1, Perspective = 0
 
 
void Sprint( int x, int y, char *st)
{
	int l,i;
 
	l=strlen( st );
	glRasterPos3i( x, y, -1);
	for( i=0; i < l; i++)
		{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, st[i]);
	}
 
}
 
static void TimeEvent(int te)
{
	int timent;
	int i;
 
	glutPostRedisplay();
	glutTimerFunc( 100, TimeEvent, 1);
}
 
void init(void)
{
 
 
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_SMOOTH);
   glEnable(GL_DEPTH_TEST);
   // Lighting is added to scene
   glLightfv(GL_LIGHT1 ,GL_AMBIENT, LightAmbient);
   glLightfv(GL_LIGHT1 ,GL_DIFFUSE, LightDiffuse);
   glLightfv(GL_LIGHT1 ,GL_POSITION, LightPosition);
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT1);
 
 
   Cylinder = gluNewQuadric();
   gluQuadricDrawStyle( Cylinder, GLU_FILL);
   gluQuadricNormals( Cylinder, GLU_SMOOTH);
   gluQuadricOrientation( Cylinder, GLU_OUTSIDE);
   gluQuadricTexture( Cylinder, GL_TRUE);
 
   Disk = gluNewQuadric();
   gluQuadricDrawStyle( Disk, GLU_FILL);
   gluQuadricNormals( Disk, GLU_SMOOTH);
   gluQuadricOrientation( Disk, GLU_OUTSIDE);
   gluQuadricTexture( Disk, GL_TRUE);
 
 
}
 
 
void display(void)
{
  int hour_ticks , sec_ticks;
 
  time(&amp;ltime); // Get time
  newtime = localtime(&amp;ltime); // Convert to local time
 
  glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 
  // easy way to put text on the screen.
  glMatrixMode (GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-8.0, 8.0, 8.0, -8.0, 1.0, 30.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
 
  // Put view state on screen
  glColor3f( 1.0, 1.0, 1.0);
  if (view_state == 0)
	  {
	  Sprint(-3, 4, "Perspective view");
	  }else Sprint(-2, 4, "Ortho view");
 
 
      Sprint(-4,8, asctime(newtime));
 
  // Turn Perspective mode on/off
  if (view_state == 0)
     {
     glMatrixMode (GL_PROJECTION);
     glLoadIdentity();
 
     gluPerspective(60.0, 1, 1.0, 30.0);
     glMatrixMode(GL_MODELVIEW);
     glLoadIdentity();
 
	gluLookAt(0,0,-25, 0,0, 0, 0, 1, 0);
	 }
 
  if (light_state == 1)
	  {
	   glEnable(GL_LIGHTING);
	   glEnable(GL_COLOR_MATERIAL);  // Enable for lighing
      }else
	  {
	  glDisable(GL_LIGHTING);
	  glDisable(GL_COLOR_MATERIAL);  // Disable for no lighing
  }
 
  glPushMatrix();
 
  glTranslatef(0,0,-10);
 
  glPushMatrix(); // Draw large wire cube
  glColor3f(1.0, 1.0, 1.0);
  glTranslatef( 0.0, 0.0, -6.0);
  glutWireCube(13.0);
  glPopMatrix();
 
  glPushMatrix();// Draw hour hand
  glColor3f(1.0, 0.5, 0.5);
  glTranslatef( 0, 0, 0.0);
  glRotatef( (360/12) * newtime->tm_hour, 0.0, 0.0, 1.0);
  glRotatef( 90, 1.0, 0.0, 0.0);
  gluCylinder(Cylinder, 0.75, 0, 4, 16, 16);
  glPopMatrix();
 
  glPushMatrix();// Draw minute hand
  glColor3f(1.0, 0.5, 1.0);
  glTranslatef( 0, 0, 0.0);
  glRotatef( (360/60) * newtime->tm_min, 0.0, 0.0, 1.0);
  glRotatef( 90, 1.0, 0.0, 0.0);
  gluCylinder(Cylinder, 0.5, 0, 6, 16, 16);
  glPopMatrix();
 
  glPushMatrix();// Draw second hand
  glColor3f(1.0, 0.0, 0.5);
  glTranslatef( 0, 0, -0.0);
  glRotatef( (360/60) * newtime->tm_sec, 0.0, 0.0, 1.0);
  glRotatef( 90, 1.0, 0.0, 0.0);
  gluCylinder(Cylinder, 0.25, 0, 6, 16, 16);
  glPopMatrix();
 
  for(hour_ticks = 0; hour_ticks < 12; hour_ticks++)
	  {
	  glPushMatrix();// Draw next arm axis.
      glColor3f(0.0, 1.0, 1.0); // give it a color
	  glTranslatef(0.0, 0.0, 0.0);
	  glRotatef( (360/12) * hour_ticks, 0.0, 0.0, 1.0);
      glTranslatef( 6.0, 0.0, 0.0);
	  glutSolidCube(1.0);
 
      glPopMatrix();
  }
  for(sec_ticks = 0; sec_ticks < 60; sec_ticks++)
	 {
   	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glRotatef( (360/60) * sec_ticks, 0.0, 0.0, 1.0);
	glTranslatef(6.0, 0.0, 0.0);
	glutSolidCube(0.25);
	glPopMatrix();
	}
 
 
  glPopMatrix();
 
 
  glutSwapBuffers();
}
 
void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
}
 
void keyboard (unsigned char key, int x, int y)
{
   switch (key)
   {
   	  case 'L':
	     light_state = abs(light_state - 1);
		 break;
	  case 'V':
	     view_state = abs(view_state - 1);
		 break;
	  case 27:
         exit(0); // exit program when [ESC] key presseed
         break;
      default:
         break;
   }
 
 
}
 
int main(int argc, char** argv)
{
   glutInit(&amp;argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
   glutInitWindowSize (500, 500);
   glutInitWindowPosition (10, 10);
   glutCreateWindow (argv[0]);
   glutSetWindowTitle("GLclock");
   init ();
   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   glutTimerFunc( 10, TimeEvent, 1);
   glutMainLoop();
   return 0;
}
/*#include "Mundo.h"
#include "glut.h"

Mundo mundo;

//los callback, funciones que seran llamadas automaticamente por la glut
//cuando sucedan eventos
//NO HACE FALTA LLAMARLAS EXPLICITAMENTE
void OnDraw(void); //esta funcion sera llamada para dibujar
void OnTimer(int value); //esta funcion sera llamada cuando transcurra una temporizacion
void OnKeyboardDown(unsigned char key, int x, int y); //cuando se pulse una tecla	
void OnMouse(int button, int state, int x, int y);
void OnMousePass(int x, int y);

int main(int argc,char* argv[])
{
	//Inicializar el gestor de ventanas GLUT
	//y crear la ventana
	glutInit(&argc, argv);
	glutInitWindowSize(1280,720);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("MiJuego");

	//habilitar luces y definir perspectiva
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);	
	glMatrixMode(GL_PROJECTION);
	gluPerspective( 40.0, 1280/720.0f, 0.1, 150);
	//glutFullScreen();

	//Registrar los callbacks
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25,OnTimer,0);//le decimos que dentro de 25ms llame 1 vez a la funcion OnTimer()
	glutKeyboardFunc(OnKeyboardDown);
	glutMouseFunc(OnMouse);
	glutPassiveMotionFunc(OnMousePass);

	mundo.Inicializa();
		
	//pasarle el control a GLUT,que llamara a los callbacks
	glutMainLoop();	

	return 0;   
}

void OnDraw(void)
{
	//Borrado de la pantalla	
   	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);	
	glLoadIdentity();
	
	mundo.Dibuja();

	//no borrar esta linea ni poner nada despues
	glutSwapBuffers();
}
void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{
	//poner aqui el código de teclado
	mundo.Tecla(key);

	glutPostRedisplay();
}

void OnTimer(int value)
{
//poner aqui el código de animacion
	mundo.Mueve();

	//no borrar estas lineas
	glutTimerFunc(25,OnTimer,0);
	glutPostRedisplay();
}
void OnMouse(int button, int state, int x, int y)
{
	mundo.Raton( button,  state,  x,  y);
}
void OnMousePass(int x, int y)
{
	mundo.RatonPasivo(x,y);
}*/
