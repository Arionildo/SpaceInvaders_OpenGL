/**
	Space Invaders
	Remake of Space Invaders (1980) for Atari 2600 using OpenGL
	
	@author		Arionildo Escouto e Leonardo Schmitt
	@version	1.0 12/04/16
*/
#include "GL\glew.h"
#include "GL\freeglut.h"

int main(int argc, char **argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(250, 50);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Space Invaders");
	glutFullScreen();

	// Dispara a "maquina de estados" de OpenGL
	glutMainLoop();
}