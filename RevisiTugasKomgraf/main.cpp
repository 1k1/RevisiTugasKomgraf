#include <GL/glut.h>

int SIZE_W = 800;
int SIZE_H = 600;
int POS_X = 0;
int POS_Y = 0;
char* TITLE  = "REVISI TUGAS KOMGRAF KELOMPOK AHMAD KOSASIH";

void display(void) {
	glClear (GL_COLOR_BUFFER_BIT);  /* clear all pixels */
	/* draw white polygon with corners at (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0) */
	glColor3f (1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f (0.25, 0.25, 0.0);
	glVertex3f (0.75, 0.25, 0.0);
	glVertex3f (0.75, 0.75, 0.0);
	glVertex3f (0.25, 0.75, 0.0);
	glEnd();
	glFlush ();
}

void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);  /* select clearing color */
	glMatrixMode(GL_PROJECTION);  /* initialize viewing values */
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) 
	{
		case 27:  /* ASCII code of the ESC key */
		exit(0);
		break;
	}
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(SIZE_W, SIZE_H);
	glutInitWindowPosition(POS_X, POS_Y);
	glutCreateWindow(TITLE);
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}