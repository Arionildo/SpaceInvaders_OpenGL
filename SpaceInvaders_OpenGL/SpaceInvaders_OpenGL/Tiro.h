#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include "Nave.h"
#include "Inimigo.h"
#include "Jogador.h"

class Tiro
{
private:
	float posicaoX, posicaoY;
	float tamanho;
	float posicaoRand;
	float temporizador;
	float velocidade;
	int aux_rand;
	bool atirando, colidiu, _playerAtirando, _inimigoAtirando;
public:
	Tiro();

	void Desenha();

	void Colisao(Inimigo &inimigo, Jogador &jogador);

	void CriarTiro(Nave nave);

	bool isDistante();

	//Getters e Setters
	void setInimigoAtirando(bool inimigo);
	bool getInimigoAtirando();

	void setPlayerAtirando(bool player);

	float getTamanho();

	void setTamanho(float t);

	float getPosicaoX();

	float getPosicaoY();

	void setPosicaoX(float tx);

	void setPosicaoY(float ty);

	bool getAtirando();
	
	void setAtirando(bool status);
};

