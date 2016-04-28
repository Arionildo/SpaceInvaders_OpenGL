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
	float deslocamento, temporizador, posicaoRand, timer;
	static bool reset;
	bool limite_mapa, atirando;
	
	

public:
	Inimigo();
	void Desenha() override;
	void MovimentacaoAcao();
	void Spawn(bool &colidiu);
	
	//get and set pro atirando
	void setAtirando(bool &_atirando);
	bool getAtirando();
};
#endif // ! INIMIGO_H_INCLUDED