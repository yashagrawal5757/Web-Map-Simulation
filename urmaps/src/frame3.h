

int cloud = 0;
int x3 = 200; //for man

void bus3()
{
	glPushMatrix();
	glTranslatef(x32, -100, 0);
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
void road3()
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




void home3()
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


/*
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


*/

//knob=circle
void knob(float x0, float y0, float radius)
{
	GLfloat x, y, i;
	//GLfloat x0 = 360, y0 = 270;  //centre of circle

	glBegin(GL_POLYGON);
	for (i = 0; i < (2 * pi); i += 0.001)     //iterate till 180 to make a semicircle
	{
		// circle is defined as x=r*cos(i) and y=r*sin(i) 
		x = x0 + radius * cos(i);
		y = y0 + radius * sin(i);

		glVertex2f(x, y);
	}
	glEnd();

	glFlush();

}

void teacher3(void)
{
	glPushMatrix();
	glScalef(0.5, 0.5, 0);
	glTranslatef(900, 150, 1);


	glBegin(GL_POLYGON);
	//man
	//leg1
	glColor3f(0.098, 0.098, 0.439);
	glVertex2f(855, 211);
	glVertex2f(868, 211);
	glVertex2f(875, 347);
	glVertex2f(849, 347);
	glEnd();

	//leg2
	glBegin(GL_POLYGON);
	glColor3f(0.098, 0.098, 0.439);
	glVertex2f(906, 347);
	glVertex2f(917, 212);
	glVertex2f(905, 212);
	glVertex2f(883, 325);
	glVertex2f(875, 328);
	glVertex2f(872, 348);
	glEnd();

	//belt
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex2f(850, 345);
	glVertex2f(850, 350);
	glVertex2f(902, 350);
	glVertex2f(902, 345);
	glEnd();


	//face
	glBegin(GL_POLYGON);
	glColor3f(0.957, 0.643, 0.376);
	glVertex2f(871, 446);
	glVertex2f(864, 450);
	glVertex2f(859, 456);
	glVertex2f(856, 464);
	glVertex2f(856, 469);
	glVertex2f(850, 474);
	glVertex2f(849, 479);
	glVertex2f(849, 484);
	glVertex2f(853, 484);
	glVertex2f(858, 506);
	glVertex2f(873, 507);
	glVertex2f(895, 501);
	glVertex2f(899, 489);
	glVertex2f(905, 485);
	glVertex2f(906, 477);
	glVertex2f(901, 469);
	glVertex2f(897, 458);
	glVertex2f(888, 447);
	glVertex2f(870, 446);
	glEnd();


	//hair
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(865, 523);
	glVertex2f(906, 508);
	glVertex2f(904, 485);
	glVertex2f(901, 484);
	glVertex2f(896, 500);
	glVertex2f(860, 500);
	glVertex2f(854, 500);
	glVertex2f(848, 500);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(858, 510);
	glVertex2f(872, 509);
	glVertex2f(884, 500);
	glVertex2f(859, 508);
	glEnd();

	//eyes
	glPointSize(2.0);
	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex2f(888, 483);
	glVertex2f(868, 483);
	glEnd();

	//neck
	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);
	glVertex2f(875, 478);
	glVertex2f(869, 465);
	glVertex2f(875, 463);
	glVertex2f(880, 465);
	glVertex2f(879, 476);
	glVertex2f(874, 478);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);
	glVertex2f(870, 448);
	glVertex2f(886, 448);
	glVertex2f(886, 435);
	glVertex2f(878, 425);
	glVertex2f(869, 434);
	glEnd();

	//collorleft
	glBegin(GL_POLYGON);
	glColor3f(0.824, 0.412, 0.118);
	glVertex2f(860, 435);
	glVertex2f(872, 439);
	glVertex2f(879, 427);
	glVertex2f(869, 420);
	glEnd();


	//collor ryt
	glBegin(GL_POLYGON);
	glColor3f(0.824, 0.412, 0.118);
	glVertex2f(898, 435);
	glVertex2f(887, 436);
	glVertex2f(879, 427);
	glVertex2f(886, 417);
	glEnd();


	//shirt
	glBegin(GL_POLYGON);
	glColor3f(1.000, 0.478, 0.576);
	glVertex2f(852, 349);
	glVertex2f(851, 422);
	glVertex2f(862, 429);
	glVertex2f(879, 423);
	glVertex2f(898, 427);
	glVertex2f(906, 422);
	glVertex2f(906, 349);

	glEnd();

	//rty hand

	glBegin(GL_POLYGON);
	glColor3f(1.000, 0.078, 0.576);
	glVertex2f(852, 429);
	glVertex2f(851, 405);
	glVertex2f(826, 388);
	glVertex2f(829, 404);
	glVertex2f(852, 430);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.000, 0.078, 0.576);
	glVertex2f(826, 388);
	glVertex2f(829, 404);
	glVertex2f(809, 431);
	glVertex2f(821, 435);
	glVertex2f(829, 404);
	glEnd();


	//lefthand
	glBegin(GL_POLYGON);
	glColor3f(1.000, 0.078, 0.576);
	glVertex2f(907, 428);
	glVertex2f(921, 414);
	glVertex2f(928, 387);
	glVertex2f(915, 379);
	glVertex2f(914, 385);
	glVertex2f(912, 394);
	glVertex2f(905, 407);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.000, 0.078, 0.576);
	glVertex2f(926, 385);
	glVertex2f(926, 370);
	glVertex2f(924, 357);
	glVertex2f(916, 341);
	glVertex2f(909, 348);
	glVertex2f(911, 355);
	glVertex2f(914, 365);
	glVertex2f(915, 375);
	glVertex2f(915, 385);
	glEnd();


	//left palm
	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);
	glVertex2f(914, 349);
	glVertex2f(910, 331);
	glVertex2f(904, 336);
	glVertex2f(900, 341);
	glVertex2f(908, 348);
	glEnd();

	//ryt palm
	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);
	glVertex2f(811, 433);
	glVertex2f(821, 436);
	glVertex2f(821, 442);
	glVertex2f(824, 453);
	glVertex2f(824, 458);
	glVertex2f(815, 460);
	glVertex2f(808, 454);
	glVertex2f(807, 445);
	glVertex2f(811, 431);
	glEnd();


	//finger
	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);
	glVertex2f(823, 458);
	glVertex2f(818, 457);
	glVertex2f(817, 472);
	glVertex2f(821, 472);
	glEnd();

	//rytshoe
	glBegin(GL_POLYGON);
	glColor3f(0.412, 0.412, 0.412);
	glVertex2f(904, 212);
	glVertex2f(917, 213);
	glVertex2f(929, 204);
	glVertex2f(925, 197);
	glVertex2f(903, 204);
	glVertex2f(904, 212);
	glEnd();

	//left shoe
	glBegin(GL_POLYGON);
	glColor3f(0.412, 0.412, 0.412);
	glVertex2f(869, 213);
	glVertex2f(869, 205);
	glVertex2f(853, 198);
	glVertex2f(844, 203);
	glVertex2f(855, 211);
	glVertex2f(855, 214);
	glEnd();
	glPopMatrix();

}



