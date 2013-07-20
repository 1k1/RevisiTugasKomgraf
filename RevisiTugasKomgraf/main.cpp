#include <GL/glut.h>

void display() 
{

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Revisi Tugas Komgraf Kelompok Ahmad Kosasih");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}