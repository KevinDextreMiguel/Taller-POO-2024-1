#pragma once
#include<iostream>
#include<conio.h>
#define ANCHO_CONSOLA 120
#define ALTO_CONSOLA 30
using namespace std;
using namespace System;

class Raton
{
protected:
	int x, y;
	int dx;
	int ancho, alto;
	int color;
public:
	Raton()
	{
		ancho = 2;
		alto = 2;
		x = rand() % (ANCHO_CONSOLA - ancho);
		y = rand() % (ALTO_CONSOLA - alto);
		dx = 1;
		color = rand() % 13 + 2;
	}

	~Raton() {}

	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "                 ";
		Console::SetCursorPosition(x, y + 1); cout << "                 ";
		Console::SetCursorPosition(x, y + 2); cout << "                 ";
	}
	void mover() {
		if (x + dx <= 0 || x + dx + ancho >= ANCHO_CONSOLA)dx *= -1;

		x += dx;// x = x + dx
	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor(color);
		if (dx > 0) {
			Console::SetCursorPosition(x, y);     cout << "      ____()()";
			Console::SetCursorPosition(x, y + 1); cout << "     /      @@";
			Console::SetCursorPosition(x, y + 2); cout << "`~~~~~\\_;m__m._>o";
		}

		else {
			Console::SetCursorPosition(x, y);     cout << "  ( )( )____";
			Console::SetCursorPosition(x, y + 1); cout << "  @@ \\ ";
			Console::SetCursorPosition(x, y + 2); cout << "o<_.m__m;_/~~~~~`";
		}
	}
};

