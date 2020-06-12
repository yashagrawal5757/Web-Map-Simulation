void rectangleD(double x1, double y1, double x2, double y2, double z)
{
	glBegin(GL_POLYGON);
	glVertex3d(x1, y1, z);
	glVertex3d(x2, y1, z);
	glVertex3d(x2, y2, z);
	glVertex3d(x1, y2, z);
	glEnd();
}

void head(float x0, float y0, float radius)
{
	GLfloat x, y, i;
	//

	glBegin(GL_POLYGON);
	for (i = 0; i <= (pi); i += 0.001)     //iterate till 180 to make a semicircle
	{
		// circle is defined as x=r*cos(i) and y=r*sin(i) 
		x = x0 + radius * cos(i);
		y = y0 + radius * sin(i);
		
		glVertex2f(x, y);
	}
	glEnd();

	glFlush();

}

void text71() {
	char string41[] = "Paradise Home ";
	void *font = GLUT_BITMAP_TIMES_ROMAN_24;
	int k;
	glColor3f(0, 0, 0);
	glRasterPos3f(620, 420, 0);
	for (k = 0; k < strlen(string41); k++)
		glutBitmapCharacter(font, string41[k]);
}

void building2()
{
	glPushMatrix();
	glTranslatef(50, -120, 0);
	//glScaled(40.0, 40.0, 0.0);

	glColor3f(0.3, 0.0, 0.329);
	glBegin(GL_POLYGON);
	glVertex2f(150, 350);
	glVertex2f(150, 530);
	glVertex2f(250, 530);
	glVertex2f(250, 350);

	glEnd();

	//TOP
	glColor3f(0.3, 0.2, 0.329);
	glBegin(GL_POLYGON);
	glVertex2f(165, 530);
	glVertex2f(165, 600);
	glVertex2f(235, 600);
	glVertex2f(235, 530);

	glEnd();

	//TOWER
	glColor3f(0.3, 0.0, 0.329);
	glBegin(GL_POLYGON);
	glVertex2f(195, 600);
	glVertex2f(195, 710);
	glVertex2f(205, 710);
	glVertex2f(205, 600);

	glEnd();

	glColor3f(0.41, 0.02, 0.719);
	glBegin(GL_POLYGON);
	glVertex2f(175, 400);
	glVertex2f(175, 500);
	glVertex2f(225, 500);
	glVertex2f(225, 400);

	glEnd();
	glPopMatrix();
}


void building1()
{
	glPushMatrix();
	glTranslatef(-200, -170, 0);

	//glScaled(40.0, 40.0, 0.0);

	glColor3f(0.55, 0.47, 0.14);
	glBegin(GL_POLYGON);
	glVertex2f(250, 400);
	glVertex2f(250, 650);
	glVertex2f(350, 800);
	glVertex2f(350, 400);

	glEnd();

	// window1
	glColor3d(0.24, 0.77, 0.55);
	glPushMatrix();
	glTranslated(285, 550, 0);
	rectangleD(0, 0, 50, 40, 2);
	glPopMatrix();
	glEnd();

	//window 2
	glColor3d(0.24, 0.77, 0.55);
	glPushMatrix();
	glTranslated(285, 480, 0);
	rectangleD(0, 0, 50, 40, 2);
	glPopMatrix();
	glEnd();

	glPopMatrix();
}

void building4()
{
	glPushMatrix();
	glTranslatef(350, -70, 0);
	// building 2
	glColor3d(0.7, 0.32, 0.39);
	glPushMatrix();
	glTranslated(250, 300, 0);
	//glRotated(10, 0, 0, 1);
	rectangleD(0, 0, 200, 300, 2);
	glPopMatrix();
	glEnd();

	//text box
	glColor3d(1, 1, 1);
	glPushMatrix();
	glTranslated(270, 480, 0);
	rectangleD(0, 0, 160, 30, 2);
	glPopMatrix();
	glEnd();



	// building 2 Windows
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(285, 350, 0);
	rectangleD(0, 0, 50, 40, 2);
	glPopMatrix();
	glEnd();

	// window2
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(365, 350, 0);
	rectangleD(0, 0, 50, 40, 2);
	glPopMatrix();
	glEnd();

	//window 3
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(285, 420, 0);
	rectangleD(0, 0, 50, 40, 2);
	glPopMatrix();
	glEnd();

	//window 4
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(365, 420, 0);
	rectangleD(0, 0, 50, 40, 2);
	glPopMatrix();
	glEnd();


	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(260, 570, 0);
	rectangleD(0, 0, 180, 10, 2);
	glPopMatrix();
	glEnd();

	//roof
	glBegin(GL_LINE_LOOP);
	glVertex2f(260, 570);
	glVertex2f(265, 540);
	glVertex2f(260, 530);
	glVertex2f(440, 530);
	glVertex2f(445, 540);
	glVertex2f(440, 570);
	glEnd();

	glPopMatrix();
}

