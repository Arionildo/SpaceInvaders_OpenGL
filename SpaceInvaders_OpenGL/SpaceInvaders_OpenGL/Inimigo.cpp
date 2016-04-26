#pragma once
#include "Inimigo.h"
#include "Nave.h"
#include <ctime>
#include <cstdlib>

Inimigo::Inimigo()
{
	setPosicaoX(0);
	setPosicaoY(4.5);
	setSentidoX(0);
	setSentidoY(0);
	setTamanho(0.5);
}

void Inimigo::Movimentacao()
{
	srand(time(NULL));
	aux_random = rand() % 2;

	if (aux_random == 0)
	{
		 deslocamento = 0.0002;
		 setPosicaoX(deslocamento);
	}

	else
	{
		deslocamento = -0.0002;
		setPosicaoX(deslocamento);
	}
	setPosicaoY(-0.0003);

}

void Inimigo::Desenha()
{	
	Movimentacao();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(-getTamanho() + getPosicaoX(), -getTamanho() + getPosicaoY()); //Inferior Esquerdo
	glVertex2f(-getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY()); //Superior Esquerdo
	glVertex2f(getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY());  //Superior Direito
	glVertex2f(getTamanho() + getPosicaoX(), -getTamanho() + getPosicaoY());  //Inferior Direito
	glEnd();
}