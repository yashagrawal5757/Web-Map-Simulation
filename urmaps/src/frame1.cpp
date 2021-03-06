/*
#include <stdlib.h>
#include <GL/glut.h>
#include<string.h>

#include<stdio.h>

int x = -150; //for animation

GLfloat vertices[][3] = { {160,390,-70},{425,390,-70},
				{425,510,-70}, {160,520,-70},

				{135,370,70}, {400,370,70},
				{400,490,70}, {135,500,70},

				{135,447,70},{400,447,70},
				{425,467,-70},{410,520,-70},

				{385,500,70}, {160,467,-70},
				{320,467,-70},{320,520,-70},

{380,520,-70},{380,390,-70},{320,390,-70} };

GLfloat colors[][3] = { {1.0,1.0,0.0},{0.0,0.6,0.7},{.3,.4,.5} };





void polygon(int a, int b, int c, int d, int E, int f)
{
	glBegin(GL_POLYGON);
	glColor3fv(colors[E]);
	glVertex3fv(vertices[a]);
	glVertex3fv(vertices[b]);
	glVertex3fv(vertices[c]);
	glVertex3fv(vertices[d]);
	if (f != 0)
		glVertex3fv(vertices[f]);
	glEnd();
}

void bus()
{
	glPushMatrix();//for animation
	glTranslated(x, -190, 0);//for animation
	int i;
	//wheel1
	glColor3f(0, 0, 0);

	glPushMatrix();
	glTranslatef(345, 377, -70);
	glutSolidTorus(5, 15, 100, 90);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(190, 377, -70);
	glutSolidTorus(5, 15, 100, 90);//front two wheels tyre
	glPopMatrix();

	glColor3ub(100, 100, 100);

	glPushMatrix();
	glTranslatef(345, 377, -70);
	glutSolidTorus(5, 5, 10, 69);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(190, 377, -70);
	glutSolidTorus(5, 5, 10, 69);
	glPopMatrix();// front two wheels
	//wheel1 closed
	//wheel2
	polygon(0, 1, 5, 4, 0, 0);


	polygon(13, 14, 18, 0, 0, 0);
	polygon(15, 16, 17, 18, 2, 0);
	polygon(16, 11, 2, 1, 0, 17);


	polygon(0, 4, 8, 13, 0, 0);
	polygon(1, 10, 9, 5, 0, 0);
	polygon(9, 10, 2, 6, 1, 0);
	polygon(4, 5, 9, 8, 0, 0);
	polygon(8, 9, 6, 12, 1, 7);
	glColor3ub(100, 40, 50);
	for (i = 0; i <= 180; i += 45)
	{
		glBegin(GL_LINES);
		glVertex3f(180 + i, 447, 70);
		glVertex3f(180 + i, 500, 70);
		glEnd();
	}


	polygon(13, 8, 7, 3, 1, 0);
	polygon(3, 15, 14, 13, 1, 0);
	polygon(6, 2, 11, 12, 0, 0);
	polygon(11, 3, 7, 12, 0, 0);
	//wheel 2 
	glColor3f(0, 0, 0);

	glPushMatrix();
	glTranslatef(180, 370, 70);
	glutSolidTorus(5, 15, 100, 90);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(335, 370, 70);
	glutSolidTorus(5, 15, 100, 90);
	glPopMatrix();            //back two wheels tyre

	glColor3ub(100, 100, 100);

	glPushMatrix();
	glTranslatef(335, 370, 70);
	glutSolidTorus(5, 5, 10, 69);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(180, 370, 70);
	glutSolidTorus(5, 5, 10, 69);
	glPopMatrix();      //back two wheels
	//wheel2 closed
	glPopMatrix();//for animation
}
void road2()
{//vertical road
	int x, y;
	glColor3ub(7, 255, 13);
	glBegin(GL_POLYGON);
	//green color down
	glVertex2i(0, 650); //Maxm y axis height of greenc olor
	glVertex2i(1000, 650);
	glVertex2i(1000, 0);
	glVertex2i(0, 0);
	//green color up
	glEnd();

	glColor3ub(30, 40, 50);
	glBegin(GL_POLYGON);
	glVertex2i(0, 10);
	glVertex2i(1000, 10);
	glVertex2i(1000, 230);
	glVertex2i(0, 230);

	glEnd();

	glBegin(GL_POLYGON);
	
	glVertex2i(1000, 0);
	glVertex2i(650, 0);
	glEnd();


	//************  STRIPES  ***********

	glColor3f(1.0, 0.9, 0.0);

	for (x = 0; x < 1000; x = x + 60)
	{
		glBegin(GL_POLYGON);
		glVertex2f(x, 152.5 + 19);
		glVertex2f(x, 157.5 + 19);
		glVertex2f(x + 30, 157.5 + 19);
		glVertex2f(x + 30, 152.5 + 19);
		glEnd();
	}

	
}








void home()
{
	//Roof
	   // Clear display window
	// Set line segment color as glColor3f(R,G,B)
	glColor3f(0.3, 0.5, 0.8);
	glBegin(GL_POLYGON);
	glVertex2i(200, 500);
	glVertex2i(600, 500);
	glVertex2i(700, 350);
	glVertex2i(300, 350);
	glEnd();
	// Top of Front Wall
	glColor3f(0.1, 0.5, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2i(200, 500);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glEnd();
	// Front Wall
	glColor3f(0.7, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glVertex2i(300, 100);
	glVertex2i(100, 100);
	glEnd();
	// Front Door
	glColor3f(0.7, 0.2, 0.9);
	glBegin(GL_POLYGON);
	glVertex2i(150, 250);
	glVertex2i(250, 250);
	glVertex2i(250, 100);
	glVertex2i(150, 100);
	glEnd();

	// Front Door Lock
	glColor3f(0.3, 0.7, 0.9);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2i(170, 170);
	glEnd();

	//side Wall
	glColor3f(0.1, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(300, 350);
	glVertex2i(700, 350);
	glVertex2i(700, 100);
	glVertex2i(300, 100);
	glEnd();
	// window one
	glColor3f(0.2, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(330, 320);
	glVertex2i(450, 320);
	glVertex2i(450, 230);
	glVertex2i(330, 230);
	glEnd();
	// line of window one
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(390, 320);
	glVertex2i(390, 230);
	glVertex2i(330, 273);
	glVertex2i(450, 273);
	glEnd();
	// window two
	glColor3f(0.2, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(530, 320);
	glVertex2i(650, 320);
	glVertex2i(650, 230);
	glVertex2i(530, 230);
	glEnd();
	// lines of window two
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(590, 320);
	glVertex2i(590, 230);
	glVertex2i(530, 273);
	glVertex2i(650, 273);
	glEnd();




}


void display(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 1000, 10.0, 650, -2000, 1500);
	glMatrixMode(GL_MODELVIEW);

	glClearColor(1.0, 1, 1.0, 1.0);
	glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);

	road2();
	glPushMatrix();
	glTranslatef(0, 130, 0);
	home();
	glPopMatrix();
	bus();

	glFlush();


	glutSwapBuffers();
}
void myreshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		glOrtho(-2.0, 2.0, -2.0*(GLfloat)h / (GLfloat)w, 2.0*(GLfloat)h / (GLfloat)w, -10.0, 10.0);
	else
		glOrtho(-2.0*(GLfloat)w / (GLfloat)h, 2.0*(GLfloat)w / (GLfloat)h, -2.0, 2.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
}

void myKeyboard(unsigned char key, int a, int b)//for animation

{
	if (key == 49)
	{
		x = x + 10;//move bus forward
		display();
	}

	if (key == 50)
	{
		x = x - 10;//move bus forward
		display();
	}

}



int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(1000, 650);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("BUS STOP");
	glutDisplayFunc(display);
	glutKeyboardFunc(myKeyboard);//for animation

	glutReshapeFunc(myreshape);
	glutMainLoop();
	return 1;
}
*/
