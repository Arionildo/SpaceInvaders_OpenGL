#pragma once
#include "Tiro.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

Tiro::Tiro()
{
	setPosicaoX(0);
	setPosicaoY(0);
	setTamanho(0.1);	
}

void Tiro::colisao(Inimigo &inimigo)
{	
	srand(time(NULL));
	aux_rand = rand() % 2;
	
	if (aux_rand == 0)
	{
		srand(time(NULL));
		aux_rand = rand() % 10 + 1;
	}
	
	else
	{
		srand(time(NULL));
		aux_rand = (rand() % 10 + 1) - 11;
	}
	
	if (-inimigo.getTamanho() + inimigo.getPosicaoX() <= getTamanho() + getPosicaoX() &&
		inimigo.getTamanho() + inimigo.getPosicaoX() >= -getTamanho() + getPosicaoX() &&
		-inimigo.getTamanho() + inimigo.getPosicaoY() <= getTamanho() + getPosicaoY() &&
		getAtirando() == true ||
		inimigo.getPosicaoY() < -5)
	{		
		inimigo.setTamanho(0.0);
		setAtirando(false);
		posicaoRand = (float)aux_rand / 10;
		colidiu = true;
	}

	if (colidiu == true)
	{
		temporizador += 1;
	}

	if (temporizador > 1500.0)
	{
		temporizador = 0.0;
		colidiu = false;
		inimigo.setPosicaoX(posicaoRand);
		inimigo.ResetPosicaoY();
		inimigo.setTamanho(0.5);
	}
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

	setPosicaoY(getPosicaoY() + 0.003);

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