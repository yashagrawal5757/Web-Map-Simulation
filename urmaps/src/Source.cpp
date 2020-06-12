/*
#include<stdio.h>
#include<GL\glut.h>
#include<math.h>




#define DEG2RAD 3.14159/180.0
void display();
void window1();
void road();
void building1();
void tree1();
void frame();
void car();
void mydisplay();
void car2();
GLint a = 180, b = 450;
void divider();
void drawCircleFilled();
void drawCircle1();
GLfloat x0 = 850;
void drawCloud(int, int);
#define DEG2RAD 3.14159/180

void myKeyboard(unsigned char key, int x, int y)

{
	if (key == 49)
	{

		int i;

		{


			if (a > 800)
			{
				a = 90;
			}

			else {

				a = a + 3;
				mydisplay();
				//car();
			}

			if (b > 800)
			{
				b = 90;
			}

			else {

				b = b + 5;
				mydisplay();
				//car();
			}


		}
	}



	if (int(key) == 50) {

		glClear(GL_COLOR_BUFFER_BIT);

		glutSwapBuffers();

	}if (int(key) == 51) {

		glClear(GL_COLOR_BUFFER_BIT);
		
		glutSwapBuffers();

	}
	if (int(key) == 32)
		exit(0);



}


void drawCircleFilled(double centerX, double centerY, double radiusX, double radiusY)
{
	//const float DEG2RAD = (double)3.14159 / 180;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(centerX, centerY);
	for (int i = -1; i < 360; i++) {
		float degInRad = i * DEG2RAD;
		glVertex2d(centerX + cos(degInRad) * radiusX,
			centerY + sin(degInRad) * radiusY);

	}

	glEnd();
}

void drawCloud(int x, int y)
{
	//int  y = 850;




	glColor3f(255.0, 255.0, 255.0);
	drawCircleFilled(x, y, 80, 45);
	glColor3f(255.0, 255.0, 255.0);
	drawCircleFilled(x + 25, y + 15, 35, 35);
	glColor3f(255.0, 255.0, 255.0);
	drawCircleFilled(x + 25, y - 15, 35, 35);
	glColor3f(255.0, 255.0, 255.0);
	drawCircleFilled(x - 25, y - 15, 35, 35);
	glColor3f(255.0, 255.0, 255.0);
	drawCircleFilled(x - 25, y + 15, 35, 35);


}

void men()
{
	//shirt
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(600, 300);
	glVertex2f(685, 300);
	glVertex2f(685, 380);
	glVertex2f(655, 400);
	glVertex2f(625, 400);
	glVertex2f(600, 380);
	glEnd();
	//sleevw 1
	glColor3f(0, 0, 0.7);
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
	glVertex2f(570, 340);
	glVertex2f(610, 290);
	glVertex2f(620, 300);
	glVertex2f(555, 320);
	glVertex2f(600, 360);
	glEnd();

	//sleeve 2
	glColor3f(0, 0, 0.7);
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

	// draw face
	glColor3f(0.957, 0.643, 0.376);
	//knob(940, 440, 25);

	//draw hair
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(610, 450);
	glVertex2f(665, 450);
	glVertex2f(665, 485);
	glVertex2f(615, 465);
	//glVertex2f();
	glEnd();

	//eyes
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glPointSize(3);
	glVertex2f(630, 438);
	glVertex2f(650, 438);
	glEnd();

	//mouth
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(630, 425);
	glVertex2f(650, 425);
	glVertex2f(650, 427);
	glVertex2f(630, 427);
	glEnd();




	// draw leg1
	glColor3f(0, 0, 0);
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
	glColor3f(0, 0, 0);
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


}




void car()
{
	glPushMatrix(); //making color for outer line
	glTranslated(a, 300.0, 0.0);
	glScaled(4.0, 9.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(2.5, 2.5);
	glVertex2f(3.0, 3.5);
	glVertex2f(3.5, 3.75);
	glVertex2f(4.0, 4.0);
	glVertex2f(4.5, 4.0);
	glVertex2f(5.0, 3.75);
	glVertex2f(5.5, 3.5);
	glVertex2f(5.75, 3.0);
	glVertex2f(6.0, 2.5);
	glVertex2f(16.5, 2.5);
	glVertex2f(16.75, 3.0);
	glVertex2f(17.0, 3.5);
	glVertex2f(17.5, 3.75);
	glVertex2f(18.0, 4.0);
	glVertex2f(18.5, 4.0);
	glVertex2f(19.0, 3.75);
	glVertex2f(19.5, 3.5);
	glVertex2f(19.75, 3.0);
	glVertex2f(20.0, 2.5);
	glVertex2f(21.0, 2.5);
	glVertex2f(21.0, 4.0);
	glVertex2f(21.5, 4.0);
	glVertex2f(21.0, 4.5);
	glVertex2f(20.0, 5.0);
	glVertex2f(15.0, 5.0);
	glVertex2f(14.0, 5.5);
	glVertex2f(13.0, 6.0);
	glVertex2f(12.0, 6.5);
	glVertex2f(11.0, 7.0);
	glVertex2f(6.0, 7.0);
	glVertex2f(5.0, 6.5);
	glVertex2f(4.5, 6.25);
	glVertex2f(4.25, 6.0);
	glVertex2f(4.0, 5.75);
	glVertex2f(3.5, 5.5);
	glVertex2f(3.0, 5.5);
	glVertex2f(1.9, 5.45);
	glVertex2f(1.8, 5.4);
	glVertex2f(1.7, 5.35);
	glVertex2f(1.6, 5.3);
	glVertex2f(1.5, 5.25);
	glVertex2f(1.4, 5.15);
	glVertex2f(1.3, 5.0);
	glVertex2f(1.2, 4.85);
	glVertex2f(1.1, 4.7);
	glVertex2f(1.0, 4.3);
	glVertex2f(1.0, 3.2);
	glVertex2f(1.1, 3.05);
	glVertex2f(1.2, 2.9);
	glVertex2f(1.3, 2.9);
	glVertex2f(1.4, 2.75);
	glVertex2f(1.5, 2.65);
	glVertex2f(1.6, 2.6);
	glVertex2f(1.7, 2.55);
	glVertex2f(1.8, 2.5);
	glVertex2f(1.9, 2.45);
	glVertex2f(2.0, 2.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //color for outer window
	glBegin(GL_POLYGON);
	glVertex2f(5.0, 5.0);
	glVertex2f(14.0, 5.0);
	glVertex2f(11.5, 6.5);
	glVertex2f(10.5, 6.75);
	glVertex2f(7.0, 6.75);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //making outer line for car
	glBegin(GL_LINE_LOOP);
	glVertex2f(2.5, 2.5);
	glVertex2f(3.0, 3.5);
	glVertex2f(3.5, 3.75);
	glVertex2f(4.0, 4.0);
	glVertex2f(4.5, 4.0);
	glVertex2f(5.0, 3.75);
	glVertex2f(5.5, 3.5);
	glVertex2f(5.75, 3.0);
	glVertex2f(6.0, 2.5);
	glVertex2f(16.5, 2.5);
	glVertex2f(16.75, 3.0);
	glVertex2f(17.0, 3.5);
	glVertex2f(17.5, 3.75);
	glVertex2f(18.0, 4.0);
	glVertex2f(18.5, 4.0);
	glVertex2f(19.0, 3.75);
	glVertex2f(19.5, 3.5);
	glVertex2f(19.75, 3.0);
	glVertex2f(20.0, 2.5);
	glVertex2f(21.0, 2.5);
	glVertex2f(21.0, 4.0);
	glVertex2f(21.5, 4.0);
	glVertex2f(21.0, 4.5);
	glVertex2f(20.0, 5.0);
	glVertex2f(15.0, 5.0);
	glVertex2f(14.0, 5.5);
	glVertex2f(13.0, 6.0);
	glVertex2f(12.0, 6.5);
	glVertex2f(11.0, 7.0);
	glVertex2f(6.0, 7.0);
	glVertex2f(5.0, 6.5);
	glVertex2f(4.5, 6.25);
	glVertex2f(4.25, 6.0);
	glVertex2f(4.0, 5.75);
	glVertex2f(3.5, 5.5);
	glVertex2f(3.0, 5.5);
	glVertex2f(1.9, 5.45);
	glVertex2f(1.8, 5.4);
	glVertex2f(1.7, 5.35);
	glVertex2f(1.6, 5.3);
	glVertex2f(1.5, 5.25);
	glVertex2f(1.4, 5.15);
	glVertex2f(1.3, 5.0);
	glVertex2f(1.2, 4.85);
	glVertex2f(1.1, 4.7);
	glVertex2f(1.0, 4.3);
	glVertex2f(1.0, 3.2);
	glVertex2f(1.1, 3.05);
	glVertex2f(1.2, 2.9);
	glVertex2f(1.3, 2.9);
	glVertex2f(1.4, 2.75);
	glVertex2f(1.5, 2.65);
	glVertex2f(1.6, 2.6);
	glVertex2f(1.7, 2.55);
	glVertex2f(1.8, 2.5);
	glVertex2f(1.9, 2.45);
	glVertex2f(2.0, 2.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP); //outer line for design a car
	glVertex2f(8.0, 3.0);
	glVertex2f(16.0, 3.0);
	glVertex2f(16.5, 3.5);
	glVertex2f(17.0, 4.0);
	glVertex2f(16.5, 4.25);
	glVertex2f(16.0, 4.5);
	glVertex2f(15.0, 4.5);
	glVertex2f(15.0, 5.0);
	glVertex2f(14.0, 5.0);
	glVertex2f(11.5, 6.5);
	glVertex2f(10.5, 6.75);
	glVertex2f(7.0, 6.75);
	glVertex2f(5.0, 5.0);
	glVertex2f(7.0, 5.0);
	glVertex2f(6.5, 4.5);
	glEnd();


	glBegin(GL_LINES); //connecting outer line
	glVertex2d(7.0, 5.0);
	glVertex2d(15.0, 5.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //connecting outer line 
	glBegin(GL_LINES);
	glVertex2d(15.0, 4.0);
	glVertex2d(17.0, 4.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //connecting outer line
	glBegin(GL_LINES);
	glVertex2d(15.0, 3.5);
	glVertex2d(16.5, 3.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //connecting outer line
	glBegin(GL_LINES);
	glVertex2d(15.0, 5.0);
	glVertex2d(14.0, 3.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //connecting outer line
	glBegin(GL_LINES);
	glVertex2d(12.0, 5.0);
	glVertex2d(12.0, 6.2);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //connecting outer line
	glBegin(GL_LINES);
	glVertex2d(7.0, 5.0);
	glVertex2d(7.0, 6.7);
	glEnd();

	glBegin(GL_POLYGON); //drawing a back tyre
	glVertex2f(3.0, 2.5);
	glVertex2f(3.0, 2.6);
	glVertex2f(3.15, 3.1);
	glVertex2f(3.2, 3.2);
	glVertex2f(3.3, 3.35);
	glVertex2f(3.4, 3.4);
	glVertex2f(3.5, 3.45);
	glVertex2f(3.6, 3.55);
	glVertex2f(3.7, 3.6);
	glVertex2f(3.8, 3.63);
	glVertex2f(4.0, 3.65);
	glVertex2f(4.2, 3.7);
	glVertex2f(4.4, 3.7);
	glVertex2f(4.6, 3.65);
	glVertex2f(4.8, 3.55);
	glVertex2f(5.0, 3.45);
	glVertex2f(5.1, 3.4);
	glVertex2f(5.2, 3.25);
	glVertex2f(5.3, 3.2);
	glVertex2f(5.4, 3.0);
	glVertex2f(5.5, 2.5);

	glVertex2f(5.45, 2.15);
	glVertex2f(5.4, 1.9);
	glVertex2f(5.35, 1.8);
	glVertex2f(5.2, 1.6);
	glVertex2f(5.0, 1.5);
	glVertex2f(4.9, 1.4);
	glVertex2f(4.7, 1.3);
	glVertex2f(4.6, 1.27);
	glVertex2f(4.4, 1.25);
	glVertex2f(4.0, 1.25);
	glVertex2f(3.9, 1.3);
	glVertex2f(3.75, 1.35);
	glVertex2f(3.6, 1.4);
	glVertex2f(3.45, 1.55);
	glVertex2f(3.3, 1.7);
	glVertex2f(3.2, 1.8);
	glVertex2f(3.1, 2.2);
	glEnd();


	glBegin(GL_POLYGON); //drawing front tyre
	glVertex2f(17.0, 2.5);
	glVertex2f(17.0, 2.6);
	glVertex2f(17.15, 3.1);
	glVertex2f(17.2, 3.2);
	glVertex2f(17.3, 3.35);
	glVertex2f(17.4, 3.4);
	glVertex2f(17.5, 3.45);
	glVertex2f(17.6, 3.55);
	glVertex2f(17.7, 3.6);
	glVertex2f(17.8, 3.63);
	glVertex2f(18.0, 3.65);
	glVertex2f(18.2, 3.7);
	glVertex2f(18.4, 3.7);
	glVertex2f(18.6, 3.65);
	glVertex2f(18.8, 3.55);
	glVertex2f(19.0, 3.45);
	glVertex2f(19.1, 3.4);
	glVertex2f(19.2, 3.25);
	glVertex2f(19.3, 3.2);
	glVertex2f(19.4, 3.0);

	glVertex2f(19.5, 2.5);
	glVertex2f(19.45, 2.15);
	glVertex2f(19.4, 1.9);
	glVertex2f(19.35, 1.8);
	glVertex2f(19.2, 1.6);
	glVertex2f(19.0, 1.5);
	glVertex2f(18.9, 1.4);
	glVertex2f(18.7, 1.3);
	glVertex2f(18.6, 1.27);
	glVertex2f(18.4, 1.25);
	glVertex2f(18.0, 1.25);
	glVertex2f(17.9, 1.3);
	glVertex2f(17.75, 1.35);
	glVertex2f(17.6, 1.4);
	glVertex2f(17.45, 1.55);
	glVertex2f(17.3, 1.7);
	glVertex2f(17.2, 1.8);
	glVertex2f(17.1, 2.2);
	glEnd();
	glPopMatrix();
}

void car2()
{
	glPushMatrix(); //making color for outer line
	glTranslated(b, 300.0, 0.0);
	glScaled(4.0, 9.0, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(2.5, 2.5);
	glVertex2f(3.0, 3.5);
	glVertex2f(3.5, 3.75);
	glVertex2f(4.0, 4.0);
	glVertex2f(4.5, 4.0);
	glVertex2f(5.0, 3.75);
	glVertex2f(5.5, 3.5);
	glVertex2f(5.75, 3.0);
	glVertex2f(6.0, 2.5);
	glVertex2f(16.5, 2.5);
	glVertex2f(16.75, 3.0);
	glVertex2f(17.0, 3.5);
	glVertex2f(17.5, 3.75);
	glVertex2f(18.0, 4.0);
	glVertex2f(18.5, 4.0);
	glVertex2f(19.0, 3.75);
	glVertex2f(19.5, 3.5);
	glVertex2f(19.75, 3.0);
	glVertex2f(20.0, 2.5);
	glVertex2f(21.0, 2.5);
	glVertex2f(21.0, 4.0);
	glVertex2f(21.5, 4.0);
	glVertex2f(21.0, 4.5);
	glVertex2f(20.0, 5.0);
	glVertex2f(15.0, 5.0);
	glVertex2f(14.0, 5.5);
	glVertex2f(13.0, 6.0);
	glVertex2f(12.0, 6.5);
	glVertex2f(11.0, 7.0);
	glVertex2f(6.0, 7.0);
	glVertex2f(5.0, 6.5);
	glVertex2f(4.5, 6.25);
	glVertex2f(4.25, 6.0);
	glVertex2f(4.0, 5.75);
	glVertex2f(3.5, 5.5);
	glVertex2f(3.0, 5.5);
	glVertex2f(1.9, 5.45);
	glVertex2f(1.8, 5.4);
	glVertex2f(1.7, 5.35);
	glVertex2f(1.6, 5.3);
	glVertex2f(1.5, 5.25);
	glVertex2f(1.4, 5.15);
	glVertex2f(1.3, 5.0);
	glVertex2f(1.2, 4.85);
	glVertex2f(1.1, 4.7);
	glVertex2f(1.0, 4.3);
	glVertex2f(1.0, 3.2);
	glVertex2f(1.1, 3.05);
	glVertex2f(1.2, 2.9);
	glVertex2f(1.3, 2.9);
	glVertex2f(1.4, 2.75);
	glVertex2f(1.5, 2.65);
	glVertex2f(1.6, 2.6);
	glVertex2f(1.7, 2.55);
	glVertex2f(1.8, 2.5);
	glVertex2f(1.9, 2.45);
	glVertex2f(2.0, 2.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //color for outer window
	glBegin(GL_POLYGON);
	glVertex2f(5.0, 5.0);
	glVertex2f(14.0, 5.0);
	glVertex2f(11.5, 6.5);
	glVertex2f(10.5, 6.75);
	glVertex2f(7.0, 6.75);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //making outer line for car
	glBegin(GL_LINE_LOOP);
	glVertex2f(2.5, 2.5);
	glVertex2f(3.0, 3.5);
	glVertex2f(3.5, 3.75);
	glVertex2f(4.0, 4.0);
	glVertex2f(4.5, 4.0);
	glVertex2f(5.0, 3.75);
	glVertex2f(5.5, 3.5);
	glVertex2f(5.75, 3.0);
	glVertex2f(6.0, 2.5);
	glVertex2f(16.5, 2.5);
	glVertex2f(16.75, 3.0);
	glVertex2f(17.0, 3.5);
	glVertex2f(17.5, 3.75);
	glVertex2f(18.0, 4.0);
	glVertex2f(18.5, 4.0);
	glVertex2f(19.0, 3.75);
	glVertex2f(19.5, 3.5);
	glVertex2f(19.75, 3.0);
	glVertex2f(20.0, 2.5);
	glVertex2f(21.0, 2.5);
	glVertex2f(21.0, 4.0);
	glVertex2f(21.5, 4.0);
	glVertex2f(21.0, 4.5);
	glVertex2f(20.0, 5.0);
	glVertex2f(15.0, 5.0);
	glVertex2f(14.0, 5.5);
	glVertex2f(13.0, 6.0);
	glVertex2f(12.0, 6.5);
	glVertex2f(11.0, 7.0);
	glVertex2f(6.0, 7.0);
	glVertex2f(5.0, 6.5);
	glVertex2f(4.5, 6.25);
	glVertex2f(4.25, 6.0);
	glVertex2f(4.0, 5.75);
	glVertex2f(3.5, 5.5);
	glVertex2f(3.0, 5.5);
	glVertex2f(1.9, 5.45);
	glVertex2f(1.8, 5.4);
	glVertex2f(1.7, 5.35);
	glVertex2f(1.6, 5.3);
	glVertex2f(1.5, 5.25);
	glVertex2f(1.4, 5.15);
	glVertex2f(1.3, 5.0);
	glVertex2f(1.2, 4.85);
	glVertex2f(1.1, 4.7);
	glVertex2f(1.0, 4.3);
	glVertex2f(1.0, 3.2);
	glVertex2f(1.1, 3.05);
	glVertex2f(1.2, 2.9);
	glVertex2f(1.3, 2.9);
	glVertex2f(1.4, 2.75);
	glVertex2f(1.5, 2.65);
	glVertex2f(1.6, 2.6);
	glVertex2f(1.7, 2.55);
	glVertex2f(1.8, 2.5);
	glVertex2f(1.9, 2.45);
	glVertex2f(2.0, 2.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP); //outer line for design a car
	glVertex2f(8.0, 3.0);
	glVertex2f(16.0, 3.0);
	glVertex2f(16.5, 3.5);
	glVertex2f(17.0, 4.0);
	glVertex2f(16.5, 4.25);
	glVertex2f(16.0, 4.5);
	glVertex2f(15.0, 4.5);
	glVertex2f(15.0, 5.0);
	glVertex2f(14.0, 5.0);
	glVertex2f(11.5, 6.5);
	glVertex2f(10.5, 6.75);
	glVertex2f(7.0, 6.75);
	glVertex2f(5.0, 5.0);
	glVertex2f(7.0, 5.0);
	glVertex2f(6.5, 4.5);
	glEnd();


	glBegin(GL_LINES); //connecting outer line
	glVertex2d(7.0, 5.0);
	glVertex2d(15.0, 5.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //connecting outer line 
	glBegin(GL_LINES);
	glVertex2d(15.0, 4.0);
	glVertex2d(17.0, 4.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //connecting outer line
	glBegin(GL_LINES);
	glVertex2d(15.0, 3.5);
	glVertex2d(16.5, 3.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //connecting outer line
	glBegin(GL_LINES);
	glVertex2d(15.0, 5.0);
	glVertex2d(14.0, 3.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //connecting outer line
	glBegin(GL_LINES);
	glVertex2d(12.0, 5.0);
	glVertex2d(12.0, 6.2);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); //connecting outer line
	glBegin(GL_LINES);
	glVertex2d(7.0, 5.0);
	glVertex2d(7.0, 6.7);
	glEnd();

	glBegin(GL_POLYGON); //drawing a back tyre
	glVertex2f(3.0, 2.5);
	glVertex2f(3.0, 2.6);
	glVertex2f(3.15, 3.1);
	glVertex2f(3.2, 3.2);
	glVertex2f(3.3, 3.35);
	glVertex2f(3.4, 3.4);
	glVertex2f(3.5, 3.45);
	glVertex2f(3.6, 3.55);
	glVertex2f(3.7, 3.6);
	glVertex2f(3.8, 3.63);
	glVertex2f(4.0, 3.65);
	glVertex2f(4.2, 3.7);
	glVertex2f(4.4, 3.7);
	glVertex2f(4.6, 3.65);
	glVertex2f(4.8, 3.55);
	glVertex2f(5.0, 3.45);
	glVertex2f(5.1, 3.4);
	glVertex2f(5.2, 3.25);
	glVertex2f(5.3, 3.2);
	glVertex2f(5.4, 3.0);
	glVertex2f(5.5, 2.5);

	glVertex2f(5.45, 2.15);
	glVertex2f(5.4, 1.9);
	glVertex2f(5.35, 1.8);
	glVertex2f(5.2, 1.6);
	glVertex2f(5.0, 1.5);
	glVertex2f(4.9, 1.4);
	glVertex2f(4.7, 1.3);
	glVertex2f(4.6, 1.27);
	glVertex2f(4.4, 1.25);
	glVertex2f(4.0, 1.25);
	glVertex2f(3.9, 1.3);
	glVertex2f(3.75, 1.35);
	glVertex2f(3.6, 1.4);
	glVertex2f(3.45, 1.55);
	glVertex2f(3.3, 1.7);
	glVertex2f(3.2, 1.8);
	glVertex2f(3.1, 2.2);
	glEnd();


	glBegin(GL_POLYGON); //drawing front tyre
	glVertex2f(17.0, 2.5);
	glVertex2f(17.0, 2.6);
	glVertex2f(17.15, 3.1);
	glVertex2f(17.2, 3.2);
	glVertex2f(17.3, 3.35);
	glVertex2f(17.4, 3.4);
	glVertex2f(17.5, 3.45);
	glVertex2f(17.6, 3.55);
	glVertex2f(17.7, 3.6);
	glVertex2f(17.8, 3.63);
	glVertex2f(18.0, 3.65);
	glVertex2f(18.2, 3.7);
	glVertex2f(18.4, 3.7);
	glVertex2f(18.6, 3.65);
	glVertex2f(18.8, 3.55);
	glVertex2f(19.0, 3.45);
	glVertex2f(19.1, 3.4);
	glVertex2f(19.2, 3.25);
	glVertex2f(19.3, 3.2);
	glVertex2f(19.4, 3.0);

	glVertex2f(19.5, 2.5);
	glVertex2f(19.45, 2.15);
	glVertex2f(19.4, 1.9);
	glVertex2f(19.35, 1.8);
	glVertex2f(19.2, 1.6);
	glVertex2f(19.0, 1.5);
	glVertex2f(18.9, 1.4);
	glVertex2f(18.7, 1.3);
	glVertex2f(18.6, 1.27);
	glVertex2f(18.4, 1.25);
	glVertex2f(18.0, 1.25);
	glVertex2f(17.9, 1.3);
	glVertex2f(17.75, 1.35);
	glVertex2f(17.6, 1.4);
	glVertex2f(17.45, 1.55);
	glVertex2f(17.3, 1.7);
	glVertex2f(17.2, 1.8);
	glVertex2f(17.1, 2.2);
	glEnd();
	glPopMatrix();
}



void tree1()
{
	//trunk1
	glColor3ub(95, 6, 5);
	double len = 100;
	double thick = 20;
	glPushMatrix();
	glTranslated(100, 150 - 48, 0.0);
	glScaled(125, 400, 150);
	glutSolidCube(1.0);
	glPopMatrix();

	//leaves1


	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();

	glTranslated(100, 235 - 48, 0.0);
	glutSolidCone(70, 140, 3, 2);
	glPopMatrix();

	//leaves2

	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslated(100, 270 - 48, 0.0);
	glutSolidCone(60, 120, 3, 2);
	glPopMatrix();

	// leaves3

	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslated(100, 300 - 48, 0);
	glutSolidCone(50, 100, 3, 2);
	glPopMatrix();
}

void window1() {
	glPushMatrix();

	//glScaled(40.0, 40.0, 0.0);


	glBegin(GL_POLYGON);

	//glColor3f(0, 0.8, 0.9);
	glColor3f(0, 0.2, 1);
	glVertex2f(100, 300);

	glColor3f(0, 0.8, 0.9);
	glVertex2f(100, 950);

	glColor3f(0, 0.8, 0.9);
	glVertex2f(900, 950);

	glColor3f(0, 0.2, 1);
	glVertex2f(900, 300);

	glEnd();

	glPopMatrix();
}
//rood divider
void divider() {
	glPushMatrix();

	//glScaled(40.0, 40.0, 0.0);
	for (int i = 0; i < 800; i = i + 20) {
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_POLYGON);
		glVertex2f(122 + i, 352);
		glVertex2f(120 + i, 348);
		glVertex2f(125 + i, 348);
		glVertex2f(127 + i, 352);
		glEnd();
	}




	glPopMatrix();
}

void desk()
{
	glPushMatrix();

	//glScaled(40.0, 40.0, 0.0);

	glColor3f(0.6, 0.3, 0);
	glBegin(GL_POLYGON);
	glVertex2f(560, 80);
	glVertex2f(560, 320);
	glVertex2f(850, 320);
	glVertex2f(850, 80);

	glEnd();
	glColor3f(0.9, 0.8, 0.1);
	glBegin(GL_POLYGON);
	glVertex2f(540, 320);
	glVertex2f(540, 335);
	glVertex2f(870, 335);
	glVertex2f(870, 320);

	glEnd();

	glPopMatrix();

	char string4[] = "INFOSYS";
	void *font4 = GLUT_BITMAP_TIMES_ROMAN_24;
	glColor3ub(1, .23, 0);
	glRasterPos3f(660, 250, 0);
	for (int k = 0; k < strlen(string4); k++)
		glutBitmapCharacter(font4, string4[k]);
}

void woman()
{
	//face
	glColor3ub(0, 0, 0);
	glPushMatrix();
	glTranslatef(540, 495, 0);
	glutSolidTorus(1, 10, 100, 90);
	glPopMatrix();
	glColor3ub(255, 191, 128);
	glPushMatrix();
	glTranslatef(540, 494, 0);
	glutSolidTorus(7, 7, 100, 90);
	glPopMatrix();
	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(540, 494);
	glVertex2i(540, 490); //nose
	glVertex2i(531, 498);
	glVertex2i(532, 499);
	glVertex2i(532, 499);
	glVertex2i(537, 498);//eyebrow
	glVertex2i(549, 498);
	glVertex2i(548, 499);
	glVertex2i(548, 499);
	glVertex2i(543, 498);//eyebrow
	glEnd();
	//ear right
	glBegin(GL_POLYGON);
	glColor3ub(255, 191, 128);
	glVertex2i(540 - 14, 494 + 1);
	glVertex2i(540 - 14, 490 + 1);
	glVertex2i(538 - 14, 489 + 1);
	glVertex2i(538 - 14, 495 + 1);
	glEnd();
	//ear left
	glBegin(GL_POLYGON);
	glColor3ub(255, 191, 128);
	glVertex2i(554, 495);
	glVertex2i(556, 496);
	glVertex2i(556, 491);
	glVertex2i(554, 490);
	glEnd();
	//ear ring right
	glBegin(GL_POLYGON);
	glColor3ub(255, 85, 90);
	glVertex2i(539 - 14, 492);
	glVertex2i(542 - 14, 485);
	glVertex2i(536 - 14, 485);

	glEnd();
	//ear ring left
	glBegin(GL_POLYGON);
	glColor3ub(255, 85, 90);
	glVertex2i(551, 485);
	glVertex2i(555, 492);
	glVertex2i(558, 485);
	glEnd();

	//hair
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2i(525, 499);
	glVertex2i(549, 509);
	glVertex2i(540, 512);
	glVertex2i(528, 507);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2i(540, 507);
	glVertex2i(549, 509);
	glVertex2i(552, 507);
	glVertex2i(555, 499);
	glEnd();
	// eyes
	glBegin(GL_POLYGON);
	glVertex2i(533, 496);
	glVertex2i(535, 496);
	glVertex2i(535, 494);
	glVertex2i(533, 494);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(545, 496);
	glVertex2i(547, 496);
	glVertex2i(547, 494);
	glVertex2i(545, 494);
	glEnd();
	//mouth
	glBegin(GL_POLYGON);
	glColor3ub(150, 50, 50);
	glVertex2i(534, 487);
	glVertex2i(540, 484);
	glVertex2i(546, 487);
	glVertex2i(540, 485);
	glEnd();
	//shirt
	glBegin(GL_POLYGON);
	glColor3ub(160, 150, 250);
	glVertex2i(529, 480);
	glVertex2i(551, 480);
	glVertex2i(566, 469);
	glVertex2i(561, 460);
	glVertex2i(556, 465);
	glVertex2i(556, 445);
	glVertex2i(524, 445);
	glVertex2i(524, 465);
	glVertex2i(519, 460);
	glVertex2i(514, 469);
	glEnd();
	//neck
	glBegin(GL_POLYGON);
	glColor3ub(255, 190, 128);
	glVertex2i(533, 480);
	glVertex2i(547, 480);
	glVertex2i(545, 471);
	glVertex2i(535, 471);
	glEnd();
	//hands
	glBegin(GL_POLYGON);
	glColor3ub(255, 191, 128);
	glVertex2i(565, 468);
	glVertex2i(575, 453);
	glVertex2i(567, 454);
	glVertex2i(562, 462);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(575, 453);
	glVertex2i(556, 438);
	glVertex2i(556, 445);
	glVertex2i(567, 454);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(515, 468);
	glVertex2i(505, 453);
	glVertex2i(513, 454);
	glVertex2i(518, 462);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(505, 453);
	glVertex2i(524, 438);
	glVertex2i(524, 445);
	glVertex2i(513, 454);
	glEnd();
	// belt
	glBegin(GL_POLYGON);
	glColor3ub(10, 120, 130);
	glVertex2i(556, 445);
	glVertex2i(524, 445);
	glVertex2i(524, 440);
	glVertex2i(556, 440);
	glEnd();


	/// leg
	glBegin(GL_POLYGON);
	glColor3ub(255, 190, 128);
	glVertex2i(555, 440);
	glVertex2i(525, 440);
	glVertex2i(520, 405);
	glVertex2i(530, 405);
	glVertex2i(533, 438);
	glVertex2i(550, 405);
	glVertex2i(560, 405);
	glEnd();
	//skirt
	glBegin(GL_POLYGON);
	glColor3ub(180, 80, 90);
	glVertex2i(524, 440);
	glVertex2i(556, 440);
	glVertex2i(566, 410);
	glVertex2i(514, 410);
	glEnd();
	//shoe left
	glBegin(GL_POLYGON);
	glColor3ub(180, 0, 0);
	glVertex2i(530, 405);
	glVertex2i(530, 396);
	glVertex2i(528, 396);
	glVertex2i(528, 404);
	glVertex2i(522, 396);
	glVertex2i(512, 396);
	glVertex2i(520, 405);

	glEnd();
	//shoe right
	glBegin(GL_POLYGON);
	glColor3ub(180, 0, 0);
	glVertex2i(550, 405);
	glVertex2i(550, 396);
	glVertex2i(552, 396);
	glVertex2i(552, 404);
	glVertex2i(558, 396);
	glVertex2i(568, 396);
	glVertex2i(560, 405);
	glEnd();

}


void road()
{
	glPushMatrix();

	//glScaled(40.0, 40.0, 0.0);

	glColor3f(0.329, 0.329, 0.329);
	glBegin(GL_POLYGON);
	glVertex2f(100, 300);
	glVertex2f(100, 400);
	glVertex2f(900, 400);
	glVertex2f(900, 300);

	glEnd();

	glPopMatrix();
}

void tree()
{
	glPushMatrix();

	//glScaled(40.0, 40.0, 0.0);

	//brach
	/*glColor3f(0.329, 0.329, 0.329);
	glBegin(GL_POLYGON);
	glVertex2f(100, 300);
	glVertex2f(100, 400);
	glVertex2f(900, 400);
	glVertex2f(900, 300);

	glEnd();
	
	//leaves
	glBegin(GL_LINE_LOOP);
	int i;
	glColor3f(0.0, 0.1, 0.0);

	for (i = 0; i < 360; i++)
	{
		float rad = i * DEG2RAD;
		glVertex2f(cos(rad) * 40,
			sin(rad) * 40);
	}

	glEnd();

	glPopMatrix();
}


void building1()
{
	glPushMatrix();

	//glScaled(40.0, 40.0, 0.0);

	glColor3f(0.3, 0.0, 0.329);
	glBegin(GL_POLYGON);
	glVertex2f(150, 400);
	glVertex2f(150, 730);
	glVertex2f(250, 730);
	glVertex2f(250, 400);

	glEnd();

	//TOP
	glColor3f(0.3, 0.2, 0.329);
	glBegin(GL_POLYGON);
	glVertex2f(165, 730);
	glVertex2f(165, 800);
	glVertex2f(235, 800);
	glVertex2f(235, 730);

	glEnd();

	//TOWER
	glColor3f(0.3, 0.0, 0.329);
	glBegin(GL_POLYGON);
	glVertex2f(195, 800);
	glVertex2f(195, 880);
	glVertex2f(205, 880);
	glVertex2f(205, 800);

	glEnd();

	glColor3f(0.2, 0.2, 0.329);
	glBegin(GL_POLYGON);
	glVertex2f(175, 400);
	glVertex2f(175, 500);
	glVertex2f(225, 500);
	glVertex2f(225, 400);

	glEnd();
	glPopMatrix();
}

void building2()
{
	glPushMatrix();

	//glScaled(40.0, 40.0, 0.0);

	glColor3f(0.55, 0.47, 0.14);
	glBegin(GL_POLYGON);
	glVertex2f(250, 400);
	glVertex2f(250, 700);
	glVertex2f(350, 850);
	glVertex2f(350, 400);

	glEnd();


}

void frame()
{
	glPushMatrix();

	//glScaled(40.0, 40.0, 0.0);

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(80, 280);
	glVertex2f(80, 970);

	//glColor3f( 0.8,0.7,0.2 );
	glVertex2f(100, 970);
	glVertex2f(100, 280);
	glEnd();



	glBegin(GL_POLYGON);
	//glColor3f(0.8, 0.7, 0.2);
	glVertex2f(100, 280);
	glVertex2f(100, 300);

	//glColor3f(0.8, 0.7, 0.2);
	glVertex2f(900, 300);
	glVertex2f(900, 280);
	glEnd();


	//glColor3f(0.7, 0.4, 0);
	glBegin(GL_POLYGON);
	glVertex2f(100, 950);
	glVertex2f(100, 970);
	//glColor3f(0.8, 0.7, 0.2);
	glVertex2f(900, 970);
	glVertex2f(900, 950);
	glEnd();


	//glColor3f(0.7, 0.4, 0);
	glBegin(GL_POLYGON);
	//glColor3f(0.8, 0.7, 0.2);
	glVertex2f(900, 280);
	glVertex2f(900, 970);
	//glColor3f(0.7, 0.4, 0);
	glVertex2f(920, 970);
	glVertex2f(920, 280);
	glEnd();


	//glColor3f(0.7, 0.4, 0);
	glBegin(GL_POLYGON);
	//glColor3f(0.8, 0.7, 0.2);
	glVertex2f(490, 300);
	glVertex2f(490, 950);

	//glColor3f(0.7, 0.4, 0);
	glVertex2f(510, 950);
	glVertex2f(510, 300);
	glEnd();

}


void building3()
{

	glPushMatrix();

	//glScaled(40.0, 40.0, 0.0);

	glColor3f(0.84, 0.84, 0.74);
	glBegin(GL_POLYGON);
	glVertex2f(350, 400);
	glVertex2f(350, 730);
	glVertex2f(450, 730);
	glVertex2f(450, 400);

	glEnd();

	glColor3f(0.55, 0.47, 0.14);
	glBegin(GL_POLYGON);
	glVertex2f(350, 730);
	glVertex2f(380, 780);
	glVertex2f(420, 780);
	glVertex2f(450, 730);

	glEnd();


}

void floor()
{
	glPushMatrix();

	//glScaled(40.0, 40.0, 0.0);

		//glColor3f(0.7 , 0.5 , 0.4);
	glColor3f(0.84, 0.84, 0.74);
	glBegin(GL_POLYGON);
	//glColor3f(255, 245, 253);
	glVertex2f(0, 0);
	//	glColor3f(255, 0, 253);
	glVertex2f(0, 280);
	//glColor3f(2, 254, 245);
	glVertex2f(1000, 280);
	//glColor3f(245, 0, 255);
	glVertex2f(1000, 0);

	glEnd();

	glColor3f(0, 0, 0);
	for (int i = 0; i < 1000; i = i + 100) {
		glBegin(GL_LINES);
		glVertex2f(0 + i, 0);
		glVertex2f(70 + i, 280);
		glEnd();
	}
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(0, 100);
	glVertex2f(1000, 100);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(0, 200);
	glVertex2f(1000, 200);
	glEnd();



}

void wall() {

	glColor3f(0.9, 0.8, 0.7);
	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.3, 0.8);  //dark
	glVertex2f(0, 250);
	glColor3f(0.9, 0.8, 1);
	glVertex2f(0, 1000);
	glColor3f(0.9, 0.8, 1);
	glVertex2f(1000, 1000);
	glColor3f(0.7, 0.3, 0.8); //dark
	glVertex2f(1000, 250);

	glEnd();

}







void  mydisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);


	display();

	glutSwapBuffers();

}

void display(void)
{
	
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0, 1, 1.0, 1.0); //back ground for sky

	floor();
	wall();

	window1();
	road();
	drawCloud(750, 850);
	drawCloud(400, 850);
	building1();
	building2();
	building3();

	divider();
	tree1();

	frame();
	car();
	car2();
	frame();
	men();
	//woman();
	desk();
	//	drawCircle1();
	//	drawCloud();

		//window1();

		//glFlush();
}

void myinit()
{

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1000, 0.0, 1000);

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1346, 728);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Traffic signal");

	//call back functions


	myinit();

	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(myKeyboard);
	glutMainLoop();

	return 1;
}
*/