#pragma once
#include<iostream>
#include<conio.h>
#define ANCHO_CONSOLA 120
#define ALTO_CONSOLA 30
using namespace std;
using namespace System;

class Terrestre
{
protected:
	int x, y;
	int dx;
	int ancho, alto;
	int color;
public:
	Terrestre(int _ancho,int _alto,int _dx)
	{
		ancho = _ancho;
		alto = _alto;
		dx = _dx;
		x = rand() % (ANCHO_CONSOLA - ancho);
		y = rand() % (ALTO_CONSOLA - alto);
		color = rand() % 12+2;
	}

	~Terrestre(){}

	void mover() {

		if (x + dx <= 0 || x + dx + ancho >= ANCHO_CONSOLA)dx *= -1;

		x += dx;
	}

	void borrar() {
		for (int i = 0; i < ancho; i++)
		{
			for (int j = 0; j < alto; j++)
			{
				Console::SetCursorPosition(x+i, y+j);
				cout << " ";
			}
		}
	}

	bool colision(int _x, int _y, int _ancho, int _alto) {
		return x + ancho > _x && _x + _ancho > x && y + alto > _y && _y + _alto > y;
	}
	virtual void dibujar(){}
};


