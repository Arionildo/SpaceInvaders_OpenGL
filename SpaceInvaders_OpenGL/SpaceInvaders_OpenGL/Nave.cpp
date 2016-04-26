#include "Nave.h"

float posicaoX, posicaoY;
float sentidoX, sentidoY;
float tamanho;

Nave::Nave() {
}

void Nave::Desenha() {
}

float Nave::getTamanho()
{
	return tamanho;
}

void Nave::setTamanho(float t)
{
	tamanho = t;
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

void Nave::ResetPosicaoY() {
	posicaoY = 4.5;
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