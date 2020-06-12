/*
#include <stdlib.h>
#include <GL/glut.h>
#include<string.h>

#include<stdio.h>

int x = -250;// for animation


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
	glTranslated(x, 50, 0);//for animation
	int i;
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

	glPopMatrix();//for animation

}
void road2()
{

	int x, y;
	//Top color part
	glColor3f(0.0, 0.9, 0.8);
	glBegin(GL_POLYGON);

	glVertex2i(0, 650);
	glVertex2i(1000, 650);
	glVertex2i(1000, 0);
	glVertex2i(0, 0);
	glEnd();

	//Determine lower start of green color(230)
	glColor3ub(30, 40, 50);
	glBegin(GL_POLYGON);
	glVertex2i(0, 230);
	glVertex2i(1000, 230);


	//Horizontal road below
	glVertex2i(1000, 0);
	glVertex2i(0, 0);


	glEnd();




	//***********  STRIPES  ***********

	glColor3f(1.0, 1.0, 1.0);
	//Horizontal stripes
	for (x = 0; x < 1000; x = x + 60)
	{
		glBegin(GL_POLYGON);
		glVertex2f(x, 282.5 + 19 - 175);
		glVertex2f(x, 287.5 + 19 - 175);
		glVertex2f(x + 30, 287.5 + 19 - 175);
		glVertex2f(x + 30, 282.5 + 19 - 175);


		glEnd();
	}



}



//-------------------------------------------------




void home()
{


	//mountain
	glColor3f(.3, 0.1, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(0, 350);
	glVertex2i(50, 450);
	glVertex2i(90, 350);
	glVertex2i(200, 500);
	glVertex2i(300, 260);
	glVertex2i(400, 500);
	glVertex2i(650, 450);
	glVertex2i(800, 510);
	glVertex2i(1000, 450);
	glEnd();


	//side Wall
	glColor3f(1, 0.6, 0);
	glBegin(GL_POLYGON);
	glVertex2i(300, 350);
	glVertex2i(990, 350);
	glVertex2i(990, 100);
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


	// Front Wall
	glColor3f(1, 0.6, 0);
	glBegin(GL_POLYGON);
	glVertex2i(500, 350);
	glVertex2i(600, 350);
	glVertex2i(600, 100);
	glVertex2i(500, 100);
	glEnd();

	// Front Door
	glColor3f(0.3, 0.7, 0.9);
	glBegin(GL_POLYGON);
	glVertex2i(510, 250);
	glVertex2i(580, 250);
	glVertex2i(580, 100);
	glVertex2i(510, 100);
	glEnd();


	// Front Door Lock
	glColor3f(0, 0, 0);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2i(560, 170);
	glEnd();

	// window two
	glColor3f(0.2, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(700, 320);
	glVertex2i(820, 320);
	glVertex2i(820, 230);
	glVertex2i(700, 230);
	glEnd();
	// line of window two
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(760, 320);
	glVertex2i(760, 230);
	glVertex2i(700, 273);
	glVertex2i(820, 273);
	glEnd();


	//cc box
	glColor3f(1, 0.6, 0);
	glBegin(GL_POLYGON);
	glVertex2i(300, 350);
	glVertex2i(300, 450);
	glVertex2i(990, 450);
	glVertex2i(990, 350);

	glEnd();
	// Process all OpenGL routine s as quickly as possible

}
//text
void text()
{
	char string[] = "COMMUNITY CENTRE";
	char string1[] = "";
	void *font = GLUT_BITMAP_TIMES_ROMAN_24;
	//********* TEXT ***************
	int i, j;
	void *font1 = GLUT_BITMAP_TIMES_ROMAN_10;
	glColor3f(0.0, 0, 0.0);


	glRasterPos2f(520, 520);
	for (i = 0; i < strlen(string); i++)
		glutBitmapCharacter(font, string[i]);



	glRasterPos3f(420, 602, -120);
	for (j = 0; j < strlen(string1); j++)
		glutBitmapCharacter(font1, string1[j]);
}

void tree1d()
{
	//trunk1
	glColor3ub(95, 6, 5);
	double len = 80;
	double thick = 15;
	glPushMatrix();
	glTranslated(100, 150 + 120, 0.0);
	glScaled(thick, len, thick);
	glutSolidCube(1.0);
	glPopMatrix();

	//leaves1


	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();

	glTranslated(100, 220 + 120, 0.0);
	glutSolidCone(60, 120, 3, 2);
	glutSolidCone(-60, 120, 3, 2);
	glPopMatrix();

	//leaves2

	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslated(100, 260 + 120, 0.0);
	glutSolidCone(50, 100, 3, 2);
	glutSolidCone(-50, 100, 3, 2);
	glPopMatrix();

	// leaves3

	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslated(100, 290 + 120, 0);
	glutSolidCone(40, 800, 3, 2);
	glutSolidCone(-40, 800, 3, 2);
	glPopMatrix();
}

void tree2d()
{
	//trunk1
	glColor3ub(95, 6, 5);
	double len = 80;
	double thick = 15;
	glPushMatrix();
	glTranslated(200, 150 + 120, 0.0);
	glScaled(thick, len, thick);
	glutSolidCube(1.0);
	glPopMatrix();

	//leaves1


	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();

	glTranslated(200, 220 + 120, 0.0);
	glutSolidCone(60, 120, 3, 2);
	glutSolidCone(-60, 120, 3, 2);
	glPopMatrix();

	//leaves2

	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslated(200, 260 + 120, 0.0);
	glutSolidCone(50, 100, 3, 2);
	glutSolidCone(-50, 100, 3, 2);
	glPopMatrix();

	// leaves3

	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslated(200, 290 + 120, 0);
	glutSolidCone(40, 800, 3, 2);
	glutSolidCone(-40, 800, 3, 2);
	glPopMatrix();
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
	
	glPushMatrix();
	text();
	glPopMatrix();

	tree2d();
	tree1d();
	glPushMatrix();
	glTranslatef(100, -200, 0);
	bus();
	glPopMatrix();

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
	glutReshapeFunc(myreshape);
	glutKeyboardFunc(myKeyboard);//for animation
	glutMainLoop();
	return 1;
}
*/
