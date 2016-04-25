#include "Jogador.h"
#include "Personagem.h"

float posicaoX, posicaoY;
float sentidoX, sentidoY;

Jogador::Jogador()
{
}

void Personagem::Desenha() {
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-0.5 + posicaoX, 5.0 + posicaoY);
	glVertex2f(-0.5 + posicaoX, 4.0 + posicaoY);
	glVertex2f(0.5 + posicaoX, 4.0 + posicaoY);
	glVertex2f(0.5 + posicaoX, 5.0 + posicaoY);
	glEnd();
}