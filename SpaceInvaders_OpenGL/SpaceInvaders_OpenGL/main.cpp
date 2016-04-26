/**
	Space Invaders
	Remake of Space Invaders (1980) for Atari 2600 using OpenGL
	
	@author		Arionildo Escouto e Leonardo Schmitt
	@version	1.0 12/04/16
*/
#include "Inimigo.h"
#include "Jogador.h"
#include "Tiro.h"
#include <iostream>
#include <stdio.h>
using namespace std;

Inimigo inimigo;
Jogador jogador;
Tiro tiro;

void ComandosJogador(int tecla, int x, int y) {
	//if e else encadeados para testar a variavel tecla
	if (tecla == GLUT_KEY_RIGHT) {
		jogador.setPosicaoX(0.1f);
	} else if (tecla == GLUT_KEY_LEFT) {
		jogador.setPosicaoX(-0.1f);
	}
	/*else if (tecla == GLUT_KEY_PAGE_UP) {
		carro.setLibrasNoPneu(0.1f);
	}
	else if (tecla == GLUT_KEY_PAGE_DOWN) {
		carro.setLibrasNoPneu(-0.1f);
	}*/

	if (tecla == GLUT_KEY_F1) {
		tiro.setAtirando(true);
		tiro.setPosicaoY(-0.2);
	}

	//função que solicita o redesenho da DesenhaCena, incorporando as modificações de variáveis
	glutPostRedisplay();
}

void DesenhaCena() {
	// Limpa a janela com a cor especificada como cor de fundo
	glClear(GL_COLOR_BUFFER_BIT);

	inimigo.Desenha();
	jogador.Desenha();

	if (tiro.getAtirando()) {
		tiro.Desenha();
	}

	glutSwapBuffers();
	//função que solicita o redesenho da DesenhaCena, incorporando as modificações de variáveis
	glutPostRedisplay();
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

	glutSpecialFunc(ComandosJogador);
	glutDisplayFunc(DesenhaCena);
	Inicio();

	// Dispara a "maquina de estados" de OpenGL
	glutMainLoop();
}