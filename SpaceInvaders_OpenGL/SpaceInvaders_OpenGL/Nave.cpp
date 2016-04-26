#include "Nave.h"

float posicaoX, posicaoY;
float sentidoX, sentidoY;

Nave::Nave() {
}

void Nave::Desenha() {
}

//Getters e Setters
float Nave::getPosicaoX() {
	return posicaoX;
}

float Nave::getPosicaoY() {
	return posicaoY;
}

void Nave::setPosicaoX(float tx) {
	posicaoX += tx;
}

void Nave::setPosicaoY(float ty) {
	posicaoY += ty;
}

float Nave::getSentidoX() {
	return sentidoX;
}

float Nave::getSentidoY() {
	return sentidoY;
}

void Nave::setSentidoX(float sx) {
	sentidoX *= sx;
}

void Nave::setSentidoY(float sy) {
	sentidoY *= sy;
}