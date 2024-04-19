#pragma once
#include<iostream>
#include<conio.h>
#define ANCHO_CONSOLA 120
#define ALTO_CONSOLA 30
using namespace std;
using namespace System;

class Base
{
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;
	int color;
public:
	Base(int _ancho, int _alto)
	{
		ancho = _ancho;
		alto = _alto;
		x = rand() % (ANCHO_CONSOLA - ancho);
		y = rand() % (ALTO_CONSOLA - alto);
		color = rand() % 12 + 2;
		dx = dy = 1;
	}

	~Base()
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
		
		if (x + dx <= 0 || x + dx + ancho >= ANCHO_CONSOLA)dx *= -1;
		if (y + dy <= 0 || y + dy + alto >= ALTO_CONSOLA)dy *= -1;

		x += dx;
		y += dy;
	}
};





