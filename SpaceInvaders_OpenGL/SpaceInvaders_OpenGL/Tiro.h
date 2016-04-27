#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include "Nave.h"
#include "Inimigo.h"

class Tiro
{
private:
	float posicaoX, posicaoY;
	float tamanho;
	float posicaoRand;
	float temporizador;
	int aux_rand;
	bool atirando, colidiu;
public:
	Tiro();

	void Desenha();

	void Colisao(Inimigo &inimigo);

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

