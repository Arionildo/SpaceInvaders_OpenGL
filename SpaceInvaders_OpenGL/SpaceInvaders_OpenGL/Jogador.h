#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include "Nave.h"
#include "Inimigo.h"

#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED

class Jogador : public Nave
{	
public:
	Jogador();
	void Desenha() override;
	void colisao(Inimigo &inimigo);

};
#endif // ! JOGADOR_H_INCLUDED