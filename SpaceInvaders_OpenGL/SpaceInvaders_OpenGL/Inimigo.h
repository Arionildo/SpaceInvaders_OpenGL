#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include "Nave.h"

#ifndef INIMIGO_H_INCLUDED
#define INIMIGO_H_INCLUDED

class Inimigo : public Nave
{
private:
	int aux_random;
	float deslocamento;

public:
	Inimigo();
	void Desenha() override;
	void Movimentacao();
};
#endif // ! INIMIGO_H_INCLUDED