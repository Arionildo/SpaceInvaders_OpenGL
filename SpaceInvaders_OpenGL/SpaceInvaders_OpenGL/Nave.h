#pragma once

class Nave
{
private:
	float posicaoX, posicaoY;
	float sentidoX, sentidoY;
	float tamanho;
public:
	Nave();

	virtual void Desenha();

	//Getters e Setters
	float getTamanho();

	void setTamanho(float t);

	float getPosicaoX();

	float getPosicaoY();

	void setPosicaoX(float tx);

	void setPosicaoY(float ty);
	void ResetPosicaoY();

	float getSentidoX();

	float getSentidoY();

	void setSentidoX(float sx);

	void setSentidoY(float sy);
};

