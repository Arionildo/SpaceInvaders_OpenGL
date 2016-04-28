#include "EstadosJogo.h"

EstadosJogo::EstadosJogo()
{
	menuAtivo = true;
	over = false;
	jogo = false;
	novoJogo = "New Game";
	sairJogo = "Quit Game";
	continuar = "Continuar";
	tituloJogo = "Square Invaders";
	setaSelecao = "->";
	_gameOver = "You Lose!";
	aux = 1;
}

void EstadosJogo::Texto(const char *text, int length, int x, int y)
{
	glMatrixMode(GL_PROJECTION);
	double *matrix = new double[16];
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	gluOrtho2D(0, 800, 0, 600);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	glRasterPos2i(x, y);
	for (int i = 0; i < length; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, (int)text[i]);
	}
	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);
}


void EstadosJogo::Titulo(const char *text, int length, int x, int y)
{
	glMatrixMode(GL_PROJECTION);
	double *matrix = new double[16];
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	gluOrtho2D(0, 800, 0, 600);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	glRasterPos2i(x, y);
	for (int i = 0; i < length; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, (int)text[i]);
	}
	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);
}

void EstadosJogo::menu()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(-5, -5); //Inferior Esquerdo
	glVertex2f(-5, 5); //Superior Esquerdo
	glVertex2f(5, 5);  //Superior Direito
	glVertex2f(5, -5);  //Inferior Direito
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	Texto(novoJogo.data(), novoJogo.size(), 352, 270);
	Texto(sairJogo.data(), sairJogo.size(), 350, 220);
	if (aux == 0)
	{
		Titulo(setaSelecao.data(), setaSelecao.size(), 300, 220);
	}

	else
	{
		Titulo(setaSelecao.data(), setaSelecao.size(), 300, 270);
	}
	Titulo(tituloJogo.data(), tituloJogo.size(), 320, 420);
}

void EstadosJogo::gameOver()
{

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(-5, -5); //Inferior Esquerdo
	glVertex2f(-5, 5); //Superior Esquerdo
	glVertex2f(5, 5);  //Superior Direito
	glVertex2f(5, -5);  //Inferior Direito
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	Texto(novoJogo.data(), novoJogo.size(), 352, 270);
	Texto(sairJogo.data(), sairJogo.size(), 350, 220);
	
	if (aux == 0)
	{
		Titulo(setaSelecao.data(), setaSelecao.size(), 300, 220);
	}
	else
	{
		Titulo(setaSelecao.data(), setaSelecao.size(), 300, 270);
	}
	Titulo(_gameOver.data(), _gameOver.size(), 330, 420);
}


//gets ~ sets

void EstadosJogo::setMenuAtivo(bool menu)
{
	menuAtivo = menu;
}

bool EstadosJogo::getMenuAtivo()
{
	return menuAtivo;
}

void EstadosJogo::setOverAtivo(bool _over)
{
	over = _over;
}

bool EstadosJogo::getOverAtivo()
{
	return over;
}

void EstadosJogo::setSairJogo(bool _sair)
{
	saiu = _sair;
}

bool EstadosJogo::getSairJogo()
{
	return saiu;
}

void EstadosJogo::setJogo(bool _jogo)
{
	jogo = _jogo;
}

bool EstadosJogo::getJogo()
{
	return jogo;
}

void EstadosJogo::setAuxMenu(int _aux)
{
	aux = _aux;
}

int EstadosJogo::getAuxMenu()
{
	return aux;
}