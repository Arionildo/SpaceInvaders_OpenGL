#pragma once
#include "Tiro.h"

Tiro::Tiro()
{
	setPosicaoX(0);
	setPosicaoY(0);
}

void Tiro::Desenha()
{
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-0.1 + getPosicaoX(), -0.2 + getPosicaoY()); //Inferior Esquerdo
	glVertex2f(-0.1 + getPosicaoX(), 0.2 + getPosicaoY()); //Superior Esquerdo
	glVertex2f(0.1 + getPosicaoX(), 0.2 + getPosicaoY());  //Superior Direito
	glVertex2f(0.1 + getPosicaoX(), -0.2 + getPosicaoY());  //Inferior Direito
	glEnd();

	setPosicaoY(getPosicaoY() + 0.01);
}

//Getters e Setters
float Tiro::getPosicaoX() {
	return posicaoX;
}

float Tiro::getPosicaoY() {
	return posicaoY;
}

void Tiro::setPosicaoX(float tx) {
	posicaoX = tx;
}

void Tiro::setPosicaoY(float ty) {
	posicaoY = ty;
}

bool Tiro::getAtirando()
{
	return atirando;
}

void Tiro::setAtirando(bool status) {
	atirando = status;
}