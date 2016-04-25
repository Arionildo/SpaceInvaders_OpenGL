#pragma once
#include <iostream>
using namespace std;

class Personagem
{
private:
	float posicaoX, posicaoY;
	float sentidoX, sentidoY;
public:
	Personagem();

	void Desenha();

	//Getters e Setters
	float getPosicaoX();

	float getPosicaoY();

	void Personagem::setPosicaoX(float tx);

	void setPosicaoY(float ty);

	float getSentidoX();

	float getSentidoY();

	void setSentidoX(float sx);

	void setSentidoY(float sy);
};

