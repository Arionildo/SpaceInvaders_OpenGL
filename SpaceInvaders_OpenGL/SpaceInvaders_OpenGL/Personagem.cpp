#include "Personagem.h"

float posicaoX, posicaoY;
float sentidoX, sentidoY;

//Getters e Setters
float getPosicaoX() {
	return posicaoX;
}

float getPosicaoY() {
	return posicaoY;
}

void Personagem::setPosicaoX(float tx) {
	posicaoX += tx;
}

void setPosicaoY(float ty) {
	posicaoY += ty;
}

float getSentidoX() {
	return sentidoX;
}

float getSentidoY() {
	return sentidoY;
}

void setSentidoX(float sx) {
	sentidoX *= sx;
}

void setSentidoY(float sy) {
	sentidoY *= sy;
}