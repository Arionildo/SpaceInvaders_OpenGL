#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"

#ifndef INIMIGO_H_INCLUDED
#define INIMIGO_H_INCLUDED

class Inimigo
{
private:
	float transXQ1, transYQ1;
	float sentidoX, sentidoY;
	
public:
	Inimigo();

	~Inimigo();

	void Desenha() {
		glColor3f(0.0, 0.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(-0.5 + transXQ1, -5.0 + transYQ1);
		glVertex2f(-0.5 + transXQ1, -4.0 + transYQ1);
		glVertex2f(0.5 + transXQ1, -4.0 + transYQ1);
		glVertex2f(0.5 + transXQ1, -5.0 + transYQ1);
		glEnd();
	}

	//Getters e Setters
	float getTransXQ1() {
		return this->transXQ1;
	}

	float getTransYQ1() {
		return this->transYQ1;
	}

	void setTransXQ1(float tx) {
		transXQ1 += tx;
	}

	void setTransYQ1(float ty) {
		transYQ1 += ty;
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