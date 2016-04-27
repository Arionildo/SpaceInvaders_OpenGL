#include "Nave.h"

float posicaoX, posicaoY;
float sentidoX, sentidoY;
float tamanho;
float velocidadeMov;
int	Vida;

Nave::Nave() {
}

//Getters e Setters

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

int Nave::getVida()
{
	return Vida;
}

void Nave::setVida(int vida)
{
	Vida = vida;
}

float Nave::getPosicaoX() {
	return posicaoX;
}

float Nave::getPosicaoY() {
	return posicaoY;
}

void Nave::setPosicaoX(float tx) {
	posicaoX += tx;
}

void Nave::setPosicaoInicialX(float spawn) {
	posicaoX = spawn;
}

void Nave::setPosicaoY(float ty) {
	posicaoY += ty;
}

void Nave::setPosicaoY() {
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