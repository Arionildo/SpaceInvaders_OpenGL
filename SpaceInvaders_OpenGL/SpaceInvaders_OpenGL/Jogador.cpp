#pragma once
#include "Jogador.h"
#include "Nave.h"

Jogador::Jogador()
{
	setPosicaoX(0);
	setPosicaoY(0);
	setSentidoX(0);
	setSentidoY(0);
}

void Jogador::Desenha() {
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-0.5 + getPosicaoX(), -5.0 + getPosicaoY()); //Inferior Esquerdo
	glVertex2f(-0.5 + getPosicaoX(), -4.0 + getPosicaoY());	//Superior Esquerdo
	glVertex2f(0.5 + getPosicaoX(), -4.0 + getPosicaoY());	//Superior Direito
	glVertex2f(0.5 + getPosicaoX(), -5.0 + getPosicaoY());	//Inferior Direito
	glEnd();
}