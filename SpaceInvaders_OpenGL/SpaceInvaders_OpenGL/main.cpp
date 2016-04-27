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
Tiro tiroPlayer;
Tiro tiroInimigo;
//bool playerAtirando;
//bool inimigoAtirando;

void ComandosJogador(int tecla, int x, int y) {
	//if e else encadeados para testar a variavel tecla
	if (tecla == GLUT_KEY_RIGHT) {
		jogador.setPosicaoX(0.2f);
	} else if (tecla == GLUT_KEY_LEFT) {
		jogador.setPosicaoX(-0.2f);
	}

	if ((tecla == GLUT_KEY_UP) && tiroPlayer.getAtirando() == false) {
		tiroPlayer.setAtirando(true);
		tiroPlayer.CriarTiro(jogador);
	}
	
	//função que solicita o redesenho da DesenhaCena, incorporando as modificações de variáveis
	glutPostRedisplay();
}

void DesenhaCena() {
	// Limpa a janela com a cor especificada como cor de fundo
	glClear(GL_COLOR_BUFFER_BIT);

	if (inimigo.getAtirando()) {
		tiroInimigo.setAtirando(true);
		tiroInimigo.CriarTiro(inimigo);
	}
		
	if (tiroPlayer.getAtirando()) {
		tiroPlayer.setPlayerAtirando(true);
		tiroPlayer.setInimigoAtirando(false);
		tiroPlayer.Desenha();
	}
	
	if (tiroInimigo.getAtirando()) {
		tiroInimigo.setInimigoAtirando(true);
		tiroInimigo.setPlayerAtirando(false);
		tiroInimigo.Desenha();
	}

	//instancia do tiro do player
	tiroPlayer.Colisao(inimigo, jogador);
	
	//instancia do tiro do inimigo
	tiroInimigo.Colisao(inimigo, jogador);
	
	//colisao da nave inimiga com a do jogador
	jogador.Colisao(inimigo);
	
	
	inimigo.Desenha();
	jogador.Desenha();

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
	glClearColor(0.0, 0.0, 0.0, 0.0);
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