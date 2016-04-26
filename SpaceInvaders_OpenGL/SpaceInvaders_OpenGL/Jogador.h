#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include "Nave.h"

#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED

class Jogador : public Nave
{	
public:
	Jogador();
	void Desenha() override;
};
#endif // ! JOGADOR_H_INCLUDED