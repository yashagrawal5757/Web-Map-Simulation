
void person()
{

	glPushMatrix();
	glScalef(0.5, 0.5, 0.5);
	glTranslatef(840, 40, 0);

	//shirt
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(600, 300);
	glVertex2f(685, 300);
	glVertex2f(685, 380);
	glVertex2f(655, 400);
	glVertex2f(625, 400);
	glVertex2f(600, 380);
	glEnd();
	//sleevw 1
	glColor3f(0,0,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(625, 400);
	glVertex2f(580, 390);
	glVertex2f(575, 360);
	glVertex2f(600, 360);
	glEnd();

	//left hand
	glBegin(GL_POLYGON);
	glColor3f(0.957, 0.643, 0.376);
	glVertex2f(575, 360);
	glVertex2f(600, 360);
	glVertex2f(588, 330);
	glVertex2f(520, 345);
	glVertex2f(535, 360);
	glVertex2f(555, 335);
	glEnd();

	//sleeve 2
	glColor3f(0,0,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(655, 400);
	glVertex2f(700, 400);
	glVertex2f(715, 380);
	glVertex2f(685, 360);
	glEnd();

	//right hand
	glBegin(GL_POLYGON);
	glColor3f(0.957, 0.643, 0.376);
	glVertex2f(710, 380);
	glVertex2f(717, 350);
	glVertex2f(710, 340);
	glVertex2f(695, 290);
	glVertex2f(680, 290);
	glVertex2f(686, 340);
	glVertex2f(685, 360);
	//glVertex2f();
	//glVertex2f();
	glEnd();



	// neck
	glColor3f(0.804, 0.522, 0.247);
	glBegin(GL_POLYGON);
	glVertex2f(625, 400);
	glVertex2f(655, 400);
	glVertex2f(645, 420);
	glVertex2f(625, 420);
	glEnd();

	glColor3f(0.804,0.522,0.247);
	glBegin(GL_POLYGON);
	glVertex2f(625, 420);
	glVertex2f(610, 450);
	//glEnd();

	//glColor3f(0, 0, 0);
	//glBegin(GL_LINES);
	glVertex2f(665, 450);
	glVertex2f(645, 420);
	glEnd();

	// draw face
	glColor3f(0.957, 0.643, 0.376);
	//knob(940, 440, 25);

	//draw hair
	

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(610, 450);
	glVertex2f(665, 450);
	glVertex2f(665, 480);
	glVertex2f(635, 470);
	glVertex2f(645, 480);
	glVertex2f(615, 465);
	//glVertex2f();
	
	glEnd();

	/*
	//eyes
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glPointSize(3);
	glVertex2f(630, 438);
	glVertex2f(650, 438);
	glEnd();
	*/
	//mouth
	
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(630, 425);
	glVertex2f(640, 425);
	glVertex2f(640, 427);
	glVertex2f(630, 427);
	glEnd();




	// draw leg1
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(600, 300);
	glVertex2f(625, 170);
	glVertex2f(640, 170);
	glVertex2f(650, 300);
	glEnd();

	//Draw shoe 1
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(623, 170);
	glVertex2f(640, 170);
	glVertex2f(642, 165);
	glVertex2f(648, 155);
	glVertex2f(650, 144);
	glVertex2f(622, 150);
	glEnd();

	//draw leg 2
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(625, 300);
	glVertex2f(655, 260);
	glVertex2f(670, 170);
	glVertex2f(685, 170);
	glVertex2f(685, 300);
	glEnd();

	//draw shoe 2
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(668, 170);
	glVertex2f(685, 170);
	glVertex2f(686, 165);
	glVertex2f(693, 155);
	glVertex2f(695, 144);
	glVertex2f(667, 150);
	glEnd();

	glPopMatrix();
}


void phone6()
{
	glPushMatrix();
	glScalef(0.5, 0.5, 1);
	glTranslatef(860, 40, 0);
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(480, 300);
	glVertex2f(540, 300);
	glVertex2f(540, 380);
	glVertex2f(480, 380);
	glEnd();
	glPopMatrix();
	text7();
}


void display6(int cloud)
{

	road3();
	glPushMatrix();
	glTranslatef(0, 130, 0);
	home3();
	glPopMatrix();

	glPushMatrix();
	text();//used from frame2
	glPopMatrix();

	tree2d();
	tree1d();

	

	if (cloud == 1)
	{
		glPushMatrix();
		glTranslatef(-650, -200, 0);
		bus3();
		glPopMatrix();
		person();
		phone6();
		drawCloud(820, 310,8);
		
	}

	if (cloud == 3)
	{
		glPushMatrix();
		glTranslatef(-650, -200, 0);
		bus3();
		glPopMatrix();
	}

	glFlush();
	glutSwapBuffers();
}

void myKeyboard6(unsigned char key, int a, int b)
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

	if (int(key) == 51)       //ascii value of 2
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

	if (key == 120)
	{
		display6(1);
	}
	
	if (key == 109)       //ascii value of m for bus
	{
		x32 = x32 + 20;
		display6(3);
	}


}

void frame6(void)
{

	road3();
	glPushMatrix();
	glTranslatef(0, 130, 0);
	home3();
	glPopMatrix();

	glPushMatrix();
	text();//used from frame2
	glPopMatrix();

	tree2d();
	tree1d();
	
	
	
	
	//drawCloud(500, 250);
	person();
	phone6();
	
	glPushMatrix();
	glTranslatef(-650, -200, 0);
	bus3();
	glPopMatrix();

	glFlush();
	glutKeyboardFunc(myKeyboard6);//for animation

}
