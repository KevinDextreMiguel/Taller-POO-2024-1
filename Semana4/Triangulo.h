#pragma once
#include<iostream>
#include<conio.h>
using namespace std;
using namespace System;
class Triangulo
{
private:
	int x, y;
	int dx, dy;
	int lado;
	int color;
	char caracter;
	int contador;
public:
	Triangulo(int _lado,char car)
	{
		lado = _lado;
		caracter = car;
		x = 50;
		y = 15;
		dx = 1;
		dy = -1;
		contador = 1;
		color = rand() % 13 + 2;
	}
	~Triangulo(){}
	void mover() {
		x += dx;// x = x + dx
		y += dy;
	}
	void mostar() {
		Console::ForegroundColor = ConsoleColor(color);
		Console::SetCursorPosition(x, y);cout << caracter;
	}
	void graficar() {
		bool terminar = true;
		while (terminar)
		{
			mostar();
			mover();

			if (contador == lado)dy = 1;
			if (contador == lado * 2) { dy = 0; dx = -2; }
			if (contador == lado*3)terminar = false;

			_sleep(400);
			contador++;
		}
	}
};
