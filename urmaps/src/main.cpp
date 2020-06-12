#include<GL/glut.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

# define pi 22/7
#define DEG2RAD 3.14159/180.0
int x32 = 100;//for bus

int param = 0;

void drawCloud(int, int,int);
void boy3();
void drawCloud(int, int, int);
void teacher3();
void display4(int);
void display1();
void frame1();
void frame2();
void frame3();
void frame7();
void frame4();
void frame5();
void frame6();

void road3();


#include "frame1.h"
#include "frame2.h"
#include "frame3.h"
#include "frame7.h"
#include "frame4.h"
#include "frame5.h"
#include "frame6.h"





void intro()
{
	//intro division
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2i(0, 720);
	glColor3f(0, 1, 0);
	glVertex2i(1280, 720);
	glColor3f(0, 0, 0);
	glVertex2i(1280, 550);
	glColor3f(0, 0, 0.3);
	glVertex2i(0, 550);
	glEnd();

	// 2 nd intro division
	glColor4f(1.0f, 0.5f, 0.0f, 0.0f);//orange/brown
	glBegin(GL_POLYGON);
	glVertex2i(0, 550);
	glVertex2i(1280, 550);
	glColor3f(0.7, 0.3, 0.2);
	glVertex2i(1280, 0);
	glVertex2i(0, 0);
	glEnd();

}

void intro_text()
{

	int k;
	char string1[] = "URMAPS";
	void *font1 = GLUT_BITMAP_TIMES_ROMAN_24;
	glColor3f(0.0, 0.0, 0.0);

	glRasterPos3f(500, 600, 20);
	for (k = 0; k < strlen(string1); k++)
		glutBitmapCharacter(font1, string1[k]);

	char string2[] = "BY";
	void *font2 = GLUT_BITMAP_TIMES_ROMAN_24;
	glColor3f(0.0, 0.0, 0.0);

	glRasterPos3f(200, 450, 0);
	for (k = 0; k < strlen(string2); k++)
		glutBitmapCharacter(font2, string2[k]);

	char string3[] = "YASH AGRAWAL";
	void *font3 = GLUT_BITMAP_HELVETICA_18;
	glColor3f(0.0, 0.0, 0.0);

	glRasterPos3f(200, 420, 0);
	for (k = 0; k < strlen(string3); k++)
		glutBitmapCharacter(font3, string3[k]);

	char string4[] = "VIDHAN KUMAR";
	void *font4 = GLUT_BITMAP_HELVETICA_18;
	glColor3f(0.0, 0.0, 0.0);

	glRasterPos3f(200, 390, 0);
	for (k = 0; k < strlen(string4); k++)
		glutBitmapCharacter(font4, string4[k]);

	char string5[] = "ANKIT SINHA";
	void *font5 = GLUT_BITMAP_HELVETICA_18;
	glColor3f(0.0, 0.0, 0.0);

	glRasterPos3f(200, 360, 0);
	for (k = 0; k < strlen(string5); k++)
		glutBitmapCharacter(font4, string5[k]);


	char string6[] = "Under the guidance of ";
	void *font6 = GLUT_BITMAP_HELVETICA_18;
	glColor3f(0.0, 0.0, 0.0);

	glRasterPos3f(60, 100, 0);
	for (k = 0; k < strlen(string6); k++)
		glutBitmapCharacter(font5, string6[k]);

	char string7[] = "PROF.DHARA";
	void *font7 = GLUT_BITMAP_HELVETICA_18;
	glColor3f(0.0, 0.0, 0.0);

	glRasterPos3f(60, 80, 0);
	for (k = 0; k < strlen(string7); k++)
		glutBitmapCharacter(font6, string7[k]);

	char string8[] = "PROF.ANAPOORNA";
	void *font8 = GLUT_BITMAP_HELVETICA_18;
	glColor3f(0.0, 0.0, 0.0);

	glRasterPos3f(60, 60, 0);
	for (k = 0; k < strlen(string8); k++)
		glutBitmapCharacter(font7, string8[k]);


	char string9[] = "Click on the number 1,2,3,4,5,6,7 to go to next frame";
	void *font9 = GLUT_BITMAP_HELVETICA_18;
	glColor3f(0.0, 0.0, 0.0);

	glRasterPos3f(550, 60, 0);
	for (k = 0; k < strlen(string9); k++)
		glutBitmapCharacter(font8, string9[k]);

}


/*void mouse(int btn, int state, int x, int y)
{
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		glutPostRedisplay();

	}

}
/*- ------------------------------------------------------------------*/

void myKeyboard(unsigned char key, int x, int y)
{
	if (int(key) == 49)       //ascii value of 1 
	{
		glClear(GL_COLOR_BUFFER_BIT);
		frame1();
		glutSwapBuffers();
	}

	if (int(key) == 50)
	{
		glClear(GL_COLOR_BUFFER_BIT);
		frame2();
		glutSwapBuffers();
	}

	if (int(key) == 51)
	{
		{
			glClear(GL_COLOR_BUFFER_BIT);
			frame3();
			glutSwapBuffers();
		}

	}

	
	if (int(key) == 55)
	{
		{
			glClear(GL_COLOR_BUFFER_BIT);
			frame7();
			

			if (key == 57)       //ascii value of 9
			{
				
				boy3();
			}
			glutSwapBuffers();
		}

	}


	if (int(key) == 52)
	{
		{
			glClear(GL_COLOR_BUFFER_BIT);
			frame4();
			glutSwapBuffers();
		}

	}

	if (int(key) == 53)
	{
		{
			glClear(GL_COLOR_BUFFER_BIT);
			frame5();
			glutSwapBuffers();
		}

	}

	if (int(key) == 54)
	{
		{
			glClear(GL_COLOR_BUFFER_BIT);
			frame6();
			glutSwapBuffers();
		}

	}

	if (int(key) == 32)
		exit(0);
}
void display(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 1000, 10.0, 650, -2000, 1500);
	glMatrixMode(GL_MODELVIEW);

	glClearColor(1.0, 1, 1.0, 1.0);
	glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);

	intro();
	intro_text();

	glFlush();
	glutSwapBuffers();
}
void myreshape(int w, int h)
{
	glViewport(0, 0, w, h);   //set the viewport to cover the new window
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		glOrtho(-2.0, 2.0, -2.0*(GLfloat)h / (GLfloat)w, 2.0*(GLfloat)h / (GLfloat)w, -10.0, 10.0);
	else
		glOrtho(-2.0*(GLfloat)w / (GLfloat)h, 2.0*(GLfloat)w / (GLfloat)h, -2.0, 2.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
}



/**************  main  ***********/
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(1000, 650);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("CG_PROJECT");
	glutDisplayFunc(display);
	//glutMouseFunc(mouse);
	glutReshapeFunc(myreshape);
	glutKeyboardFunc(myKeyboard);

	glutMainLoop();
	return 1;
}

