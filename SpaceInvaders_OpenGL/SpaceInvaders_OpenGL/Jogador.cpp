#pragma once
#include "Jogador.h"
#include "Nave.h"

Jogador::Jogador()
{
	setPosicaoX(0);
	setPosicaoY(-4.5);
	setSentidoX(0);
	setSentidoY(0);
	setTamanho(0.5);
}

void Jogador::Desenha() {
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-getTamanho() + getPosicaoX(), -getTamanho() +getPosicaoY()); //Inferior Esquerdo
	glVertex2f(-getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY());	//Superior Esquerdo
	glVertex2f(getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY());	//Superior Direito
	glVertex2f(getTamanho() + getPosicaoX(), -getTamanho() + getPosicaoY());	//Inferior Direito
	glEnd();
}