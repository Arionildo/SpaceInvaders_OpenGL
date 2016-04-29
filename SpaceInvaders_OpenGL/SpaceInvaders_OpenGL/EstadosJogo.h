/**
	@author		Leonardo Schmitt
	@version	1.0 28/04/16
*/
#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include<iostream>
#include <string>

using namespace std;

class EstadosJogo
{
private:
	string novoJogo, sairJogo, continuar, tituloJogo, setaSelecao, _gameOver;
	bool menuAtivo, over, jogo, saiu;
	int aux;

public:
	EstadosJogo();
	void Texto(const char *text, int length, int x, int y);
	void Titulo(const char *text, int length, int x, int y);
	void menu();
	void gameOver();
	
	//get ~ set
	bool getMenuAtivo();
	void setMenuAtivo(bool menu);

	bool getOverAtivo();
	void setOverAtivo(bool pause);

	bool getSairJogo();
	void setSairJogo(bool _sair);
	
	bool getJogo();
	void setJogo(bool sair);

	int getAuxMenu();
	void setAuxMenu(int _aux);
};

