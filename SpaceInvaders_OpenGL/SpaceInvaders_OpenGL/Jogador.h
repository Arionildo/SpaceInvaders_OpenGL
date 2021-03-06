#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include <iostream>
#include <stdio.h>
#include "Nave.h"
#include "Inimigo.h"


#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED

class Jogador : public Nave
{	
private:
	bool colidiu, perdeVida;
	float temporizador;

public:
	Jogador();
	void Desenha() override;
	void Colisao(Inimigo &inimigo);

};
#endif // ! JOGADOR_H_INCLUDED