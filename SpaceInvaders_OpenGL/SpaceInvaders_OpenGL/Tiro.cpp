#pragma once
#include "Tiro.h"

Tiro::Tiro()
{
	setPosicaoX(0);
	setPosicaoY(0);
	setTamanho(0.1);
}

void Tiro::Desenha()
{
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-getTamanho() + getPosicaoX(), -getTamanho() + getPosicaoY()); //Inferior Esquerdo
	glVertex2f(-getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY()); //Superior Esquerdo
	glVertex2f(getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY());  //Superior Direito
	glVertex2f(getTamanho() + getPosicaoX(), -getTamanho() + getPosicaoY());  //Inferior Direito
	glEnd();

	setPosicaoY(getPosicaoY() + 0.01);

	if (isDistante()) setAtirando(false);
}

bool Tiro::isDistante() {
	return  getPosicaoX() > 5.0 || getPosicaoX() < -5.0 ||
			getPosicaoY() > 5.0 || getPosicaoY() < -5.0;
}

void Tiro::CriarTiro(Nave nave) {
	setPosicaoX(nave.getPosicaoX());
	setPosicaoY(nave.getPosicaoY());
}

//Getters e Setters
float Tiro::getTamanho()
{
	return tamanho;
}

void Tiro::setTamanho(float t)
{
	tamanho = t;
}

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