#pragma once
#include<iostream>
#include<conio.h>
#define ANCHO_CONSOLA 120
#define ALTO_CONSOLA 30
using namespace std;
using namespace System;

class Base {//clase padre
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;
	int color;
	char tipo;
public:
	Base(int _x, int _y, int _dx, int _dy, int _ancho, int _alto, int _color, char _tipo) {
		x = _x;
		y=_y;
		dx = _dx; 
		dy=_dy;
		ancho = _ancho;
		alto=_alto;
		color=_color;
		tipo=_tipo;
	}
	~Base(){}
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

	void mover() {

		if (x + dx <= 0 || x + dx + ancho >= ANCHO_CONSOLA)dx *= -1;
		if (y + dy <= 0 || y + dy + alto >= ALTO_CONSOLA)dy *= -1;

		x += dx;
		y += dy;
	}

	virtual void dibujar(){}

	bool colison(int _x, int _y, int _ancho, int _alto) {
		return x + ancho > _x && _x + _ancho > x && y + alto > _y && _y + _alto > y;
	}

	//set
	void setx(int valor) { x=valor; }
	void sety(int valor) { y=valor; }
	void setdx(int valor) { dx=valor; }
	void setdy(int valor) { dy=valor; }
	void setancho(int valor) { ancho=valor; }
	void setalto(int valor) { alto=valor; }
	void setcolor(int valor) { color=valor; }
	void settipo(char valor) { tipo=valor; }

	//get
	int  getx() { return x; }
	int  gety() { return y; }
	int  getdx() { return dx; }
	int  getdy() { return dy; }
	int  getancho() { return ancho; }
	int  getalto() { return alto; }
	int  getcolor() { return color; }
	char gettipo() { return tipo; }
};

