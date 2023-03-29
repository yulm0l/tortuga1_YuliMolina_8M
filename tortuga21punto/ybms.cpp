#include<gl/glut.h>
void DibujarPoligonos()
//{patita de atras
{	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(400, 100);
	glVertex2i(380, 140); 
	glVertex2i(298, 100); 
	glEnd();
	glFlush();
	//--------------


	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(298, 100);
	glVertex2i(380, 140);
	glVertex2i(330, 200);
	glVertex2i(298, 202);
	glVertex2i(300, 209);

	glVertex2i(260, 135);
	glEnd();


	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(380, 140);
	glVertex2i(370, 190);
	glVertex2i(330, 200);
	glEnd();



	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(300, 200);
	glVertex2i(260, 135);
	glVertex2i(260, 215);
	glEnd();

	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(280, 125);
	glVertex2i(260, 135);
	glVertex2i(260, 210);
	glVertex2i(230, 215);
	glVertex2i(190, 155);
	glVertex2i(200, 125);
	glEnd();

	//parte del lomo izq
	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(230, 215);
	glVertex2i(370, 190);
	glVertex2i(260, 235);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(260, 235);
	glVertex2i(185, 320);
	glVertex2i(230, 215);
	glEnd();
	//la otra pata
	glColor3f(0.0, 0.1, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(225, 230);
	glVertex2i(200, 285);
	glVertex2i(192, 225);
	glEnd();
	glColor3f(0.0, 0.1, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(200, 285);
	glVertex2i(190, 280);
	glVertex2i(148, 220);
	glVertex2i(192, 225);

	glEnd();


	//lomo
	glColor3f(0.0, 0.1, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(260, 235);
	glVertex2i(380, 320);
	glVertex2i(280, 440);
	glVertex2i(185, 320);

	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(380, 320);
	glVertex2i(280, 440);
	glVertex2i(460, 500);
	glVertex2i(620, 440);
	glEnd();


	glColor3f(0.1, 1.1, 1.1);
	glBegin(GL_POLYGON);
	glVertex2i(620, 440);
	glVertex2i(370, 190);
	glVertex2i(260, 235);
	glVertex2i(380, 320);
	glEnd();


	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(370, 190);
	glVertex2i(380, 180);
	glVertex2i(450, 180);
	glVertex2i(510, 198);
	glVertex2i(550, 300);
	glVertex2i(500, 295);
	glVertex2i(345, 280);
	//glVertex2i(370, 190);
	//glVertex2i(370, 190);
	glEnd();

	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(605, 295);
	glVertex2i(650, 440);
	glVertex2i(615, 420);
	glVertex2i(620, 440);
	glVertex2i(345, 280);
	glVertex2i(500, 300);
	glEnd();



	glColor3f(1.0, 0.1, 1.1);
	glBegin(GL_POLYGON);
	glVertex2i(625, 265);
	glVertex2i(705, 350);
	glVertex2i(650, 440);
	glVertex2i(605, 295);
	glEnd();

	//cuello
	glColor4f(102.0f / 255.0f, 204.0f / 255.0f, 153.0f / 255.0f, 1.0f);

	glBegin(GL_POLYGON);
	glVertex2i(705, 350);
	glVertex2i(710, 510);
	glVertex2i(650, 440);
	glEnd();
	glColor3f(1.0, 0.6, 1.1);
	glBegin(GL_POLYGON);
	glVertex2i(710, 510);
	glVertex2i(685, 550);
	glVertex2i(642, 600);	
	glVertex2i(650, 440);
	glEnd();
	//cabeza
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(685, 550);
	glVertex2i(802, 560);
	glVertex2i(802, 620);
	glVertex2i(695, 630);
	glVertex2i(642, 600);
	glEnd();


	//glColor3f(1.0, 1.6, 1.1);//blanco
	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(685, 550);
	glVertex2i(710, 510);
	glVertex2i(802, 560);
	glEnd();
	//PATITAS DE ADELANTE

	//glColor3f(1.0, 1.6, 1.1);
	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(600, 150);
	glVertex2i(600, 100);
	glVertex2i(510, 100);
	glEnd();

	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(600, 150);
	glVertex2i(500, 150);
	glVertex2i(510, 100);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(515, 210);
	glVertex2i(600, 150);
	glVertex2i(500, 150);
	glEnd();

	glColor3f(0.0f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(635, 250);
	glVertex2i(600, 150);
	glVertex2i(515, 210);
	glVertex2i(580, 250);
	glEnd();

	glColor4f(102.0f / 255.0f, 204.0f / 255.0f, 153.0f / 255.0f, 1.0f);

	glBegin(GL_POLYGON);
	glVertex2i(550, 300);
	glVertex2i(580, 250);
	glVertex2i(515, 210);
	glEnd();

	//cuad
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(550, 300);
	glVertex2i(580, 250);
	glVertex2i(635, 250);
	glVertex2i(605, 295);
	glEnd();
	//la otra pata de adelante
	glColor4f(102.0f / 255.0f, 204.0f / 255.0f, 153.0f / 255.0f, 1.0f);

	glBegin(GL_POLYGON);
	glVertex2i(625, 230);
	glVertex2i(650, 180);
	glVertex2i(610, 130);
	glVertex2i(600, 150);
	glEnd();
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(650, 180);
	glVertex2i(694, 120);
	glVertex2i(615, 125);
	glVertex2i(610, 135);
	glEnd();
	glFlush();
}
void IniciarConfiguracion() {
	glClearColor(176.0f / 255.0f, 224.0f / 255.0f, 230.0f / 255.0f, 1.0f);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 1000, 0, 800, 1, -1);
}
int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Tortuga-YuliBMS8M");
	glutDisplayFunc(DibujarPoligonos);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}