void building3()
{
	glPushMatrix();
	glTranslatef(130, -70, 0);
	// building 2
	glColor3d(0,0 , 1);
	glPushMatrix();
	glTranslated(250, 300, 0);
	//glRotated(10, 0, 0, 1);
	rectangleD(0, 0, 200, 300, 2);
	glPopMatrix();
	glEnd();

	



	// building 2 Windows
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(285, 350, 0);
	rectangleD(0, 0, 50, 40, 2);
	glPopMatrix();
	glEnd();

	// window2
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(365, 350, 0);
	rectangleD(0, 0, 50, 40, 2);
	glPopMatrix();
	glEnd();

	//window 3
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(285, 420, 0);
	rectangleD(0, 0, 50, 40, 2);
	glPopMatrix();
	glEnd();

	//window 4
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(365, 420, 0);
	rectangleD(0, 0, 50, 40, 2);
	glPopMatrix();
	glEnd();




	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(260, 570, 0);
	rectangleD(0, 0, 180, 10, 2);
	glPopMatrix();
	glEnd();

	//roof
	glBegin(GL_LINE_LOOP);
	glVertex2f(260, 570);
	glVertex2f(265, 540);
	glVertex2f(260, 530);
	glVertex2f(440, 530);
	glVertex2f(445, 540);
	glVertex2f(440, 570);
	glEnd();

	glPopMatrix();
}


void building5()
{
	glPushMatrix();
	glTranslatef(70, -70, 0);
	// building 3
	glColor3d(0, 0, 0.4);
	glPushMatrix();
	glTranslated(750, 300, 0);
	//glRotated(10, 0, 0, 1);
	rectangleD(0, 0, 180, 250, 2);
	glPopMatrix();
	glEnd();

	glColor3f(1, 0, 0);
	head(840, 540, 90);   //dome of the building

	// building 3 windows
	
	//window 1
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(775, 325, 0);
	rectangleD(0, 0, 30, 20, 2);
	glPopMatrix();
	glEnd();

	// window 2
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(830, 325, 0);
	rectangleD(0, 0, 30, 20, 2);
	glPopMatrix();
	glEnd();

	//window 3
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(885, 325, 0);
	rectangleD(0, 0, 30, 20, 2);
	glPopMatrix();
	glEnd();

	//window 4
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(775, 370, 0);
	rectangleD(0, 0, 30, 20, 2);
	glPopMatrix();
	glEnd();

	//window 5
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(830, 370, 0);
	rectangleD(0, 0, 30, 20, 2);
	glPopMatrix();
	glEnd();

	//window 6
	glColor3d(0, 0, 0);
	glPushMatrix();
	glTranslated(885, 370, 0);
	rectangleD(0, 0, 30, 20, 2);
	glPopMatrix();
	glEnd();
	
	glPopMatrix();

	
}


void display7(int param)
{


	road3();
	building5();
	building1();
	building2();
	building3();
	building4();

	if (param == 1)
	{
		glPushMatrix();
		glTranslatef(-150, -150, 0);
		boy3();
		glPopMatrix();


		drawCloud(550, 250, 3);

	}

	glPushMatrix();
	glTranslatef(-650, -220, 0); //amount of shift bus makes on pressing m
	bus3();
	
	glPopMatrix();
	text71();
	glPopMatrix();

	
	glFlush();
	glutSwapBuffers();
}

void myKeyboard7(unsigned char key, int a, int b)
{




	if (int(key) == 49)       //ascii value of 1 
	{
		glClear(GL_COLOR_BUFFER_BIT);
		frame1();
		glutSwapBuffers();
	}

	if (int(key) == 50)       //ascii value of 2
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

	if (int(key) == 55)       //ascii value of 3
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


	if (key == 109)       //ascii value of m for bus
	{
		x32 = x32 + 20;
		display7(3);
	}

	if (key == 98)       //ascii value of b for bus
	{
		
		display7(1);
	}
	

}


void frame7()
{
	

	road3();
	building5();
	building1();
	building2();
	building3();
	building4();
	glutKeyboardFunc(myKeyboard7);//for animation

	glPushMatrix();
	text71();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-650, -220, 0);
	bus3();
	glPopMatrix();

}
