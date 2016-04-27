#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include "Nave.h"
#include <ctime>
#include <cstdlib>
#include <iostream>


#ifndef INIMIGO_H_INCLUDED
#define INIMIGO_H_INCLUDED

class Inimigo : public Nave
{
private:
	int auxRand, auxMovimentacao;
	float deslocamento, temporizador, posicaoRand;
	static bool reset;
	bool limite_mapa;
	
	

public:
	Inimigo();
	void Desenha() override;
	void Movimentacao();
	void Spawn(bool &colidiu);
};
#endif // ! INIMIGO_H_INCLUDED