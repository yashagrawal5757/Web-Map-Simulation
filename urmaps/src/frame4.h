
void boy4()
{
	glPushMatrix();
	glScalef(0.5, 0.5, 0);
	glTranslated(200, 200, 1);

	//shirt
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(900, 300);
	glVertex2f(985, 300);
	glVertex2f(985, 380);
	glVertex2f(955, 400);
	glVertex2f(925, 400);
	glVertex2f(900, 380);
	glEnd();
	//sleevw 1
	glColor3f(0.9, 0.3, 0);
	glBegin(GL_POLYGON);
	glVertex2f(925, 400);
	glVertex2f(880, 390);
	glVertex2f(875, 360);
	glVertex2f(900, 360);
	glEnd();

	//left hand
	glBegin(GL_POLYGON);
	glColor3f(0.957, 0.643, 0.376);
	glVertex2f(875, 360);
	glVertex2f(870, 340);
	glVertex2f(910, 290);
	glVertex2f(920, 300);
	glVertex2f(855, 320);
	glVertex2f(900, 360);
	glEnd();

	//sleeve 2
	glColor3f(0.9, 0.3, 0);
	glBegin(GL_POLYGON);
	glVertex2f(955, 400);
	glVertex2f(1000, 400);
	glVertex2f(1015, 380);
	glVertex2f(985, 360);
	glEnd();

	//right hand
	glBegin(GL_POLYGON);
	glColor3f(0.957, 0.643, 0.376);
	glVertex2f(1010, 380);
	glVertex2f(1017, 350);
	glVertex2f(1010, 340);
	glVertex2f(995, 290);
	glVertex2f(980, 290);
	glVertex2f(986, 340);
	glVertex2f(985, 360);
	//glVertex2f();
	//glVertex2f();
	glEnd();



	// neck
	glColor3f(0.804, 0.522, 0.247);
	glBegin(GL_POLYGON);
	glVertex2f(925, 400);
	glVertex2f(955, 400);
	glVertex2f(945, 420);
	glVertex2f(925, 420);
	glEnd();

	// draw face
	glColor3f(0.957, 0.643, 0.376);
	knob(940, 440, 25);



	/*eyes
glColor3f(0, 0, 0);
glBegin(GL_POINTS);
glPointSize(1);
glVertex2f(930, 438);
glVertex2f(950, 438);
glEnd();
*/



//mouth
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(930, 425);
	glVertex2f(950, 425);
	glVertex2f(950, 427);
	glVertex2f(930, 427);
	glEnd();




	// draw leg1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(900, 300);
	glVertex2f(925, 170);
	glVertex2f(940, 170);
	glVertex2f(950, 300);
	glEnd();

	//Draw shoe 1
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(923, 170);
	glVertex2f(940, 170);
	glVertex2f(942, 165);
	glVertex2f(948, 155);
	glVertex2f(950, 144);
	glVertex2f(922, 150);
	glEnd();

	//draw leg 2
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(925, 300);
	glVertex2f(955, 260);
	glVertex2f(970, 170);
	glVertex2f(985, 170);
	glVertex2f(985, 300);
	glEnd();

	//draw shoe 2
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(968, 170);
	glVertex2f(985, 170);
	glVertex2f(986, 165);
	glVertex2f(993, 155);
	glVertex2f(995, 144);
	glVertex2f(967, 150);
	glEnd();
	glPopMatrix();

}


void desk()
{
	glPushMatrix();
	glTranslatef(50, 150, 250);

	//glScaled(40.0, 40.0, 0.0);

	glColor3f(0.6, 0.3, 0);
	glBegin(GL_POLYGON);
	glVertex2f(560, 80);
	glVertex2f(560, 220);
	glVertex2f(850, 220);
	glVertex2f(850, 80);

	glEnd();
	glColor3f(0.9, 0.8, 0.1);
	glBegin(GL_POLYGON);
	glVertex2f(540, 220);
	glVertex2f(540, 235);
	glVertex2f(870, 235);
	glVertex2f(870, 220);

	glEnd();

	glPopMatrix();

	char string4[] = "	Munna Tea Stall";
	void *font4 = GLUT_BITMAP_TIMES_ROMAN_24;
	glColor3ub(1, .23, 0);
	glRasterPos3f(660, 300, 0);
	for (int k = 0; k < strlen(string4); k++)
		glutBitmapCharacter(font4, string4[k]);
}


void display4(int param)
{
	road3();
	glPushMatrix();
	glTranslatef(170, 120, 0);
	boy4();
	glPopMatrix();
	desk();
	glPushMatrix();
	glTranslatef(-250, -220, 0);
	bus3();
	glPopMatrix();

	

	if (param == 1)
	{
		glPushMatrix();
		glTranslatef(-50, 50, 0);
		boy3();
		glPopMatrix();


		drawCloud(500, 450, 5);

	}


	if (param == 2)
	{
		glPushMatrix();
		glTranslatef(-50, 50, 0);
		boy3();
		glPopMatrix();


		drawCloud(850, 450, 4);

	}


	


	glFlush();
	glutSwapBuffers();
}


void myKeyboard4(unsigned char key, int a, int b)
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

	if (int(key) == 52)       //ascii value of 3
	{
		glClear(GL_COLOR_BUFFER_BIT);
		frame4();
		glutSwapBuffers();

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



	if (key == 109)       //ascii value of m for bus
	{
		x32 = x32 + 20;
		display4(3);
	}

	if (key == 98)       //ascii value of b for boy
	{

		display4(0);
	}

	if (key == 120)
	{
		display4(1);
	}

	if (key == 99)
	{
		display4(2);
	}
}


void frame4()
{


	glutKeyboardFunc(myKeyboard4);//for animation
	road3();
	glPushMatrix();
	glTranslatef(170, 120, 0);
	boy4();
	glPopMatrix();
	desk();
	glPushMatrix();
	glTranslatef(-250, -220, 0);
	bus3();
	glPopMatrix();


	

}
