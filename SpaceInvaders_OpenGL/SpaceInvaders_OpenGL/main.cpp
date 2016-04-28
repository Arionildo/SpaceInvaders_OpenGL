/**
	Space Invaders
	Remake of Space Invaders (1980) for Atari 2600 using OpenGL
	
	@author		Arionildo Escouto e Leonardo Schmitt
	@version	1.0 28/04/16
*/
#include "Inimigo.h"
#include "Jogador.h"
#include "EstadosJogo.h"
#include "TelaJogo.h"
#include "Tiro.h"
#include <iostream>
#include <stdio.h>
using namespace std;

Inimigo inimigo;
Jogador jogador;
Tiro tiroPlayer;
Tiro tiroInimigo;
EstadosJogo estadosJogo;
TelaJogo telaJogo;


void ComandosJogador(int tecla, int x, int y) {
	//if e else encadeados para testar a variavel tecla
	
	if (estadosJogo.getJogo())
	{
		if (tecla == GLUT_KEY_RIGHT) {
			jogador.setPosicaoX(0.3f);
		}
		else if (tecla == GLUT_KEY_LEFT) {
			jogador.setPosicaoX(-0.3f);
		}

		if ((tecla == GLUT_KEY_UP) && tiroPlayer.getAtirando() == false) {
			tiroPlayer.setAtirando(true);
			tiroPlayer.CriarTiro(jogador);
		}
	}
	
	else if (estadosJogo.getMenuAtivo() || estadosJogo.getOverAtivo())
	{
		if (tecla == GLUT_KEY_F1) 
		{
			if (estadosJogo.getAuxMenu() == 1)
			{
				estadosJogo.setJogo(true);
				estadosJogo.setOverAtivo(false);
				estadosJogo.setMenuAtivo(false);
				jogador.setVida(4);
				inimigo.setPosicaoY();
				tiroPlayer.setPontos(0);
				estadosJogo.setAuxMenu(1);
			}

			else
			{
				estadosJogo.setSairJogo(true);
			}
		}
		else if (tecla == GLUT_KEY_DOWN) 
		{
			if (estadosJogo.getAuxMenu() == 1)
			{
				estadosJogo.setAuxMenu(0);
			}

			else
			{
				estadosJogo.setAuxMenu(1);
			}
		}

		if ((tecla == GLUT_KEY_UP) && tiroPlayer.getAtirando() == false) 
		{
			if (estadosJogo.getAuxMenu() == 0)
			{
				estadosJogo.setAuxMenu(1);
			}

			else
			{
				estadosJogo.setAuxMenu(0);
			}
		}
	}
	
	//função que solicita o redesenho da DesenhaCena, incorporando as modificações de variáveis
	glutPostRedisplay();
}

void DesenhaCena() {
	// Limpa a janela com a cor especificada como cor de fundo
	glClear(GL_COLOR_BUFFER_BIT);

	if (estadosJogo.getJogo())
	{
		if (inimigo.getAtirando() && tiroInimigo.getAtirando() == false) {
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

		telaJogo.DesenhaTexto(tiroPlayer);

		if (jogador.getVida() <= 0)
		{
			estadosJogo.setOverAtivo(true);
			estadosJogo.setJogo(false);
		}
	}
	
		if (estadosJogo.getMenuAtivo())
	{
		estadosJogo.menu();
	}

	else if (estadosJogo.getOverAtivo())
	{
		estadosJogo.gameOver();
	}

		 if (estadosJogo.getSairJogo())
	{
		exit(0);
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

/**
	CHANGELOG
		28/04/16: Version 1.0;
		12/04/16: Version 0.1;
*/