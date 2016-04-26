#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include "Nave.h"


#ifndef INIMIGO_H_INCLUDED
#define INIMIGO_H_INCLUDED

class Inimigo : public Nave
{
public:
	using Nave::Desenha;

	Inimigo();
	void Desenha() override;
};
#endif // ! INIMIGO_H_INCLUDED