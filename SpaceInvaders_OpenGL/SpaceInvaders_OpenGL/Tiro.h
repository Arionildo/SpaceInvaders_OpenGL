#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include "Nave.h"

class Tiro
{
private:
	float posicaoX, posicaoY;
	float tamanho;
	bool atirando;
public:
	Tiro();

	void Desenha();

	void CriarTiro(Nave nave);

	bool isDistante();

	//Getters e Setters
	float getTamanho();

	void setTamanho(float t);

	float getPosicaoX();

	float getPosicaoY();

	void setPosicaoX(float tx);

	void setPosicaoY(float ty);

	bool getAtirando();
	
	void setAtirando(bool status);
};

