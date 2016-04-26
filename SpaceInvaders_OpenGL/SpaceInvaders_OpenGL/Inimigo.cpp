#pragma once
#include "Inimigo.h"
#include "Nave.h"

Inimigo::Inimigo()
{
	setPosicaoX(0);
	setPosicaoY(0);
	setSentidoX(0);
	setSentidoY(0);
}

void Inimigo::Desenha()
{
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(-0.5 + getPosicaoX(), 5.0 + getPosicaoY());
	glVertex2f(-0.5 + getPosicaoX(), 4.0 + getPosicaoY());
	glVertex2f(0.5 + getPosicaoX(), 4.0 + getPosicaoY());
	glVertex2f(0.5 + getPosicaoX(), 5.0 + getPosicaoY());
	glEnd();
}