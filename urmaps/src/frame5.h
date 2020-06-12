






//-------------------------------------------------

void display5(int param)
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

	if (param == 0)
	{
		glPushMatrix();
		glTranslatef(100, -200, 0);
		bus2();
		glPopMatrix();
	}
	if (param == 1)
	{
		glPushMatrix();
		glTranslatef(100, -200, 0);
		bus2();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(100, -150, 0);
		boy3();
		glPopMatrix();
		drawCloud(650, 250, 6);


	}

	glFlush();
	glutSwapBuffers(); //impt



}




void myKeyboard5(unsigned char key, int a, int b)
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


	if (key == 98)       //ascii value of b for bus
	{

		display5(1);
	}

	if (int(key) == 109)       //ascii value of m to move
	{
		x2 = x2 + 20;
		display5(0);
	}


}



void frame5(void)
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

	

	glutKeyboardFunc(myKeyboard5);//for animation

	glFlush();

}