void boy3()
{
	glPushMatrix();
	glScalef(0.5, 0.5, 0);
	glTranslated(x3, 200, 1);
	
	//shirt
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(900, 300);
	glVertex2f(985, 300);
	glVertex2f(985, 380);
	glVertex2f(955, 400);
	glVertex2f(925, 400);
	glVertex2f(900, 380);
	glEnd();
	//sleevw 1
	glColor3f(0, 0, 0.7);
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
	glColor3f(0, 0, 0.7);
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

	//draw hair
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(910, 450);
	glVertex2f(965, 450);
	glVertex2f(965, 485);
	glVertex2f(915, 465);
	//glVertex2f();
	glEnd();
	

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

void text1()
{
	char string1[] = "Can you help ";
		char string2[] = "me with directions";
		char string3[] = "to Home Paradise";

		void *font = GLUT_BITMAP_TIMES_ROMAN_10;
		//********* TEXT ***************
		int i, j;
		void *font1 = GLUT_BITMAP_TIMES_ROMAN_10;
		glColor3f(0.0, 0, 0.0);


		glRasterPos2f(600, 410);
		for (i = 0; i < strlen(string1); i++)
			glutBitmapCharacter(font, string1[i]);

		glRasterPos2f(600, 400);
		for (i = 0; i < strlen(string2); i++)
			glutBitmapCharacter(font, string2[i]);
		glRasterPos2f(600, 390);
		for (i = 0; i < strlen(string3); i++)
			glutBitmapCharacter(font, string3[i]);

}

void text2()
{
	char string1[] = "Go straight ";
	char string2[] = "Take right";
	char string3[] = "Take left";

	void *font = GLUT_BITMAP_TIMES_ROMAN_10;
	//********* TEXT ***************
	int i, j;
	void *font1 = GLUT_BITMAP_TIMES_ROMAN_10;
	glColor3f(0.0, 0, 0.0);


	glRasterPos2f(875, 410);
	for (i = 0; i < strlen(string1); i++)
		glutBitmapCharacter(font, string1[i]);

	glRasterPos2f(875, 400);
	for (i = 0; i < strlen(string2); i++)
		glutBitmapCharacter(font, string2[i]);
	glRasterPos2f(875, 390);
	for (i = 0; i < strlen(string3); i++)
		glutBitmapCharacter(font, string3[i]);

}

void text3()
{
	char string1[] = "Thanks to Urmaps ";
	char string2[] = "I have reached";
	char string3[] = "my destination";

	void *font = GLUT_BITMAP_TIMES_ROMAN_10;
	//********* TEXT ***************
	int i, j;
	void *font1 = GLUT_BITMAP_TIMES_ROMAN_10;
	glColor3f(0.0, 0, 0.0);


	glRasterPos2f(520, 270);
	for (i = 0; i < strlen(string1); i++)
		glutBitmapCharacter(font, string1[i]);

	glRasterPos2f(520, 260);
	for (i = 0; i < strlen(string2); i++)
		glutBitmapCharacter(font, string2[i]);
	glRasterPos2f(520, 250);
	for (i = 0; i < strlen(string3); i++)
		glutBitmapCharacter(font, string3[i]);

}

void text4()
{
	char string1[] = "Take UTurn and go straight ";
	char string2[] = "Take right";
	char string3[] = "Take next left";

	void *font = GLUT_BITMAP_TIMES_ROMAN_10;
	//********* TEXT ***************
	int i, j;
	void *font1 = GLUT_BITMAP_TIMES_ROMAN_10;
	glColor3f(0.0, 0, 0.0);


	glRasterPos2f(800, 470);
	for (i = 0; i < strlen(string1); i++)
		glutBitmapCharacter(font, string1[i]);

	glRasterPos2f(800, 460);
	for (i = 0; i < strlen(string2); i++)
		glutBitmapCharacter(font, string2[i]);
	glRasterPos2f(800, 450);
	for (i = 0; i < strlen(string3); i++)
		glutBitmapCharacter(font, string3[i]);

}

void text5()
{
	char string1[] = "Can you help ";
	char string2[] = "me with directions";
	char string3[] = "to Home Paradise";

	void *font = GLUT_BITMAP_TIMES_ROMAN_10;
	//********* TEXT ***************
	int i, j;
	void *font1 = GLUT_BITMAP_TIMES_ROMAN_10;
	glColor3f(0.0, 0, 0.0);


	glRasterPos2f(460, 450);
	for (i = 0; i < strlen(string1); i++)
		glutBitmapCharacter(font, string1[i]);

	glRasterPos2f(460, 440);
	for (i = 0; i < strlen(string2); i++)
		glutBitmapCharacter(font, string2[i]);
	glRasterPos2f(460, 430);
	for (i = 0; i < strlen(string3); i++)
		glutBitmapCharacter(font, string3[i]);

}

void text6()
{
	char string1[] = "OH NO! Not Again ";
	char string2[] = "Time to use";
	char string3[] = "this new app URMAPS";

	void *font = GLUT_BITMAP_TIMES_ROMAN_10;
	//********* TEXT ***************
	int i, j;
	void *font1 = GLUT_BITMAP_TIMES_ROMAN_10;
	glColor3f(0.0, 0, 0.0);


	glRasterPos2f(610, 270);
	for (i = 0; i < strlen(string1); i++)
		glutBitmapCharacter(font, string1[i]);

	glRasterPos2f(610, 260);
	for (i = 0; i < strlen(string2); i++)
		glutBitmapCharacter(font, string2[i]);
	glRasterPos2f(610, 250);
	for (i = 0; i < strlen(string3); i++)
		glutBitmapCharacter(font, string3[i]);

}

void text7()
{
	char string1[] = "Your";
	char string2[] = "Maps";

	void *font = GLUT_BITMAP_TIMES_ROMAN_10;
	//********* TEXT ***************
	int i, j;
	void *font1 = GLUT_BITMAP_TIMES_ROMAN_10;
	glColor3f(1.0, 1.0, 1.0);


	glRasterPos2f(675, 200);
	for (i = 0; i < strlen(string1); i++)
		glutBitmapCharacter(font, string1[i]);

	glRasterPos2f(675, 180);
	for (i = 0; i < strlen(string2); i++)
		glutBitmapCharacter(font, string2[i]);

}

void text8()
{
	char string1[] = " UrMaps says ";
	char string2[] = "Go Straight";
	char string3[] = "Take last left";

	void *font = GLUT_BITMAP_TIMES_ROMAN_10;
	//********* TEXT ***************
	int i, j;
	void *font1 = GLUT_BITMAP_TIMES_ROMAN_10;
	glColor3f(0.0, 0, 0.0);


	glRasterPos2f(800, 320);
	for (i = 0; i < strlen(string1); i++)
		glutBitmapCharacter(font, string1[i]);

	glRasterPos2f(800, 310);
	for (i = 0; i < strlen(string2); i++)
		glutBitmapCharacter(font, string2[i]);
	glRasterPos2f(800, 300);
	for (i = 0; i < strlen(string3); i++)
		glutBitmapCharacter(font, string3[i]);

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

void drawCloud(int x, int y,int option)
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
	if(option==1)
		text1();
	if (option == 2)
		text2();
	if (option == 3)
		text3();
	if (option == 4)
		text4();
	if (option == 5)
		text5();
	if (option == 6)
		text6();
	if (option == 7)
		text7();
	if (option == 8)
		text8();
	   
}


void display3(int cloud)
{


	road3();
	glPushMatrix();
	glTranslatef(0, 130, 0);
	home3();
	glPopMatrix();

	glPushMatrix();
	text();
	glPopMatrix();

	tree2d();
	tree1d();
	teacher3();
	if (cloud !=3) //when bus moves boy sits inside
	{
		boy3();
	}
	glPushMatrix();
	glTranslatef(100, -200, 0);
	bus3();
	glPopMatrix();
	if (cloud == 1)
		drawCloud(650, 400, 1);
	if (cloud == 2)
		drawCloud(900, 400, 2);

	glFlush();
	glutSwapBuffers();
}



void myKeyboard3(unsigned char key, int a, int b)
{
	if (key == 98)       //ascii value of b for boy
	{
		x3 = x3 + 20;
		display3(0);
	}

	if (key == 109)       //ascii value of m for bus
	{
		x32 = x32 + 20;
		display3(3);
	}

	if (key == 120)
	{
		display3(1);
	}

	if (key == 99)
	{
		display3(2);
	}

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


	
}



void frame3(void)
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
	teacher3();
	boy3();
	glutKeyboardFunc(myKeyboard3);//for animation
	glPushMatrix();
	glTranslatef(100, -200, 0);
	bus3();
	glPopMatrix();
	//drawCloud(500, 250);

	glFlush();


}
