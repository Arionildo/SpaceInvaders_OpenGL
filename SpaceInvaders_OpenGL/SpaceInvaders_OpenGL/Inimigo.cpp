#pragma once
#include "Inimigo.h"
#include "Nave.h"

Inimigo::Inimigo()
{
	setPosicaoX(0);
	setPosicaoY(4.5);
	setSentidoX(0);
	setSentidoY(0);
	setTamanho(0.5);
}

void Inimigo::Desenha()
{
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(-getTamanho() + getPosicaoX(), -getTamanho() + getPosicaoY()); //Inferior Esquerdo
	glVertex2f(-getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY()); //Superior Esquerdo
	glVertex2f(getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY());  //Superior Direito
	glVertex2f(getTamanho() + getPosicaoX(), -getTamanho() + getPosicaoY());  //Inferior Direito
	glEnd();
}