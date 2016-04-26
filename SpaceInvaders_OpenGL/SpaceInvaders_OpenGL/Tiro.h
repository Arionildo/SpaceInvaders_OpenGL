#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"

class Tiro
{
private:
	float posicaoX, posicaoY;
	bool atirando;
public:
	Tiro();

	void Desenha();

	//Getters e Setters
	float getPosicaoX();

	float getPosicaoY();

	void setPosicaoX(float tx);

	void setPosicaoY(float ty);

	bool getAtirando();
	
	void setAtirando(bool status);
};

