#pragma once
#include<iostream>
#include<conio.h>
#define ANCHO_CONSOLA 120
#define ALTO_CONSOLA 30
using namespace std;
using namespace System;

class Persona
{
private:
	int x, y;
	int dx,dy;
	int ancho, alto;
	int color;
public:
	Persona()
	{
		ancho = 1;
		alto = 1;
		x = ANCHO_CONSOLA / 2;
		y = 28;
		dx = dy = 0;
		color = rand() % 12 + 2;
	}

	~Persona()
	{
	}
	void borrar() {
		Console::SetCursorPosition(x, y); cout << " ";
	}
	void mover() {
		if (x + dx <= 0 || x + dx + ancho >= ANCHO_CONSOLA)dx=0;
		if (y+ dy <= 0 || y + dy + alto >= ALTO_CONSOLA)dy=0;

		x += dx;
		y += dy;
	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor(color);
		Console::SetCursorPosition(x, y); cout << char(254);
	}
	//set
	void setDx_Dy(int _dx, int _dy) {
		dx = _dx;//dx=0
		dy = _dy;//dy=-1
	}
	//get
	int getX() { return x; }
	int getY() { return y; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }
};
