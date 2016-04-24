#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"

#ifndef INIMIGO_H_INCLUDED
#define INIMIGO_H_INCLUDED

class Inimigo
{
private:
	float posicaoX, posicaoY;
	float sentidoX, sentidoY;
	
public:
	Inimigo();

	~Inimigo();

	void Desenha() {
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(-0.5 + posicaoX,  5.0 + posicaoY);
		glVertex2f(-0.5 + posicaoX, 4.0 + posicaoY);
		glVertex2f(0.5 + posicaoX, 4.0 + posicaoY);
		glVertex2f(0.5 + posicaoX, 5.0 + posicaoY);
		glEnd();
	}

	//Getters e Setters
	float getPosicaoX() {
		return this->posicaoX;
	}

	float getPosicaoY() {
		return this->posicaoY;
	}

	void setTransXQ1(float tx) {
		posicaoX += tx;
	}

	void setTransYQ1(float ty) {
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
#endif // ! INIMIGO_H_INCLUDED