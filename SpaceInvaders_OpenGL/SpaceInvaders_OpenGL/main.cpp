/**
	Space Invaders
	Remake of Space Invaders (1980) for Atari 2600 using OpenGL
	
	@author		Arionildo Escouto e Leonardo Schmitt
	@version	1.0 12/04/16
*/
#include "GL\glew.h"
#include "GL\freeglut.h"
#include "Inimigo.h"

Inimigo inimigo;

void DesenhaCena() {
	// Limpa a janela com a cor especificada como cor de fundo
	glClear(GL_COLOR_BUFFER_BIT);

	inimigo.Desenha();

	glutSwapBuffers();
}

void Visualizacao() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	///Params
	///xMin, xMax, yMin, yMax;
	gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
}

void Inicio() {
	glClearColor(1.0, 1.0, 0.0, 1.0);
	Visualizacao();
}

int main(int argc, char **argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(250, 50);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Space Invaders");

	glutDisplayFunc(DesenhaCena);
	Inicio();

	// Dispara a "maquina de estados" de OpenGL
	glutMainLoop();
}