#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"

#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED

class Jogador
{
private:
	float posicaoX, posicaoY;
	float sentidoX, sentidoY;

public:
	Jogador();
	~Jogador();

	void Desenha() {
		glColor3f(0.0, 0.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(-0.5 + posicaoX, -5.0 + posicaoY);
		glVertex2f(-0.5 + posicaoX, -4.0 + posicaoY);
		glVertex2f(0.5 + posicaoX, -4.0 + posicaoY);
		glVertex2f(0.5 + posicaoX, -5.0 + posicaoY);
		glEnd();
	}

	//Getters e Setters
	float getPosicaoX() {
		return this->posicaoX;
	}

	float getPosicaoY() {
		return this->posicaoY;
	}

	void setPosicaoX(float tx) {
		posicaoX += tx;
	}

	void setPosicaoY(float ty) {
		posicaoY += ty;
	}

	float getSentidoX() {
		return this->sentidoX;
	}

	float getSentidoY() {
		return this->sentidoY;
	}

	void setSentidoX(float sx) {
		sentidoX *= sx;
	}

	void setSentidoY(float sy) {
		sentidoY *= sy;
	}
};
#endif // ! JOGADOR_H_INCLUDED