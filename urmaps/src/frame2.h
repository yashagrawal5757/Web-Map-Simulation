
 int x2 = -250;// for animation   


void bus2()
{
	glPushMatrix();//for animation
	glTranslated(x2, -100, 0);//for animation
	int i;
	glColor3f(0, 0, 0);

	glPushMatrix();
	glTranslatef(345, 407, -70);//right hidden tyre
	glutSolidTorus(5, 15, 100, 90);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(190, 397, -70);//left hidden tyre
	glutSolidTorus(5, 15, 100, 90);//front two wheels tyre
	glPopMatrix();

	glColor3ub(100, 100, 100);

	glPushMatrix();
	glTranslatef(345, 390, -70);
	glutSolidTorus(5, 5, 15, 69);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(190, 390, -70);
	glutSolidTorus(5, 5, 10, 69);
	glPopMatrix();// front two wheels
	//wheel1 closed


	//wheel2
	polygon(0, 1, 5, 4, 0, 0);


	polygon(13, 14, 18, 0, 0, 0);
	polygon(1, 16, 17, 18, 2, 0);
	polygon(16, 11, 2, 1, 0, 17);


	polygon(0, 4, 8, 13, 0, 0);
	polygon(1, 10, 9, 5, 0, 0);
	polygon(9, 10, 2, 6, 1, 0);
	polygon(4, 5, 9, 8, 0, 0);
	polygon(8, 9, 6, 12, 1, 7);
	glColor3ub(100, 40, 50);


	polygon(13, 8, 7, 3, 1, 0);
	polygon(3, 15, 14, 13, 1, 0);
	polygon(6, 2, 11, 12, 0, 0);
	polygon(11, 3, 7, 12, 0, 0);
	//wheel 2 
	glColor3f(0, 0, 0);

	glPushMatrix();
	glTranslatef(180, 390, 70);//black tyre
	glutSolidTorus(5, 15, 100, 90);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(335, 390, 70);//black tyre front
	glutSolidTorus(5, 15, 100, 90);
	glPopMatrix();            //back two wheels tyre

	glColor3ub(100, 100, 100);

	glPushMatrix();
	glTranslatef(335, 390, 70);//main weel right tyre
	glutSolidTorus(5, 5, 10, 69);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(180, 390, 70);// main wheel left tyre
	glutSolidTorus(5, 5, 10, 69);
	glPopMatrix();      //back two wheels
	//wheel2 closed

	//Brown lines in window
	for (i = 0; i <= 180; i += 45)
	{
		glBegin(GL_LINES);
		glVertex3f(180 + i, 445, 70);
		glVertex3f(180 + i, 500, 70);
		glEnd();
	}
	glPopMatrix();

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




void home2()
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

void display2()
{
	road2();
	glPushMatrix();
	glTranslatef(0, 130, 0);
	home2();
	glPopMatrix();

	glPushMatrix();
	text();
	glPopMatrix();

	tree2d();
	tree1d();

	glPushMatrix();
	glTranslatef(100, -200, 0);
	bus2();
	glPopMatrix();

	teacher3();

	glFlush();
	glutSwapBuffers(); //impt


}


void myKeyboard2(unsigned char key, int a, int b)
{

	if (int(key) == 49)       //ascii value of 1 
	{
		glClear(GL_COLOR_BUFFER_BIT);
		frame1();
		glutSwapBuffers();
	}

	if (int(key) == 50)       //ascii value of 1 
	{
		glClear(GL_COLOR_BUFFER_BIT);
		frame2();
		glutSwapBuffers();
	}

	if (int(key) == 51)       //ascii value of 3
	{
		glClear(GL_COLOR_BUFFER_BIT);
		frame3();
		glutSwapBuffers();
	}

	if (int(key) == 55)       //ascii value of 4
	{
		glClear(GL_COLOR_BUFFER_BIT);
		frame7();
		glutSwapBuffers();
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


	if (int(key) == 109)       //ascii value of m to move
	{
		x2 = x2 + 20;
		display2();
	}


}



void frame2(void)
{

	road2();
	glPushMatrix();
	glTranslatef(0, 130, 0);
	home2();
	glPopMatrix();
	
	glPushMatrix();
	text();
	glPopMatrix();

	tree2d();
	tree1d();
	glPushMatrix();
	glTranslatef(100, -200, 0);
	bus2();
	glPopMatrix();

	teacher3();

	glutKeyboardFunc(myKeyboard2);//for animation

	glFlush();

}


