#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"

#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED

class Jogador
{
private:
	float transXQ1, transYQ1;
	float sentidoX, sentidoY;

public:
	Jogador();
	~Jogador();
};
#endif // ! JOGADOR_H_INCLUDED