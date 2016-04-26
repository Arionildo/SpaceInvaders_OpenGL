#pragma once
#include <iostream>
using namespace std;

class Nave
{
private:
	float posicaoX, posicaoY;
	float sentidoX, sentidoY;
public:
	Nave();

	virtual void Desenha();

	//Getters e Setters
	float getPosicaoX();

	float getPosicaoY();

	void setPosicaoX(float tx);

	void setPosicaoY(float ty);

	float getSentidoX();

	float getSentidoY();

	void setSentidoX(float sx);

	void setSentidoY(float sy);
};

