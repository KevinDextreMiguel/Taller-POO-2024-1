#pragma once
#include<iostream>
#include<conio.h>
#define ANCHO_CONSOLA 120
#define ALTO_CONSOLA 30
using namespace std;
using namespace System;

class Ovni//padre
{
protected:
	int x, y;
	int dy;
	int ancho, alto;
	int color;
public:
	Ovni(int _x,int _ancho, int _alto,int _color)
	{
		ancho = _ancho;
		alto = _alto;
		x = _x;
		y = 0;
		color = _color;
		dy = 1;
	}

	~Ovni()
	{
	}
	void borrar() {
		for (int i = 0; i < ancho; i++)
			for (int j = 0; j < alto; j++)
			{
				Console::SetCursorPosition(x + i, y + j);
				cout << " ";
			}
	}
	void mover() {
		y += dy;
	}

	virtual void dibujar() {
		
	}

	int getY() { return y; }
	int getDy() { return dy; }
	int getAlto() { return alto; }
};





