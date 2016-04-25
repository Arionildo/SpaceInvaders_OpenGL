#pragma once
#include "Inimigo.h"
#include "Personagem.h"

float posicaoX, posicaoY;
float sentidoX, sentidoY;

Inimigo::Inimigo()
{
	posicaoX = posicaoY = sentidoX = sentidoY = 0;
}

void Personagem::Desenha() {
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(-0.5 + posicaoX, 5.0 + posicaoY);
	glVertex2f(-0.5 + posicaoX, 4.0 + posicaoY);
	glVertex2f(0.5 + posicaoX, 4.0 + posicaoY);
	glVertex2f(0.5 + posicaoX, 5.0 + posicaoY);
	glEnd();
}